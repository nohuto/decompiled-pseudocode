/*
 * XREFs of PopFreeIrp @ 0x140172750
 * Callers:
 *     PopRequestCompletion @ 0x1401725B0 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14059BCE0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     PopFxReleasePowerIrp @ 0x14017F5B0 (PopFxReleasePowerIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall PopFreeIrp(PIRP Irp)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  void *v4; // r14
  void *v5; // r15
  __int64 v6; // rcx
  _QWORD *v7; // rax
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (_QWORD *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = *v2;
  v7 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v7 != v2 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(v4, 0x72496F50u);
  return ObfDereferenceObjectWithTag(v5, 0x72496F50u);
}
