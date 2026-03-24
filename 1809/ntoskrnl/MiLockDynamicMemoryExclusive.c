/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140091050
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     MiGetChannelInformation @ 0x1406086FC (MiGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x14084C894 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140860828 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
