/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1402F4EC8
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x1402F3C38 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402F4900 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1402F5790 (PopFxUpdateGlobalDeviceAccountingInfo.c)
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
      qword_140444408 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_140444420 = xmmword_140444420 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  byte_140444401 = a1;
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
