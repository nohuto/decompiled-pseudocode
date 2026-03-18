/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1402FADC0
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402FAE28 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AAE50 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PpmParkSnapNodeIdleTime @ 0x1402F87CC (PpmParkSnapNodeIdleTime.c)
 */

__int64 __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 Prcb; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  Prcb = KeGetPrcb(0);
  result = PpmParkSnapNodeIdleTime(Prcb, &v10, &v9);
  v8 = v10;
  if ( !a1 )
  {
    result = v10 - *a2 - v9;
    *a3 += result;
  }
  *a2 = v8 - v9;
  return result;
}
