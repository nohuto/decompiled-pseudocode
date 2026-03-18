/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00674BC
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00673F4 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C00678C0 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0067AEC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00697C0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698E0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069D3C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v5 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v9 - 3) <= 3 || (unsigned int)(*(_DWORD *)v9 - 9) <= 1 )
    {
      v8 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v9 + 8), this);
      v8 = 5LL;
    }
    goto LABEL_5;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v6 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v7, this);
    v8 = 4LL;
LABEL_5:
    VIDMM_RECYCLE_RANGE::Transition(this, v8, a3);
    return;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
  v10[7] = 0LL;
  v10[3] = 270LL;
  v10[4] = 52LL;
  v10[5] = 1LL;
  v10[6] = v3;
  WdLogEvent5_WdCriticalError(v10);
}
