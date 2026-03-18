/*
 * XREFs of MiUnlockSystemVa @ 0x1400C46E8
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400C4688 (MiUnlockStealVm.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiReleaseFaultSynchronization @ 0x1402D2D70 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 17;
    result = MiReleaseFaultState(a1 + 24, a2, 0LL);
    *v2 = 0LL;
  }
  return result;
}
