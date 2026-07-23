/*
 * XREFs of PoHandleIrp @ 0x140171C94
 * Callers:
 *     IopPoHandleIrp @ 0x140171C4C (IopPoHandleIrp.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     PoDeviceReleaseIrp @ 0x140171DA8 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140171EA0 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x140172000 (PopDispatchQuerySetIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v7; // rax
  PDEVICE_OBJECT DeviceObject; // rbp
  __int64 v9; // r8
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  ULONG *v12; // rcx
  char v13; // si
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  DeviceObject = CurrentStackLocation->DeviceObject;
  v9 = *(_QWORD *)(v7 + 40);
  if ( v9 )
  {
    LOBYTE(a2) = *(_BYTE *)(v7 + 184);
    PoDeviceReleaseIrp(Irp, a2, v9);
    p_Flags = &DeviceObject->Flags;
    Flags = DeviceObject->Flags;
    v12 = &DeviceObject->Flags;
    if ( (Flags & 0x8000) == 0 && ((Flags & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v13 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v12 = &DeviceObject->Flags;
  }
  p_Flags = v12;
  v13 = 1;
  if ( (*v12 & 0x8000) != 0 )
  {
LABEL_5:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    PoDeviceAcquireIrp(Irp, a2, DeviceObject, a4);
    if ( !v13 )
      return v13;
  }
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v4 = 0;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    PopDispatchQuerySetIrp(Irp);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    *v4 = 259;
  }
  return v13;
}
