/*
 * XREFs of MmWorkingSetManager @ 0x1402C9764
 * Callers:
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 * Callees:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 */

__int64 __fastcall MmWorkingSetManager(int a1)
{
  return MiWorkingSetManager((__int64)&MiSystemPartition, a1);
}
