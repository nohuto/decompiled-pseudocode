/*
 * XREFs of PoGetIdleTimes @ 0x140004998
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1405C9A04 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x140004B50 (PopGetIdleTimesCallback.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v11; // rdx
  int IdleTimesCallback; // edi
  ULONG v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v16[44]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v16, 0, 0xA8uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  CurrentThread = KeGetCurrentThread();
  v9 = Prcb;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  IdleTimesCallback = PopGetIdleTimesCallback(v9, a2, a3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11);
  }
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v16[0] = 1310721;
    memset(&v16[1], 0, 0xA4uLL);
    v14 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v16, v14);
    PopExecuteOnTargetProcessors(v16, PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
