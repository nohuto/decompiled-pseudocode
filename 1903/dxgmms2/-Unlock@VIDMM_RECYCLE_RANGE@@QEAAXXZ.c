/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066E80
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0066ACC (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C0066D74 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 * Callees:
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0067AEC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698E0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rax

  v2 = *((int *)this + 16);
  if ( (_DWORD)v2 == 2 )
  {
    if ( (*((_DWORD *)this + 22))-- == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        this);
      VIDMM_RECYCLE_RANGE::Transition(this, 3LL, v5);
    }
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 52LL;
    v6[5] = 3LL;
    v6[6] = v2;
    WdLogEvent5_WdCriticalError(v6);
  }
}
