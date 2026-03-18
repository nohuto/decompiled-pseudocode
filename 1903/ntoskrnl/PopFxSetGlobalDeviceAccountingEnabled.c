/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1402F5418
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x1402F3EE8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402F4E50 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1402F5CE0 (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

__int64 __fastcall PopFxSetGlobalDeviceAccountingEnabled(char a1)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( a1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo )
      qword_140444888 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_1404448A0 = xmmword_1404448A0 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  byte_140444881 = a1;
  KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
