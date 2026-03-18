/*
 * XREFs of ExpSvmServicePageFault @ 0x14033E640
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r14
  _KPROCESS *v7; // rbp
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  char v10; // si
  unsigned int v11; // ebx
  ULONG_PTR v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[48]; // [rsp+38h] [rbp-60h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_14042F358, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_14042F350 + 2 * a3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  v10 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)v15);
    v10 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v11 = -1073741819;
  }
  else
  {
    v12 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v12 = a1 & 2;
    v11 = MmAccessFault(v12, a2, 1, 0LL);
  }
  if ( v10 )
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  return v11;
}
