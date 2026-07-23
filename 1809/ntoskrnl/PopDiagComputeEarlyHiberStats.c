/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x1405673A4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140142C60 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140418D48 = PopCaptureTimeOnProcZero();
  qword_140418D10 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140418D08 - HypervisorTscAdjustment;
  qword_140418D38 = HypervisorTscAdjustment;
  result = qword_140418D30 + HypervisorTscAdjustment;
  qword_140418D20 -= result;
  qword_140418D40 -= result;
  qword_140418D08 = v1;
  qword_140418D48 -= result;
  qword_140418C98 = v1 - qword_140418CA0;
  return result;
}
