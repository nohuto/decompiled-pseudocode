/*
 * XREFs of IopMountVolume @ 0x140681CF4
 * Callers:
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     IoGetActivityIdThread @ 0x140099FC0 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x14009C534 (IopWaitForLockAlertable.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1400B5838 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1400B5880 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x1400B5914 (IopMountInitializeVpb.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1400DFC10 (FsRtlIsTotalDeviceFailure.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016F358 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14016F454 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140170838 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuid @ 0x1406615B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x14072DCD8 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(struct _DEVICE_OBJECT *BugCheckParameter1, UCHAR a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r13
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rcx
  signed int v13; // ebx
  char v14; // r12
  char VpbFlagsSafe; // al
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v17; // r15
  ULONG DeviceType; // eax
  __int64 *v19; // rsi
  __int64 **v20; // r14
  int v21; // ecx
  UCHAR v22; // dl
  __int64 *v23; // rax
  bool v24; // zf
  struct _DEVICE_OBJECT *v25; // rbx
  char v26; // r12
  struct _DEVICE_OBJECT *v27; // rax
  __int64 v28; // rcx
  IRP *IrpWithExtension; // rax
  IRP *v30; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v32; // eax
  ULONG_PTR v33; // r12
  NTSTATUS v34; // eax
  __int64 v35; // r13
  struct _KEVENT *p_DeviceLock; // r14
  ULONG_PTR v38; // rax
  char v39; // al
  char v40; // [rsp+30h] [rbp-81h]
  BOOLEAN v42; // [rsp+32h] [rbp-7Fh]
  char v43; // [rsp+33h] [rbp-7Eh]
  char v44; // [rsp+34h] [rbp-7Dh]
  int v47; // [rsp+38h] [rbp-79h]
  int v48; // [rsp+3Ch] [rbp-75h]
  __int64 v49; // [rsp+40h] [rbp-71h]
  const GUID *ActivityId; // [rsp+48h] [rbp-69h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-61h] BYREF
  NTSTATUS Status[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v53; // [rsp+68h] [rbp-49h]
  _QWORD v54[2]; // [rsp+70h] [rbp-41h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-19h]
  ULONG_PTR *v57; // [rsp+A0h] [rbp-11h]
  __int64 *v58; // [rsp+A8h] [rbp-9h]
  GUID v59; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0LL;
  v57 = a5;
  memset(&Event, 0, sizeof(Event));
  *(_QWORD *)Status = 0LL;
  v53 = 0LL;
  v54[0] = 0LL;
  v54[1] = 0LL;
  *(_QWORD *)&v59.Data1 = 0LL;
  *(_QWORD *)v59.Data4 = 0LL;
  *(_QWORD *)&DosName.Length = 0LL;
  DosName.Buffer = 0LL;
  v43 = 0;
  v40 = 0;
  ActivityId = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v49 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v42 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v59);
    IoVolumeDeviceToDosName(BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
    v14 = 0;
  }
  else
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, CurrentThread->PreviousMode, a4);
    if ( v13 < 0 )
    {
      KeLeaveCriticalRegion();
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_49;
    }
    v11 = v42;
    v14 = 1;
    v40 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v13 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_39;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)&v59, &DosName.Length);
    v43 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  BugCheckParameter1->Flags &= ~2u;
  v13 = -1073741823;
  AttachedDevice = BugCheckParameter1->AttachedDevice;
  v17 = BugCheckParameter1;
  while ( AttachedDevice )
  {
    v17 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  ObfReferenceObject(v17);
  DeviceType = BugCheckParameter1->DeviceType;
  if ( DeviceType == 7 || DeviceType == 36 )
  {
    v19 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v19 = &IopCdRomFileSystemQueueHead;
    if ( DeviceType != 2 )
      v19 = &IopTapeFileSystemQueueHead;
  }
  v20 = (__int64 **)*v19;
  v21 = BugCheckParameter1->Vpb->Flags & 0x10;
  v47 = v21;
  if ( (__int64 *)*v19 == v19 )
  {
LABEL_58:
    ObfDereferenceObject(v17);
    goto LABEL_39;
  }
  v22 = a2;
  while ( 1 )
  {
    if ( v13 >= 0 )
    {
      v14 = v40;
      goto LABEL_39;
    }
    v23 = *v20;
    v24 = *v20 == v19;
    v58 = *v20;
    v44 = v24;
    if ( !v22 && v23 == v19 && v20 != (__int64 **)*v19 )
      goto LABEL_38;
    if ( !v21 || v23 == v19 )
      break;
LABEL_37:
    v20 = (__int64 **)*v20;
    if ( v20 == (__int64 **)v19 )
      goto LABEL_38;
  }
  v25 = (struct _DEVICE_OBJECT *)(v20 - 10);
  v26 = 1;
  v27 = (struct _DEVICE_OBJECT *)*(v20 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v20 - 10);
  while ( v27 )
  {
    v25 = v27;
    ++v26;
    v27 = v27->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v28, v26 + v17->StackSize, 0);
  v30 = IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v13 = -1073741670;
    goto LABEL_90;
  }
  CurrentStackLocation = IrpWithExtension->Tail.Overlay.CurrentStackLocation;
  IrpWithExtension->Flags = 66;
  IrpWithExtension->RequestorMode = 0;
  IrpWithExtension->UserEvent = &Event;
  IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)Status;
  IrpWithExtension->Tail.Overlay.Thread = (PETHREAD)v49;
  CurrentStackLocation[-1].Flags = a2;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 269;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)BugCheckParameter1->Vpb;
  v32 = IopFsRegistrationOps;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)v17;
  v48 = v32;
  ObfReferenceObject(v25);
  v33 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v34 = IofCallDriver(v25, v30);
  if ( v34 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v53 = 0LL;
    Status[0] = v34;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v25);
  IopDecrementDeviceObjectRef(v33, 0);
  v13 = Status[0];
  if ( Status[0] >= 0 )
  {
    v38 = IopMountInitializeVpb((__int64)BugCheckParameter1, (__int64)v17, v47, v44);
    *v57 = v38;
LABEL_36:
    v22 = a2;
    v21 = v47;
    goto LABEL_37;
  }
  if ( ((unsigned int)(Status[0] + 1073741662) <= 1
     || (unsigned int)(Status[0] + 1073741806) <= 2
     || Status[0] == -2147483626
     || Status[0] == -1073741643)
    && v53 == 1 )
  {
    goto LABEL_38;
  }
  if ( v48 != IopFsRegistrationOps )
  {
    v20 = (__int64 **)v54;
    v54[0] = *v19;
    v13 = -1073741489;
  }
  if ( v13 != -1073741412 )
  {
LABEL_35:
    if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
    {
      if ( !a2 || v58 == v19 )
        goto LABEL_38;
      v20 = *(__int64 ***)(v19[1] + 8);
    }
    goto LABEL_36;
  }
  IopIncrementDeviceObjectRefCount(v33, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
  if ( !a3 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    v40 = 0;
  }
  v35 = v49;
  KeLeaveCriticalRegionThread(v49);
  IopLoadFileSystemDriver(v33);
  if ( !a3 )
  {
    v13 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v49 + 562), a4);
    if ( v13 < 0 )
    {
      ObfDereferenceObject(v17);
      KeLeaveCriticalRegion();
      v14 = v40;
      goto LABEL_40;
    }
    v40 = 1;
  }
  --*(_WORD *)(v49 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v39 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (v39 & 8) != 0 )
  {
    v13 = -1073741632;
LABEL_90:
    v14 = v40;
    goto LABEL_58;
  }
  if ( (v39 & 1) == 0 )
  {
    v20 = (__int64 **)v54;
    v54[0] = *v19;
    v13 = -1073741489;
    goto LABEL_35;
  }
  ObfDereferenceObject(v17);
  v13 = 0;
LABEL_38:
  v14 = v40;
  if ( v13 < 0 )
    goto LABEL_58;
LABEL_39:
  ExReleaseResourceLite(&IopDatabaseResource);
  v35 = v49;
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
LABEL_40:
  if ( v14 )
  {
    KeSetEvent(p_DeviceLock, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread(v35);
  if ( v42 )
  {
    if ( v43 )
    {
      if ( v13 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)&v59, &DosName.Length, v13);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)&v59, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v13 < 0 && (BugCheckParameter1->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, (ULONG_PTR)BugCheckParameter1, v13, 0LL, 0LL);
LABEL_49:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v13;
}
