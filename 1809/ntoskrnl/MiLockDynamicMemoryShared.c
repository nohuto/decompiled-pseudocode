/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1400A8934
 * Callers:
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DADFC (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x14084C894 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x14084D3A0 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x14085F308 (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 184, 0LL);
}
