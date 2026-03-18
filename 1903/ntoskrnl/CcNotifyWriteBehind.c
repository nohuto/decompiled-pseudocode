/*
 * XREFs of CcNotifyWriteBehind @ 0x140160AF4
 * Callers:
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x1400F96E0 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
