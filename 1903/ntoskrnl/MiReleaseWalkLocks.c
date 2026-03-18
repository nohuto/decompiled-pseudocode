/*
 * XREFs of MiReleaseWalkLocks @ 0x140119A60
 * Callers:
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x1401199E4 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x1402C8B60 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x1402E6410 (MiCombineWorkingSetTail.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rdi

  v4 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 16), v4);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v6, *(_BYTE *)(a1 + 6));
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465E94);
    LOBYTE(v4) = *(_BYTE *)(a1 + 6);
    MiUnlockWorkingSetExclusive(v6, v4, a3, a4);
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
