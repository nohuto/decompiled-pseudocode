/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C009F7C8
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C00354F4 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 *     NdisFreeSharedMemory @ 0x1C0078E50 (NdisFreeSharedMemory.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C0079080 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C009CE90 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C009F8B4 (ndisFreeSharedMemoryInternal.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4F8C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C0119274 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0139AD0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0139BE0 (NdisMFreeMapRegisters.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C00C829C (PplDestroyLookasideList.c)
 */

void __fastcall ndisDereferenceDmaAdapter(PVOID P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // bp
  __int64 v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = (KSPIN_LOCK *)*((_QWORD *)P + 1);
  v3 = KeAcquireSpinLockRaiseToDpc(v1 + 12);
  v1[65] = (KSPIN_LOCK)KeGetCurrentThread();
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
    v1[63] = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v1[65] = 0LL;
  KeReleaseSpinLock(v1 + 12, v3);
}
