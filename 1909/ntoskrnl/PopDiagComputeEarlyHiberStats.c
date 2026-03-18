/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140596040
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14015E604 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_1404435E8 = PopCaptureTimeOnProcZero();
  qword_1404435B0 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_1404435A8 - HypervisorTscAdjustment;
  qword_1404435D8 = HypervisorTscAdjustment;
  result = qword_1404435D0 + HypervisorTscAdjustment;
  qword_1404435C0 -= result;
  qword_1404435E0 -= result;
  qword_1404435A8 = v1;
  qword_1404435E8 -= result;
  qword_140443538 = v1 - qword_140443540;
  return result;
}
