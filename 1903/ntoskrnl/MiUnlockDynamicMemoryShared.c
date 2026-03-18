/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x140005F00
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074440C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
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
