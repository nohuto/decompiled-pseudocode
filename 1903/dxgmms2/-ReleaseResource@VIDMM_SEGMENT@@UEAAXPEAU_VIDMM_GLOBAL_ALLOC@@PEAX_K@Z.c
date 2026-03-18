/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C007E590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0025734 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C002647C (McTemplateK0pqx.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0060D28 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007E6C0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        unsigned __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbp
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v14[3] = v6;
    v14[4] = a3;
    v14[5] = a4;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 32) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted(
        (VIDMM_SEGMENT *)this,
        **((struct VIDMM_PARTITION ***)v6 + 61),
        *((_QWORD *)v6 + 2));
      --*((_DWORD *)this + 80);
      if ( ((_DWORD)this[10] & 0x1001) != 0 )
      {
        v15 = *((_QWORD *)v6 + 62);
        if ( !v15 || _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 44), 0xFFFFFFFF) == 1 )
        {
          v16 = **((_QWORD **)v6 + 61);
          a2 = (struct _VIDMM_GLOBAL_ALLOC *)_InterlockedExchangeAdd64(
                                               (volatile signed __int64 *)(v16 + 56),
                                               -*((_QWORD *)v6 + 2));
          if ( (unsigned __int64)a2 < *((_QWORD *)v6 + 2) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v16, a2);
            *(_QWORD *)(v17 + 24) = 1894LL;
            WdLogEvent5_WdAssertion(v17);
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[10] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[19], a3);
    v8 = this[28];
    if ( v8 < (VIDMM_GLOBAL *)((char *)v8 - a4) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v18 + 24) = 1919LL;
      WdLogEvent5_WdAssertion(v18);
      v8 = this[28];
    }
    --*((_DWORD *)this + 81);
    v9 = (__int64)v8 - a4;
    v10 = bTracingEnabled == 0;
    this[28] = (VIDMM_GLOBAL *)v9;
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqx(
        v9,
        &TotalBytesResidentInSegment,
        (const GUID *)a3,
        *((_QWORD *)this[1] + 3),
        *((_DWORD *)this + 4) + 1,
        v9);
    if ( !v6 || (*((_DWORD *)v6 + 20) & 0x200) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v19[3] = a4;
        v19[4] = this[55];
        v19[5] = v6;
      }
      this[55] = (VIDMM_GLOBAL *)((char *)this[55] - a4);
      if ( v6 )
        *((_DWORD *)v6 + 20) &= ~0x200u;
      *((_BYTE *)this + 448) = 0;
    }
    if ( *((_DWORD *)this + 92) != -1 && v6 && (*((_DWORD *)v6 + 19) & 0x200) == 0 )
    {
      v20 = (unsigned __int64)this[29];
      v21 = (VIDMM_GLOBAL *)v20;
      if ( v20 < a4 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20, a2);
        *(_QWORD *)(v22 + 24) = 1953LL;
        WdLogEvent5_WdAssertion(v22);
        v21 = this[29];
      }
      v23 = (unsigned __int64)v21 - a4;
      this[29] = (VIDMM_GLOBAL *)v23;
      if ( v20 > qword_1C004E408 && v23 <= qword_1C004E408 )
      {
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 5008))(
          *((_QWORD *)this[1] + 5014),
          *((unsigned int *)this + 92));
        v23 = (unsigned __int64)this[29];
      }
      if ( !v23 )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[10] & 0x1001) != 0 )
    {
      v11 = *((_QWORD *)v6 + 62);
      if ( !v11 || _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 40), 0xFFFFFFFF) == 1 )
      {
        v12 = **((_QWORD **)v6 + 61);
        v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), -(__int64)a4);
        if ( v13 < a4 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12, v13);
          *(_QWORD *)(v24 + 24) = 1979LL;
          WdLogEvent5_WdAssertion(v24);
        }
      }
      *((_QWORD *)this[1] + 5021) -= a4;
    }
  }
  else
  {
    *((_DWORD *)v6 + 20) &= ~0x200u;
  }
}
