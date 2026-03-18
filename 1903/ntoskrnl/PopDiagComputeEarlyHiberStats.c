/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140596040
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14015DF64 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140443668 = PopCaptureTimeOnProcZero();
  qword_140443630 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140443628 - HypervisorTscAdjustment;
  qword_140443658 = HypervisorTscAdjustment;
  result = qword_140443650 + HypervisorTscAdjustment;
  qword_140443640 -= result;
  qword_140443660 -= result;
  qword_140443628 = v1;
  qword_140443668 -= result;
  qword_1404435B8 = v1 - qword_1404435C0;
  return result;
}
