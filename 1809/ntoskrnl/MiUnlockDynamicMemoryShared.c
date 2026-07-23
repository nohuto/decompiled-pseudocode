/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1400A88A0
 * Callers:
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x14084E600 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (signed __int64 *)(a1 + 184);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
