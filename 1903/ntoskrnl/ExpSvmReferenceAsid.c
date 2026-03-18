/*
 * XREFs of ExpSvmReferenceAsid @ 0x14033E540
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  ULONG_PTR *v3; // rdx
  ULONG_PTR v4; // rsi
  __int64 v5; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_14042F358, &LockHandle);
  v2 = 0LL;
  v3 = (ULONG_PTR *)((char *)qword_14042F350 + 16 * (unsigned int)v1);
  if ( (unsigned int)v1 >= (unsigned int)dword_14042F344 )
  {
    BugCheckParameter4 = 0LL;
LABEL_12:
    if ( (unsigned int)v1 < (unsigned int)dword_14042F344 )
      v2 = *v3;
    KeBugCheckEx(0x158u, v1, (unsigned int)dword_14042F344, v2, BugCheckParameter4);
  }
  v4 = *v3;
  if ( !*v3 || (v5 = v3[1], v5 < 0) )
  {
    BugCheckParameter4 = v3[1];
    goto LABEL_12;
  }
  v3[1] = v5 + 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return *(_QWORD *)(v4 + 1800);
}
