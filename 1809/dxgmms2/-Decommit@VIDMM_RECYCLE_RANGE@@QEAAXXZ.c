/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005BBAC
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005BAF4 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005BFB8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005C210 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DC44 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DE1C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rbx
  _QWORD *v9; // rax

  v2 = *((int *)this + 16);
  v4 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v4 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v5 - 3) <= 3 || (unsigned int)(*(_DWORD *)v5 - 9) <= 1 )
    {
      v6 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v5 + 8), this);
      v6 = 5LL;
    }
    goto LABEL_7;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v7 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v7 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v8, this);
    v6 = 4LL;
LABEL_7:
    VIDMM_RECYCLE_RANGE::Transition(this, v6);
    return;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
  v9[7] = 0LL;
  v9[3] = 270LL;
  v9[4] = 52LL;
  v9[5] = 1LL;
  v9[6] = v2;
  WdLogEvent5_WdCriticalError(v9);
}
