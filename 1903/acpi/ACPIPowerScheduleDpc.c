/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C000F36C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000ECB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C000EE44 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C000F274 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIBuildDeviceDpc @ 0x1C001C760 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0026AE4 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C0030050 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00BEF3C (ACPIInitStartACPI.c)
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
