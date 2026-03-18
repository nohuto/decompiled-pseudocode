/*
 * XREFs of PspSetProcessPriorityByClass @ 0x1400D79BC
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140604550 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14064BA2C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessPriorityByClass @ 0x14064BB50 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x14064B290 (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PspSetProcessPriorityByClass(__int64 a1, int a2)
{
  unsigned int v3; // eax
  char v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v5, (unsigned int)&v7, (__int64)&v6);
  return KeSetPriorityAndQuantumProcess(a1, v3, v5, v7, v6);
}
