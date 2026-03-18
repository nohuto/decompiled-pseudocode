/*
 * XREFs of ACPITableUnload @ 0x1C005D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeBuildEventMasks @ 0x1C0016DA0 (ACPIGpeBuildEventMasks.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C00C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C078 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildScheduleDpc @ 0x1C001DDCC (ACPIBuildScheduleDpc.c)
 *     ACPIGpeClearEventMasks @ 0x1C002538C (ACPIGpeClearEventMasks.c)
 *     ACPIFlushQueuesUnload @ 0x1C004ACC8 (ACPIFlushQueuesUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C009AD30 (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPITableUnload(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  KIRQL v5; // al
  int v6; // ebx
  KIRQL v7; // al
  int v8; // ebx
  KIRQL v9; // bl

  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v6 = ++AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
    if ( v6 == 1 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeClearEventMasks();
      if ( a3 )
      {
        return (unsigned int)ACPIFlushQueuesUnload((_QWORD *)RootDeviceExtension, a3, 1);
      }
      else
      {
        ACPIBuildFlushQueue(RootDeviceExtension, 0LL);
        ACPIDevicePowerFlushQueue(RootDeviceExtension);
      }
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = --AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v8 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      v3 = ACPIBuildSpecialSynchronizationRequest(RootDeviceExtension, (__int64)ACPITableUnloadCallBack, a3, 127, 0);
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v9);
    }
  }
  return v3;
}
