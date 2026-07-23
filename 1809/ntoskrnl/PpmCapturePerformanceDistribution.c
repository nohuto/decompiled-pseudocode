/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x1402E307C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1402E3240 (PpmCapturePerformanceDistributionCallback.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int16 *v6; // rcx
  __int64 Prcb; // rsi
  unsigned __int8 CurrentIrql; // bl
  int v10; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  unsigned int v13; // eax
  ULONG v14; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v15; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+34h] [rbp-CCh]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+50h] [rbp-B0h]
  _DWORD v21[44]; // [rsp+60h] [rbp-A0h] BYREF

  v15 = a1;
  v6 = *(unsigned __int16 **)a4;
  v19[0] = 0LL;
  v16 = 0;
  v17 = 4 * a3 + 4;
  v20 = *(_WORD *)(a4 + 8);
  v18 = 0LL;
  v16 = a2;
  v19[1] = v6;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v19) )
  {
    Prcb = KeGetPrcb(v14);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v10 = PpmCapturePerformanceDistributionCallback(Prcb);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v10 < 0 )
    {
      v21[0] = 1310721;
      memset(&v21[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v21, *(_DWORD *)(Prcb + 36));
      result = PopExecuteOnTargetProcessors(
                 (__int64)v21,
                 (__int64)PpmCapturePerformanceDistributionCallback,
                 (__int64)&v15,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v13 = v17;
  *a5 = v17;
  if ( v13 > a2 )
    return 3221225476LL;
  *v15 = a3;
  return 0LL;
}
