/*
 * XREFs of MiUnlockSystemVa @ 0x1400A15F4
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x1400A1594 (MiUnlockStealVm.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x1400F48A0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiReleaseFaultSynchronization @ 0x1402D3010 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
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
