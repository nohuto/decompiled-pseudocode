/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x140159074
 * Callers:
 *     PopGetSettingNotificationName @ 0x14058F66C (PopGetSettingNotificationName.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  int SessionId; // eax
  int v3; // edx
  bool v5; // si
  __int64 ThreadServerSilo; // rdi
  _QWORD *v7; // rcx
  unsigned int v8; // eax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( v3 == a1 )
    return 1;
  v5 = 0;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  v7 = (_QWORD *)qword_14043B088;
  while ( v7 )
  {
    v8 = *((_DWORD *)v7 - 38);
    if ( a1 > v8 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v8 )
      {
        if ( v7[1018] == ThreadServerSilo && v8 == a1 && (*((_DWORD *)v7 - 39) & 2) == 0 )
          v5 = *(v7 - 18) != (_QWORD)(v7 - 18);
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v5;
}
