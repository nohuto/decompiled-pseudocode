/*
 * XREFs of MiReleaseWalkLocks @ 0x140122778
 * Callers:
 *     MiGetNextPageTablePte @ 0x140070A30 (MiGetNextPageTablePte.c)
 *     MiCombineWorkingSetTail @ 0x1401226A0 (MiCombineWorkingSetTail.c)
 *     MiYieldPageTableWalk @ 0x140122708 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x1402B3600 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rdi

  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v4);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v6, *(_BYTE *)(a1 + 4));
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043A4E4);
    MiUnlockWorkingSetExclusive(v6, *(_BYTE *)(a1 + 4), a3, a4);
  }
  *(_BYTE *)(a1 + 8) = 1;
}
