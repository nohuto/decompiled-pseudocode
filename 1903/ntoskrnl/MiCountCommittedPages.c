/*
 * XREFs of MiCountCommittedPages @ 0x1402D3AA0
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v8; // r9
  unsigned __int8 v9; // di
  __int64 v10; // rbx

  LOBYTE(v8) = MiLockWorkingSetShared(a4);
  v9 = v8;
  v10 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared(a4, v9);
  return v10;
}
