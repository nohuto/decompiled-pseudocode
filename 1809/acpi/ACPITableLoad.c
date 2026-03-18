/*
 * XREFs of ACPITableLoad @ 0x1C0024FF0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BA654 (ACPIInitializeDDBs.c)
 * Callees:
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0016DA0 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C078 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildScheduleDpc @ 0x1C001DDCC (ACPIBuildScheduleDpc.c)
 *     ACPIBuildRunMethodRequest @ 0x1C002523C (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C002538C (ACPIGpeClearEventMasks.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1C00261F0 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0026218 (ACPIEcInitOpRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 */

__int64 __fastcall ACPITableLoad(__int64 a1, int a2, __int64 a3)
{
  KIRQL v4; // al
  int v5; // ebx
  KIRQL v7; // al
  int v8; // esi
  KIRQL v9; // bp
  int v10; // esi
  KIRQL v11; // bl
  __int64 i; // rcx
  int v13; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v5 = ++AcpiTableLoadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v4);
    if ( v5 == 1 && !*((_BYTE *)AcpiInformation + 133) )
      ACPIGpeClearEventMasks();
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = --AcpiTableLoadDelta;
    if ( !AcpiTableLoadDelta )
    {
      for ( i = AcpiBuildQueueList; (__int64 *)i != &AcpiBuildQueueList; i = *(_QWORD *)i )
        *(_DWORD *)(i + 20) &= ~0x40u;
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v8 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      if ( (gOverrideFlags & 2) == 0 )
        ACPIEcInitOpRegionHandler();
      if ( !*(_QWORD *)(RootDeviceExtension + 712) )
        ACPIRootInitialize();
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v10 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v13);
      if ( v13 )
        v10 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
      if ( v10 < 0
        || (EnableDisableCMOSRegions(*(_QWORD *)(RootDeviceExtension + 712), 1u),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (__int64)ACPITableLoadCallBack,
                   a3 == 0,
                   127,
                   0) < 0) )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x110292uLL, 0LL, 0LL);
      }
      v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v11);
    }
  }
  return 0LL;
}
