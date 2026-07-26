/*
 * XREFs of NdisDllInitialize @ 0x1C0039550
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 *     NdispRegisterShim @ 0x1C0109984 (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C0146F4C (ndisInitializePerProcessorSlotAllocator.c)
 *     ?ndisCaptureProcessorConfigurationAtBoot@@YAXXZ @ 0x1C0146FB4 (-ndisCaptureProcessorConfigurationAtBoot@@YAXXZ.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !LOBYTE(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    LOBYTE(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
    ndisCaptureProcessorConfigurationAtBoot();
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = KeGetRecommendedSharedDataAlignment();
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) < 0x40 )
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 64;
    ndisInitializePerProcessorSlotAllocator();
    if ( _InterlockedIncrement(&NumNdisDllInitialize) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      PoolWithTag = (struct _NDIS_LEGACY_RWLOCK_TRACKER *)ExAllocatePoolWithTag(
                                                            NonPagedPoolNx,
                                                            520LL * ndisMaxNumberOfProcessors,
                                                            0x2020444Eu);
      ndisRWLocksOwnedByThread = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 520LL * ndisMaxNumberOfProcessors);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v0;
}
