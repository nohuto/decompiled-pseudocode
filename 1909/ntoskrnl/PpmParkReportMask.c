/*
 * XREFs of PpmParkReportMask @ 0x1401243A0
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x140194E20 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x14028AC28 (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, 2u);
  }
  return 1;
}
