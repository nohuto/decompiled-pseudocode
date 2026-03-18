/*
 * XREFs of MiReacquireWalkLocks @ 0x1402BF6D8
 * Callers:
 *     MiQueryEPTAccessedState @ 0x1402C8B60 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 valid; // rax
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( !a3 )
    MiLockWorkingSetShared(v3);
  valid = MiLockLowestValidPageTable(v3, a2 << 25 >> 16, &v9);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 2) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 40) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v3, valid);
    if ( !a3 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 6));
    return 0LL;
  }
  return result;
}
