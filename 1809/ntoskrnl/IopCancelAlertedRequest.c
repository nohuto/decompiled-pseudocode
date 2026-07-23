/*
 * XREFs of IopCancelAlertedRequest @ 0x14081A7EC
 * Callers:
 *     IopWaitForSynchronousIo @ 0x1400DDC70 (IopWaitForSynchronousIo.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v4; // si
  struct _KPRCB *v5; // rcx
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( Object[1] )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v4 = IoCancelIrp(Irp);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v5 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v5);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
