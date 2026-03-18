/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000253C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0025CF0 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A5E0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A73C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006AE5C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACB74 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  char v7; // r14
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  VIDMM_GLOBAL *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  VIDMM_GLOBAL *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  VIDMM_SYSMEM_SEGMENT *v25; // rax
  VIDMM_SYSMEM_SEGMENT **v26; // rdx
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r8
  unsigned int v32; // eax
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v34; // rcx
  VIDMM_GLOBAL *v35; // rcx
  __int64 v36; // rax
  signed __int32 v37[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v38; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  v6 = this[1];
  if ( *(_BYTE *)(*((_QWORD *)v6 + 3) + 2502LL) || *(_BYTE *)(*((_QWORD *)v6 + 2) + 777LL) )
  {
    v36 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v36 + 24) = a2;
    WdLogEvent5_WdEvent(v36);
    return 3221226166LL;
  }
  v7 = 0;
  v8 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    v7 = 1;
    LODWORD(v9) = 0;
  }
  else
  {
    LODWORD(v9) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( (int)v9 < 0 )
    {
LABEL_20:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      return (unsigned int)v9;
    }
    v8 = 1;
  }
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v10 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v13 + 24) = a2;
      WdLogEvent5_WdAssertion(v13);
      LODWORD(v9) = -1073741801;
      goto LABEL_18;
    }
    *((_QWORD *)a2 + 46) = v10;
  }
  v14 = this[1];
  if ( !*((_BYTE *)v14 + 40139) )
    goto LABEL_17;
  v15 = VIDMM_GLOBAL::IoMmuMapAllocation(v14, a2);
  v9 = v15;
  if ( v15 < 0 )
  {
    _InterlockedIncrement(&dword_1C004E734);
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = v9;
    WdLogEvent5_WdLowResource(v17);
LABEL_17:
    if ( (int)v9 < 0 )
    {
LABEL_18:
      if ( v8 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      goto LABEL_20;
    }
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v21 = this[1];
    LODWORD(v38) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v19, &EventPagingOpSysmemCommit, v20, *((_QWORD *)v21 + 3), a2, v38);
  }
  v22 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 17) = v22;
  v23 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 18) = v23;
  v24 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 19) = v24;
  v25 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v26 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v26 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v25 = this + 20;
  *((_QWORD *)a2 + 49) = v26;
  *v26 = v25;
  this[21] = v25;
  v27 = *((_DWORD *)a2 + 18);
  if ( !v27
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v28 = *((_DWORD *)this + 4) + 1) : (v28 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v28
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v29 = *((_DWORD *)this + 4) + 1) : (v29 = 0), ((v27 >> 6) & 0x1F) == v29)) )
  {
    v30 = 0x800000;
  }
  else
  {
    v30 = 0;
  }
  v31 = *((_QWORD *)a2 + 13);
  v32 = v30 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  *((_DWORD *)a2 + 19) = v32;
  if ( v31 && *(_QWORD *)(v31 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v31, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v32 = *((_DWORD *)a2 + 19);
  }
  *(_QWORD *)(1560LL * (v32 & 0x3F) + *((_QWORD *)this[1] + 5023) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v34 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v7 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  v35 = this[1];
  _InterlockedOr(v37, 0);
  ++*((_QWORD *)v35 + 5);
  return 0LL;
}
