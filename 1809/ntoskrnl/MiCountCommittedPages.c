/*
 * XREFs of MiCountCommittedPages @ 0x1402BD054
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x140083950 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx

  v8 = MiLockWorkingSetShared(a4);
  v9 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared(a4, v8);
  return v9;
}
