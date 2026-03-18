/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1402BC8F4
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     MiAttachThreadDone @ 0x1400E2224 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400E2AA4 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeRetryOutswapProcess @ 0x1402A5108 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(ULONG_PTR BugCheckParameter1, int a2)
{
  __int64 v4; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r14d
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // si
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v22[48]; // [rsp+68h] [rbp-9h] BYREF

  memset(v22, 0, sizeof(v22));
  Object = 393216LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = BugCheckParameter1 + 1280;
  v20[1] = v20;
  v20[0] = v20;
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  if ( (*(_BYTE *)(BugCheckParameter1 + 1467) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v7 = MiPrepareAttachThread(BugCheckParameter1, v4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( v7 )
    {
      KeForceAttachProcess(BugCheckParameter1, (__int64)v22);
      v10 = MiGetSharedVm(v4);
      v11 = ExAcquireSpinLockExclusive(v10);
      v10[1] = 0;
      v15 = v11;
      if ( (*(_BYTE *)(BugCheckParameter1 + 1467) & 0x60) == 0x40 )
      {
        v16 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v16 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v16 + 40) = &Object;
          v17 = *(_DWORD *)(v16 + 48) & 0xFFFFFFFE | (a2 != 0);
          *(_DWORD *)(v16 + 48) = v17;
          LOBYTE(v17) = v11;
          MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v17, v13, v14);
          v15 = 17;
          KeRetryOutswapProcess((volatile signed __int32 *)BugCheckParameter1);
          KeForceDetachProcess(v22, 0);
          MiAttachThreadDone(BugCheckParameter1 + 1280);
          v7 = 0;
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          v6 = 0;
        }
      }
      else
      {
        v6 = -1073741431;
      }
      if ( v15 != 17 )
      {
        LOBYTE(v12) = v15;
        MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v12, v13, v14);
      }
      if ( v7 )
      {
        KeForceDetachProcess(v22, 0);
        MiAttachThreadDone(BugCheckParameter1 + 1280);
      }
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
