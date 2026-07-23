/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1400A8874
 * Callers:
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x14084E600 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 184, 0LL);
}
