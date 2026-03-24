/*
 * XREFs of CcNotifyWriteBehind @ 0x1401530C8
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140120080 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
