/*
 * XREFs of PpmParkReportMask @ 0x1401223D0
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDAB0 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114AA4 (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x14018A2F0 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x140276C6C (HvlParkedVirtualProcessors.c)
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
