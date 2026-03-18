/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0030050
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000EF0C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C000F36C (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0012260 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C0031358 (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C0063CF8 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (__int64)ACPITableLoadNotifyPnp, 0LL) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x1100A2uLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
