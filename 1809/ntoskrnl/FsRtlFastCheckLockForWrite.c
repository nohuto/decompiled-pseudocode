/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x14010DD60
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x14010DCC0 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14026F12C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14026F1E8 (FsRtlCheckNoSharedConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rdi
  LONGLONG QuadPart; // rax
  unsigned __int64 v8; // r14
  KSPIN_LOCK *v9; // rsi
  unsigned __int64 v10; // r15
  KIRQL v11; // bp
  BOOLEAN v12; // bl
  PVOID v14; // r13
  PVOID v15; // r12
  __int64 v16; // rax
  bool v17; // cf
  ULONG v18; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  BOOLEAN v20; // di
  struct _KPRCB *v21; // rcx
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  ULONG v24; // [rsp+98h] [rbp+20h]

  v24 = Key;
  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( LockInformation && (LockInformation[4] || LockInformation[5]) )
  {
    QuadPart = Length->QuadPart;
    if ( Length->QuadPart )
    {
      v8 = StartingByte->QuadPart;
      v9 = LockInformation + 3;
      v22[0] = v8;
      v10 = v8 + QuadPart - 1;
      v23 = v10;
      v11 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
      v12 = 1;
      if ( v10 < *LockInformation )
        goto LABEL_6;
      v14 = FileObject;
      v15 = ProcessId;
      v16 = *((_QWORD *)FileObject + 15);
      if ( v16 )
      {
        v17 = v8 < *(_QWORD *)v16;
        v18 = v24;
        if ( !v17
          && v10 <= *(_QWORD *)(v16 + 40)
          && *(_DWORD *)(v16 + 20) == v24
          && *(PVOID *)(v16 + 32) == ProcessId
          && *(_BYTE *)(v16 + 16) )
        {
LABEL_6:
          KxReleaseSpinLock(LockInformation + 3);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
LABEL_7:
          __writecr8(v11);
          return v12;
        }
      }
      else
      {
        v18 = v24;
      }
      v20 = FsRtlCheckNoSharedConflict(LockInformation + 3, v22, &v23);
      if ( v20 == 1 )
        v20 = FsRtlCheckNoExclusiveConflict(
                (_DWORD)v9,
                (unsigned int)v22,
                (unsigned int)&v23,
                v18,
                (__int64)v14,
                (__int64)v15);
      KxReleaseSpinLock(v9);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      v12 = v20;
      goto LABEL_7;
    }
  }
  return 1;
}
