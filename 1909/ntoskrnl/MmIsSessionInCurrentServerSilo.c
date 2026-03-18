/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x140168FBC
 * Callers:
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  int SessionId; // eax
  int v3; // edx
  bool v5; // si
  __int64 ThreadServerSilo; // rbp
  _QWORD *v7; // rcx
  unsigned int v8; // edx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( v3 == a1 )
    return 1;
  v5 = 0;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = (_QWORD *)qword_1404656E0;
  while ( v7 )
  {
    v8 = *((_DWORD *)v7 - 34);
    if ( a1 > v8 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v8 )
      {
        if ( v7[148] == ThreadServerSilo && v8 == a1 && (*((_DWORD *)v7 - 35) & 2) == 0 )
          v5 = *(v7 - 16) != (_QWORD)(v7 - 16);
        break;
      }
      v7 = (_QWORD *)*v7;
    }
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
  return v5;
}
