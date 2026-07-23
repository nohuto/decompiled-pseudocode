/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x14010DF10
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x14010DE80 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14026F12C (FsRtlCheckNoExclusiveConflict.c)
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
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  KIRQL v12; // di
  BOOLEAN v13; // bl
  unsigned __int64 *LastLock; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  BOOLEAN v16; // al
  KSPIN_LOCK *v17; // rcx
  BOOLEAN v18; // si
  struct _KPRCB *v19; // rcx
  unsigned __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v20 = v10;
  v11 = v10 + QuadPart - 1;
  v21 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v13 = 1;
  if ( v11 < *LockInformation
    || (LastLock = (unsigned __int64 *)FileObject->LastLock) != 0LL
    && v10 >= *LastLock
    && v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v20,
            (unsigned int)&v21,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
    v17 = LockInformation + 3;
    v18 = v16;
    KxReleaseSpinLock(v17);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    v13 = v18;
  }
  __writecr8(v12);
  return v13;
}
