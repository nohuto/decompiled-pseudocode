/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0067568
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C00674D0 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0028DCC (McTemplateK0qpxp.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00676FC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00693D0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00694F0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C00699F4 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  GUID *v9; // r8
  __int64 v10; // rdx
  ULONG v11; // r9d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((int *)this + 16);
  if ( (_DWORD)v2 )
  {
    v4 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v2 - 4);
    if ( (_DWORD)v2 == 4 )
    {
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v5 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v6, this);
      if ( dword_1C004E360 && *((_DWORD *)this + 20) <= 1u && g_IsInternalRelease )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
        v25[3] = 270LL;
        v25[4] = 9LL;
        v25[5] = 0LL;
        v25[6] = 0LL;
        v25[7] = 0LL;
        WdLogEvent5_WdCriticalError(v25);
      }
      v10 = 3LL;
      goto LABEL_17;
    }
    if ( (_DWORD)v2 != 5 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
      v24[3] = 270LL;
      v24[4] = 52LL;
      v24[5] = 0LL;
      v24[6] = v2;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
      goto LABEL_18;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v4, this);
  }
  else
  {
    v9 = (GUID *)*((_QWORD *)this + 4);
    RegionSize = *((_QWORD *)this + 5) - (_QWORD)v9;
    v22 = *(unsigned int **)(*((_QWORD *)this + 9) + 32LL);
    v23 = *v22;
    if ( (unsigned int)(v23 - 9) > 1 && (unsigned int)(v23 - 3) > 3 )
    {
      if ( (_DWORD)v23 == 2 || (v11 = 1028, (_DWORD)v23 == 8) )
        v11 = 4;
      BaseAddress = v9;
      v12 = VidMmAllocateVirtualMemory(&BaseAddress, &RegionSize, 0x1000u, v11);
      v15 = v12;
      if ( v12 < 0 )
      {
        _InterlockedIncrement(&dword_1C004E6B0);
        v26 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v26 + 24) = v15;
        WdLogEvent5_WdLowResource(v26);
        return (unsigned int)v15;
      }
      if ( dword_1C004E360 && *((_DWORD *)this + 20) && g_IsInternalRelease )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
        v27[3] = 270LL;
        v27[4] = 9LL;
        v27[5] = 0LL;
        v27[6] = 0LL;
        v27[7] = 0LL;
        WdLogEvent5_WdCriticalError(v27);
      }
      if ( bTracingEnabled )
      {
        v16 = *((_QWORD *)this + 9);
        v17 = *(_QWORD *)(v16 + 32);
        v18 = (unsigned int)(*(_DWORD *)v17 - 3) <= 3 ? *(_QWORD *)(v16 + 56) : *((_QWORD *)this + 4);
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
        v9 = *(GUID **)(v19 + 8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          McTemplateK0qpxp(v19, &EventCreateProcessAllocationDetails, v9, (int)v9, (char)this, RegionSize, v18);
      }
      goto LABEL_16;
    }
  }
  if ( dword_1C004E360 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v23);
    v28[3] = 270LL;
    v28[4] = 9LL;
    v28[5] = 0LL;
    v28[6] = 0LL;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
LABEL_16:
  v10 = 1LL;
LABEL_17:
  VIDMM_RECYCLE_RANGE::Transition(this, v10, v9);
LABEL_18:
  v20 = *((_DWORD *)this + 20);
  if ( v20 )
  {
    if ( v20 == 2 )
      *((_DWORD *)this + 20) = 3;
  }
  else
  {
    *((_DWORD *)this + 20) = 1;
  }
  return 0LL;
}
