/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1402A5774
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiPrepareAttachThread @ 0x1400EEABC (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400EEB1C (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14028E834 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(volatile signed __int32 *BugCheckParameter1, int a2)
{
  __int64 v2; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r14d
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // si
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int16 Object; // [rsp+38h] [rbp-39h] BYREF
  char v20; // [rsp+3Ah] [rbp-37h]
  int v21; // [rsp+3Ch] [rbp-35h]
  _QWORD v22[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  char v24[48]; // [rsp+68h] [rbp-9h] BYREF

  v20 = 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (__int64)(BugCheckParameter1 + 320);
  Object = 0;
  v22[1] = v22;
  v21 = 0;
  v22[0] = v22;
  SharedVm = MiGetSharedVm((__int64)(BugCheckParameter1 + 320));
  if ( (*(_BYTE *)(v2 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v2);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      KeForceAttachProcess((ULONG_PTR)BugCheckParameter1, (__int64)v24);
      v10 = MiGetSharedVm(v2);
      v11 = ExAcquireSpinLockExclusive(v10);
      v10[1] = 0;
      v14 = v11;
      if ( (*(_BYTE *)(v2 + 187) & 0x60) == 0x40 )
      {
        v15 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v15 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v15 + 40) = &Object;
          *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v2, v11, v12, v13);
          v14 = 17;
          KeRetryOutswapProcess(BugCheckParameter1, v16, v17);
          KeForceDetachProcess(v24, 0);
          MiAttachThreadDone(v2);
          v7 = 0;
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          v6 = 0;
        }
      }
      else
      {
        v6 = -1073741431;
      }
      if ( v14 != 17 )
        MiUnlockWorkingSetExclusive(v2, v14, v12, v13);
      if ( v7 )
      {
        KeForceDetachProcess(v24, 0);
        MiAttachThreadDone(v2);
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
