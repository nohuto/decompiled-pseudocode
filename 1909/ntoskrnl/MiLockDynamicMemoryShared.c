/*
 * XREFs of MiLockDynamicMemoryShared @ 0x140005FF4
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CF250 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074630C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x14089250C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 184, 0LL);
}
