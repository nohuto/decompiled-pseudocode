/*
 * XREFs of GetCpuIdInfo @ 0x1C0004C40
 * Callers:
 *     IsHgsInterruptSupported @ 0x1C00030D0 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0003138 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C00031A4 (IsHwpSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0003208 (IsPerformanceEnergyBiasSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C000326C (IsNonwrappingACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0003E30 (ValidatePStateCapability.c)
 *     IsTurboModeSupported @ 0x1C0003EC8 (IsTurboModeSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C0006D78 (IsHwpFastMsrSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006DF0 (IsHwpHighestInterruptSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006E5C (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006ED4 (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006F40 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C00236F0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C00237A4 (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C00245B0 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C0027A50 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0027B10 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0036E5C (InitDriver.c)
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
