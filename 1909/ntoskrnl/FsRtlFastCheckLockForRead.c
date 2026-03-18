/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1401087B0
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x140108720 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140142CB4 (FsRtlCheckNoExclusiveConflict.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v9; // r15
  KIRQL v10; // di
  BOOLEAN v11; // bl
  unsigned __int64 *LastLock; // rax
  BOOLEAN v13; // al
  KSPIN_LOCK *v14; // rcx
  BOOLEAN v15; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v19 = StartingByte->QuadPart;
  v9 = v19 + QuadPart - 1;
  v20 = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v11 = 1;
  if ( v9 < *LockInformation
    || (LastLock = (unsigned __int64 *)FileObject->LastLock) != 0LL
    && v19 >= *LastLock
    && v9 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v13 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v19,
            (unsigned int)&v20,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
    v14 = LockInformation + 3;
    v15 = v13;
    KxReleaseSpinLock(v14);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    v11 = v15;
  }
  __writecr8(v10);
  return v11;
}
