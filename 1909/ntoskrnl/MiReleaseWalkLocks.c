/*
 * XREFs of MiReleaseWalkLocks @ 0x140117AF0
 * Callers:
 *     MiGetNextPageTablePte @ 0x14004AA90 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x140117A74 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x1402C88C0 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x1402E6170 (MiCombineWorkingSetTail.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465B94);
    LOBYTE(v4) = *(_BYTE *)(a1 + 6);
    MiUnlockWorkingSetExclusive(v6, v4, a3, a4);
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
