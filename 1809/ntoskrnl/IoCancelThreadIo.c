/*
 * XREFs of IoCancelThreadIo @ 0x1406A7A58
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     IopDisassociateThreadIrp @ 0x14027ECE8 (IopDisassociateThreadIrp.c)
 */

struct _KTHREAD *__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  unsigned int *p_SystemCallNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *i; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned __int8 v7; // di
  unsigned int v8; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  p_SystemCallNumber = &result[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber != p_SystemCallNumber )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
      IoCancelIrp((PIRP)(i - 8));
    v5 = 100 * IopIrpCompletionTimeoutInSeconds;
    v6 = 0;
    Interval.QuadPart = -100000LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      v7 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
        break;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      __writecr8(v7);
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = v6++;
      if ( v8 > v5 )
        IopDisassociateThreadIrp();
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
    result = (struct _KTHREAD *)v7;
    __writecr8(v7);
  }
  return result;
}
