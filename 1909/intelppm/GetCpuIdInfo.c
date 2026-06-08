/*
 * XREFs of GetCpuIdInfo @ 0x1C0004340
 * Callers:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001CF8 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001D78 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0001DF0 (IsHwpSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0001E68 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001EE4 (IsHwpNativeInterruptSupported.c)
 *     ValidatePStateCapability @ 0x1C0004090 (ValidatePStateCapability.c)
 *     IsTurboModeSupported @ 0x1C0004130 (IsTurboModeSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C0006998 (IsHwpFastMsrSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006A18 (IsHwpHighestInterruptSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006A98 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006B1C (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006B9C (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C001F950 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001FA10 (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0025070 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C00299E4 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0029AA4 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
