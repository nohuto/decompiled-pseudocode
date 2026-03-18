/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x1402FF644
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1402FF830 (PpmCapturePerformanceDistributionCallback.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int16 *v9; // rcx
  __int64 Prcb; // rsi
  unsigned __int8 CurrentIrql; // bl
  int v12; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  unsigned int v15; // eax
  ULONG v16; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v17; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+52h] [rbp-AEh]
  __int16 v24; // [rsp+56h] [rbp-AAh]
  _DWORD v25[44]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v25, 0, 0xA8uLL);
  v9 = *(unsigned __int16 **)a4;
  v19 = 4 * a3 + 4;
  v22 = *(_WORD *)(a4 + 8);
  v23 = 0;
  v24 = 0;
  v20 = 0LL;
  v17 = a1;
  v18 = a2;
  v21[1] = v9;
  v21[0] = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v21) )
  {
    Prcb = KeGetPrcb(v16);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v12 = PpmCapturePerformanceDistributionCallback(Prcb);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v12 < 0 )
    {
      v25[0] = 1310721;
      memset(&v25[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v25, *(_DWORD *)(Prcb + 36));
      result = PopExecuteOnTargetProcessors(
                 (__int64)v25,
                 (__int64)PpmCapturePerformanceDistributionCallback,
                 (__int64)&v17,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v15 = v19;
  *a5 = v19;
  if ( v15 > a2 )
    return 3221225476LL;
  *v17 = a3;
  return 0LL;
}
