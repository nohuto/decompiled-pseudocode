/*
 * XREFs of PoHandleIrp @ 0x140175230
 * Callers:
 *     IopPoHandleIrp @ 0x1401751E8 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     PoDeviceReleaseIrp @ 0x140175350 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140175448 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1401755A8 (PopDispatchQuerySetIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _DWORD *v3; // r14
  PDEVICE_OBJECT DeviceObject; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  ULONG *v10; // rcx
  char v11; // si
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  DeviceObject = CurrentStackLocation->DeviceObject;
  v6 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v7 = *(_QWORD *)(v6 + 40);
  if ( v7 )
  {
    LOBYTE(a2) = *(_BYTE *)(v6 + 184);
    PoDeviceReleaseIrp(Irp, a2, v7);
    p_Flags = &DeviceObject->Flags;
    Flags = DeviceObject->Flags;
    v10 = &DeviceObject->Flags;
    if ( (Flags & 0x8000) == 0 && ((Flags & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = &DeviceObject->Flags;
  }
  p_Flags = v10;
  v11 = 1;
  if ( (*v10 & 0x8000) != 0 )
  {
LABEL_5:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    PoDeviceAcquireIrp(Irp, a2, DeviceObject);
    if ( !v11 )
      return v11;
  }
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    PopDispatchQuerySetIrp(Irp);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    *v3 = 259;
  }
  return v11;
}
