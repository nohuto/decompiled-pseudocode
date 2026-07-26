/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C0065580
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C004C170 (NdisFreeSharedMemory.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0065680 (ndisMQueuedAllocateSharedHandler.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00CF3A4 (ndisMInitializeScatterGatherDma.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00E9F40 (NdisMDeregisterScatterGatherDma.c)
 *     ndisFreeSharedMemory @ 0x1C00F2784 (ndisFreeSharedMemory_ea_1C00F2784.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00F51C8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     NdisMAllocateMapRegisters @ 0x1C0117D80 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0118370 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0118440 (NdisMFreeMapRegisters.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C00826FC (PplDestroyLookasideList.c)
 */

void __fastcall ndisDereferenceDmaAdapter(PVOID P)
{
  __int64 v1; // rdi
  KIRQL v3; // bp
  __int64 v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = *((_QWORD *)P + 1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1864) = 465090;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
  {
    v4 = *((_QWORD *)P + 3);
    if ( v4 )
    {
      *((_QWORD *)P + 16) = v4;
      (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 8LL))();
      *((_QWORD *)P + 3) = 0LL;
    }
    v5 = (void *)*((_QWORD *)P + 8);
    if ( v5 )
    {
      PplDestroyLookasideList(v5);
      *((_QWORD *)P + 8) = 0LL;
    }
    v6 = (struct _KEVENT *)*((_QWORD *)P + 10);
    if ( v6 )
      KeSetEvent(v6, 0, 0);
    *(_QWORD *)(v1 + 504) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v3);
}
