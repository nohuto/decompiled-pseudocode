/*
 * XREFs of ExpShutdownWorkerFactory @ 0x140113D04
 * Callers:
 *     NtShutdownWorkerFactory @ 0x140113BA0 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x1406BD6B0 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140114608 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x140114660 (KeDeregisterObjectNotification.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(PKSPIN_LOCK *Object)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  PKSPIN_LOCK v4; // rax
  char v5; // si
  unsigned __int8 OldIrql; // bp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(Object[2], &LockHandle);
  v2 = (PVOID *)(Object + 9);
  v3 = 4LL;
  *((_DWORD *)Object + 78) = (_DWORD)Object[39] & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v2 )
    {
      ObfDereferenceObjectWithTag(*v2, 0x746C6644u);
      *v2 = 0LL;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( ((_DWORD)Object[39] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( Object[62] == (PKSPIN_LOCK)(Object + 41) && (unsigned __int8)KeDeregisterObjectNotification(Object + 41) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *((_BYTE *)Object[2] + 33) = 1;
  v4 = Object[2];
  *((_DWORD *)Object + 71) = 0;
  *((_DWORD *)Object + 70) = 0;
  if ( !*((_DWORD *)v4 + 7) || *((_BYTE *)v4 + 32) )
  {
    v5 = 0;
  }
  else
  {
    *((_BYTE *)v4 + 32) = 1;
    v5 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 41, 0LL);
  if ( v5 )
    return IoSetIoCompletionEx2(Object[2][1], 0LL, 0LL, 0, 0LL, 0, Object[2][2], 0);
  return result;
}
