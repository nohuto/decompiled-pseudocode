/*
 * XREFs of CcNotifyWriteBehind @ 0x1401531C8
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
