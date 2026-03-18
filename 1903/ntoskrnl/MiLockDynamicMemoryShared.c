/*
 * XREFs of MiLockDynamicMemoryShared @ 0x140005F64
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074440C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 184, 0LL);
}
