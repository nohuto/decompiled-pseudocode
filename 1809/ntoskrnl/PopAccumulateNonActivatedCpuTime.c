/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1402DE4A4
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402DE50C (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAA8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x14086F268 (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C20 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A62C4 (KeGetPrcb.c)
 *     PpmParkSnapNodeIdleTime @ 0x1402E8158 (PpmParkSnapNodeIdleTime.c)
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
