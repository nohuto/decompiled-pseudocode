/*
 * XREFs of MiUnlockSystemVa @ 0x1400ECE44
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     MiReleaseFaultSynchronization @ 0x1402BC8BC (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    result = MiReleaseFaultState((__int64 *)(a1 + 24), 17, 0LL);
    *v1 = 0LL;
  }
  return result;
}
