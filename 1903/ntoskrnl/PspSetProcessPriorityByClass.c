/*
 * XREFs of PspSetProcessPriorityByClass @ 0x1400E4070
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x14068E300 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14068E330 (PspSetProcessForegroundBackgroundRequest.c)
 *     PspApplyJobLimitsToProcess @ 0x140694784 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x14068E424 (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PspSetProcessPriorityByClass(int a1, int a2)
{
  int v3; // eax
  int v4; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v6, (unsigned int)&v8, (__int64)&v7);
  LOBYTE(v4) = v6;
  return KeSetPriorityAndQuantumProcess(a1, v3, v4, v8, v7);
}
