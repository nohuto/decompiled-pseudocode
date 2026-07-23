/*
 * XREFs of PopQueueQuerySetIrp @ 0x140172B8C
 * Callers:
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PopEnableIrpWatchdog @ 0x140172D4C (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140172E20 (PopDiagTraceIrpStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  char v1; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbp
  struct _DEVICE_OBJECT *v7; // r12
  int v8; // eax
  __int64 v9; // rdi
  PIRP *v10; // rdi
  PIRP v11; // rax
  unsigned __int8 OldIrql; // di
  NTSTATUS result; // eax
  KIRQL v14; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  IRP *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = Irp;
  v4 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( *(_BYTE *)(v4 + 184) == 2
    && *(_DWORD *)(v4 + 188) == 1
    && _InterlockedIncrement(&PopPendingSetPowerDeviceIrps) == 1 )
  {
    PopDeepSleepSetDisengageReason(2u);
  }
  v8 = *(_DWORD *)(v4 + 188);
  v9 = 248LL;
  if ( v8 != 1 )
    v9 = 264LL;
  v10 = (PIRP *)(v6 + v9);
  if ( v8 == 1 && *(_BYTE *)(v4 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v14 = KeAcquireQueuedSpinLock(0xAuLL);
    AttachedTo = v7;
    if ( v7 )
    {
      while ( (AttachedTo->Flags & 0x4000) == 0 )
      {
        AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
        if ( !AttachedTo )
          goto LABEL_24;
      }
      v1 = 1;
    }
LABEL_24:
    KeReleaseQueuedSpinLock(0xAuLL, v14);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  if ( v1 )
  {
    v16 = (struct _LIST_ENTRY *)qword_140418E68;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_140418E68 != &PopInrushIrpList )
      goto LABEL_38;
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v16;
    v16->Flink = &p_ListEntry->ListEntry;
    qword_140418E68 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  v11 = v10[1];
  if ( v11 )
  {
    for ( i = (IRP *)v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
          i;
          i = (IRP *)i->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
    {
      v11 = i;
    }
    v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
    goto LABEL_25;
  }
  v10[1] = v3;
  if ( *v10 )
  {
LABEL_25:
    v3 = 0LL;
    goto LABEL_15;
  }
  if ( v1 )
  {
    if ( !PopInrushIrp )
    {
      PopInrushIrp = (__int64)v3;
      Flink = v3->Tail.Overlay.ListEntry.Flink;
      Blink = v3->Tail.Overlay.ListEntry.Blink;
      if ( (PVOID *)Flink->Blink == &v3->Tail.CompletionKey + 6 && (PVOID *)Blink->Flink == &v3->Tail.CompletionKey + 6 )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        goto LABEL_14;
      }
LABEL_38:
      __fastfail(3u);
    }
    goto LABEL_25;
  }
LABEL_14:
  v10[1] = 0LL;
  *v10 = v3;
LABEL_15:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v7, v3);
    PopEnableIrpWatchdog(v3);
    return IofCallDriver(v7, v3);
  }
  return result;
}
