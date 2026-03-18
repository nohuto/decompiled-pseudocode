/*
 * XREFs of CcNotifyWriteBehind @ 0x14016A6C8
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1405ABB00 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140123270 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
