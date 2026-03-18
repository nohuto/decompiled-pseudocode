/*
 * XREFs of ExpShutdownWorkerFactory @ 0x1400FADC0
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1400F99C0 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x1406857E0 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14008DEC8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x14008DF20 (KeDeregisterObjectNotification.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD5C8 (IoSetIoCompletionEx2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // si
  unsigned __int8 OldIrql; // bp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+40h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &v9);
  v2 = (PVOID *)(Object + 72);
  v3 = 4LL;
  *((_DWORD *)Object + 38) = *((_DWORD *)Object + 38) & 0xFFFFFFF8 | 4;
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
  if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( *((char **)Object + 42) == Object + 168
    && (unsigned __int8)KeDeregisterObjectNotification((volatile signed __int32 *)Object + 42, (__int64 *)Object + 38) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v4 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 31) = 0;
  *((_DWORD *)Object + 30) = 0;
  if ( !*(_DWORD *)(v4 + 28) || *(_BYTE *)(v4 + 32) )
  {
    v5 = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 32) = 1;
    v5 = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v9);
  OldIrql = v9.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 168, 0LL);
  if ( v5 )
    return IoSetIoCompletionEx2(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0,
             0,
             0,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0);
  return result;
}
