/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C0012064
 * Callers:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0010BC0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0014C50 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0015320 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPITableLoad @ 0x1C0021410 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0021658 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C002B800 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C300 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002CDF4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F5F0 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
