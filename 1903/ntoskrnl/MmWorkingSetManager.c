/*
 * XREFs of MmWorkingSetManager @ 0x1402C9A04
 * Callers:
 *     KeBalanceSetManager @ 0x14018D570 (KeBalanceSetManager.c)
 * Callees:
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 */

__int64 __fastcall MmWorkingSetManager(int a1)
{
  return MiWorkingSetManager((__int64)&MiSystemPartition, a1);
}
