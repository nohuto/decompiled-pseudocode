/*
 * XREFs of PoGetIdleTimes @ 0x1400A7320
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1405CDF74 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAddProcessorAffinityEx @ 0x140063A40 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5EC8 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A7470 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7920 (KeQueryActiveProcessorCountEx.c)
 *     PopGetIdleTimesCallback @ 0x1400A79B0 (PopGetIdleTimesCallback.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

void __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // ebx
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // di
  int IdleTimesCallback; // ebx
  ULONG v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v13[44]; // [rsp+20h] [rbp-E8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    v7 = 0LL;
  else
    v7 = KiProcessorBlock[ProcessorIndexFromNumber];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  IdleTimesCallback = PopGetIdleTimesCallback(v7, a2, a3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v13[0] = 1310721;
    memset(&v13[1], 0, 0xA4uLL);
    v11 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v13, v11);
    PopExecuteOnTargetProcessors((__int64)v13, (__int64)PopGetIdleTimesCallback, a2, a3);
  }
  if ( qword_140417DE8 )
    qword_140417DE8 = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  KeLeaveCriticalRegion();
}
