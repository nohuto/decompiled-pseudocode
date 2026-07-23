/*
 * XREFs of PopAllocateIrp @ 0x14017283C
 * Callers:
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAllocateIrp @ 0x14008E400 (IoAllocateIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     PopFxLockDevice @ 0x14015B158 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x14017313C (PopFxAllocatePowerIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VfIrpWatermark @ 0x1409316B4 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        IRP **a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  int v12; // ebx
  IRP *v14; // rsi
  PVOID v15; // r14
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // r13
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v18; // r12
  char v19; // al
  int PowerIrp; // eax
  int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  _QWORD *v25; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v27; // rax
  _QWORD *v28; // rax
  unsigned __int8 OldIrql; // r14
  void *v30; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  PIRP Irp; // [rsp+48h] [rbp-41h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-39h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  void *v39; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  Irp = 0LL;
  v34 = 0LL;
  v12 = a4;
  *a10 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v39 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v18 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v30 = DeviceAttachmentBaseRefWithTag;
    v21 = -1073741808;
LABEL_40:
    if ( a6 && v21 != 259 )
    {
      LOBYTE(BugCheckParameter4) = v12 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
    goto LABEL_27;
  }
  v19 = a3;
  if ( a4 == 1 && a3 == 2 )
  {
    PowerIrp = PopFxAllocatePowerIrp(v18, (_DWORD)a1, a5, a8, a9, a7, (__int64)&Irp, (__int64)&v34);
    v21 = PowerIrp;
    if ( PowerIrp >= 0 || PowerIrp == -1073741130 )
    {
      v14 = Irp;
      v15 = v34;
      if ( PowerIrp != 259 )
      {
        v19 = 2;
        goto LABEL_11;
      }
    }
    else
    {
      v14 = Irp;
      v15 = v34;
    }
LABEL_44:
    v30 = v39;
LABEL_26:
    if ( v14 )
      goto LABEL_27;
LABEL_37:
    v12 = a4;
    goto LABEL_40;
  }
  v21 = -1073741130;
LABEL_11:
  if ( v21 >= 0 )
  {
    v24 = *(_QWORD *)(v18 + 80);
    if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v24 + 16) + 66LL) )
    {
      ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
      ObfReferenceObjectWithTag(*(PVOID *)(v24 + 104), 0x72496F50u);
      AttachedDeviceReferenceWithTag = *(PDEVICE_OBJECT *)(v24 + 104);
    }
LABEL_21:
    IoReuseIrp(v14, -1073741637);
    if ( IovUtilVerifierEnabled )
      VfIrpWatermark(v14, 1LL);
    v14->IoStatus.Information = 0LL;
    v14->Tail.Overlay.ListEntry.Blink = &v14->Tail.Overlay.ListEntry;
    v14->Tail.Overlay.ListEntry.Flink = &v14->Tail.Overlay.ListEntry;
    memset(v15, 0, 0xF8uLL);
    *((_QWORD *)v15 + 4) = AttachedDeviceReferenceWithTag;
    *((_QWORD *)v15 + 3) = v39;
    *((_BYTE *)v15 + 184) = a3;
    *((_DWORD *)v15 + 47) = a4;
    *((_DWORD *)v15 + 48) = a5;
    *((_QWORD *)v15 + 2) = v14;
    *((_QWORD *)v15 + 25) = v24;
    v25 = v34;
    v14 = Irp;
    *((_DWORD *)v34 + 53) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
    v25[27] = a8;
    v25[28] = a9;
    v25[29] = a1;
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = v25;
    v27 = --v14->Tail.Overlay.CurrentStackLocation;
    --v14->CurrentLocation;
    v27[-1].MajorFunction = 22;
    v27[-1].MinorFunction = a3;
    v27[-1].DeviceObject = AttachedDeviceReferenceWithTag;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v28 = (_QWORD *)qword_140418E58;
    if ( *(__int64 **)qword_140418E58 != &PopIrpList )
      __fastfail(3u);
    *v25 = &PopIrpList;
    v25[1] = v28;
    *v28 = v25;
    qword_140418E58 = (__int64)v25;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v14 = Irp;
      v25 = v34;
    }
    __writecr8(OldIrql);
    AttachedDeviceReferenceWithTag = 0LL;
    v30 = 0LL;
    v15 = 0LL;
    v21 = 0;
    *a10 = v14;
    *a11 = v25;
    goto LABEL_26;
  }
  if ( v19 )
    v36 = 0LL;
  else
    v36 = PopFxLockDevice(v18, 0);
  Interval.QuadPart = -500000LL;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v22;
    v34 = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
    v15 = v34;
    if ( v34 )
      break;
    if ( !a6 || v22 >= 0xA )
      goto LABEL_44;
  }
  v23 = 0;
  while ( 1 )
  {
    if ( v23 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v23;
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
    v14 = Irp;
    if ( Irp )
    {
      v24 = v36;
      goto LABEL_21;
    }
    if ( !a6 )
      break;
    if ( v23 >= 0xA )
    {
      v30 = v39;
      goto LABEL_37;
    }
  }
  v30 = v39;
LABEL_27:
  if ( v15 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v15);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( v30 )
    ObfDereferenceObjectWithTag(v30, 0x72496F50u);
  return (unsigned int)v21;
}
