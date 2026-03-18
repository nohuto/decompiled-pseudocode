/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x140005F90
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CF250 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074630C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x14089250C (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  v2 = a1 + 184;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
