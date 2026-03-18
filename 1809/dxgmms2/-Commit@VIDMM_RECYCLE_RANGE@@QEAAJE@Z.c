/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C005C060
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005BFB8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0028290 (McTemplateK0qpxp.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005C210 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DE1C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // r10
  unsigned int *v5; // r8
  char v6; // r9
  char v7; // r11
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  void *v13; // rdx
  __int64 v14; // rcx
  ULONG Protect; // ebx
  ULONG AllocationType; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // esi
  const GUID *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // eax
  ULONG v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((int *)this + 16);
  v4 = a2;
  v5 = *(unsigned int **)(*((_QWORD *)this + 9) + 32LL);
  v6 = *((_BYTE *)v5 + 16);
  v7 = *((_BYTE *)v5 + 17);
  if ( (_DWORD)v2 )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v2 - 4);
    if ( (_DWORD)v2 == 4 )
    {
      v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v5 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v9, this);
      if ( *((_DWORD *)this + 21) <= 1u && g_IsInternalRelease )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
        v27[3] = 270LL;
        v27[4] = 9LL;
        v27[5] = 0LL;
        v27[6] = 0LL;
        v27[7] = 0LL;
        WdLogEvent5_WdCriticalError(v27);
      }
      v12 = 3LL;
      goto LABEL_19;
    }
    if ( (_DWORD)v2 != 5 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2);
      v26[3] = 270LL;
      v26[4] = 52LL;
      v26[5] = 0LL;
      v26[6] = v2;
      v26[7] = 0LL;
      WdLogEvent5_WdCriticalError(v26);
      goto LABEL_20;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
    goto LABEL_27;
  }
  v13 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v13;
  v14 = *v5;
  if ( (unsigned int)(v14 - 9) <= 1 )
  {
    *((_DWORD *)this + 20) = 8392704;
  }
  else if ( (unsigned int)(v14 - 3) > 3 )
  {
    if ( (_DWORD)v14 == 2 || (Protect = 1028, (_DWORD)v14 == 8) )
      Protect = 4;
    BaseAddress = v13;
    *((_DWORD *)this + 20) = 4096;
    AllocationType = 4096;
    if ( v4 )
    {
      if ( v6 )
      {
LABEL_37:
        AllocationType |= 0x20400000u;
        *((_DWORD *)this + 20) = AllocationType;
LABEL_11:
        v19 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                &RegionSize,
                AllocationType,
                Protect);
        if ( v19 < 0 )
        {
          v28 = *((_DWORD *)this + 20);
          if ( (v28 & 0x800000) != 0 )
          {
            v29 = v28 & 0xFF7FFFFF;
            *((_DWORD *)this + 20) = v29;
            v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, v29, Protect);
          }
          if ( v19 < 0 )
          {
            _InterlockedIncrement(&dword_1C004D690);
            v30 = WdLogNewEntry5_WdLowResource(v18);
            *(_QWORD *)(v30 + 24) = 1013LL;
            WdLogEvent5_WdLowResource(v30);
            return (unsigned int)v19;
          }
        }
        if ( *((_DWORD *)this + 21) && g_IsInternalRelease )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
          v31[3] = 270LL;
          v31[4] = 9LL;
          v31[5] = 0LL;
          v31[6] = 0LL;
          v31[7] = 0LL;
          WdLogEvent5_WdCriticalError(v31);
        }
        if ( bTracingEnabled )
        {
          v21 = *((_QWORD *)this + 9);
          v22 = *(_QWORD *)(v21 + 32);
          v23 = (unsigned int)(*(_DWORD *)v22 - 3) <= 3 ? *(_QWORD *)(v21 + 56) : *((_QWORD *)this + 4);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            McTemplateK0qpxp(
              *(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL),
              &EventCreateProcessAllocationDetails,
              v20,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL) + 8LL),
              (char)this,
              RegionSize,
              v23);
        }
        goto LABEL_18;
      }
      if ( !v7 )
      {
        AllocationType = 8392704;
        *((_DWORD *)this + 20) = 8392704;
      }
    }
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_37;
  }
LABEL_27:
  if ( !*((_DWORD *)this + 21) && g_IsInternalRelease )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
    v32[3] = 270LL;
    v32[4] = 9LL;
    v32[5] = 0LL;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
LABEL_18:
  v12 = 1LL;
LABEL_19:
  VIDMM_RECYCLE_RANGE::Transition(this, v12);
LABEL_20:
  v24 = *((_DWORD *)this + 21);
  if ( v24 )
  {
    if ( v24 == 2 )
      *((_DWORD *)this + 21) = 3;
  }
  else
  {
    *((_DWORD *)this + 21) = 1;
  }
  return 0LL;
}
