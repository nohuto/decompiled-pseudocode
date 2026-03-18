/*
 * XREFs of PopCoalescingInitialize @ 0x1409FBB04
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140758BD0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x140758F80 (PoRegisterCoalescingCallback.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState &= 0xF0u;
  PopCoalescingCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCoalescingCallbackWorker;
  PopCoalescingCallbackWorkItem.Parameter = 0LL;
  PopCoalescingCallbackWorkItem.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback(
             (unsigned __int64)xHalTimerWatchdogStop,
             0,
             (struct _EX_RUNDOWN_REF **)&PopCoalescingRegistration,
             0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_140443F98 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopCoalescingTimer.Processor = 0LL;
    PopCoalescingTimerDpc = 275;
    qword_140443FA0 = 0LL;
    qword_140443FB8 = 0LL;
    qword_140443F90 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
