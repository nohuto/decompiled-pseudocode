/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C001C68C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001BD30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C640 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIBuildDeviceDpc @ 0x1C001C6E0 (ACPIBuildDeviceDpc.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001E480 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E634 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C002F450 (ACPITableLoadCallBack.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C004E94C (ACPIDeviceInternalQueueRequest.c)
 *     ACPIInitStartACPI @ 0x1C00B73F4 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
