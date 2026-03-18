/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x1405663A4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A62A4 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140142B40 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140417CA8 = PopCaptureTimeOnProcZero();
  qword_140417C70 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140417C68 - HypervisorTscAdjustment;
  qword_140417C98 = HypervisorTscAdjustment;
  result = qword_140417C90 + HypervisorTscAdjustment;
  qword_140417C80 -= result;
  qword_140417CA0 -= result;
  qword_140417C68 = v1;
  qword_140417CA8 -= result;
  qword_140417BF8 = v1 - qword_140417C00;
  return result;
}
