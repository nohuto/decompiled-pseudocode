/*
 * XREFs of PpmParkReportMask @ 0x1401239B0
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x140194640 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x14028AEC8 (HvlParkedVirtualProcessors.c)
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
