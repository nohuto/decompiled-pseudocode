/*
 * XREFs of IopMountVolume @ 0x1405A3E64
 * Callers:
 *     IopCheckVpbMounted @ 0x1400B8F70 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x14081DDB0 (IoVerifyVolume.c)
 * Callees:
 *     IoGetActivityIdThread @ 0x1400065C0 (IoGetActivityIdThread.c)
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14000EB98 (IopQueryVpbFlagsSafe.c)
 *     IopWaitForLockAlertable @ 0x14000EBDC (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x14000EC80 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14000EC90 (IopMountInitializeVpb.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140022ED0 (FsRtlIsTotalDeviceFailure.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016838C (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140168488 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140169734 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuid @ 0x1405A54B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x1407080BC (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r13
  BOOLEAN v11; // bl
  struct _KTHREAD *v13; // rcx
  signed int v14; // ebx
  char v15; // r12
  char VpbFlagsSafe; // al
  __int64 v17; // rax
  _BYTE *v18; // r15
  int v19; // eax
  __int64 *v20; // rsi
  __int64 **v21; // r14
  int v22; // ecx
  char v23; // dl
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v26; // rbx
  char v27; // r12
  struct _DEVICE_OBJECT *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v32; // r13
  __int64 v33; // rcx
  int v34; // eax
  ULONG_PTR v35; // r12
  __int64 v36; // r8
  NTSTATUS v37; // eax
  __int64 v38; // r8
  ULONG_PTR v39; // rax
  struct _KEVENT *v40; // r14
  __int64 v41; // r13
  char v42; // al
  char v43; // [rsp+30h] [rbp-81h]
  BOOLEAN v45; // [rsp+32h] [rbp-7Fh]
  char v46; // [rsp+33h] [rbp-7Eh]
  char v47; // [rsp+34h] [rbp-7Dh]
  int v50; // [rsp+38h] [rbp-79h]
  int v51; // [rsp+3Ch] [rbp-75h]
  __int64 v52; // [rsp+40h] [rbp-71h]
  const GUID *ActivityId; // [rsp+48h] [rbp-69h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-61h] BYREF
  NTSTATUS Status; // [rsp+60h] [rbp-51h] BYREF
  __int64 v56; // [rsp+68h] [rbp-49h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-41h]
  ULONG_PTR *v58; // [rsp+78h] [rbp-39h]
  __int64 *v59; // [rsp+80h] [rbp-31h]
  _QWORD v60[2]; // [rsp+88h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v62[2]; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0LL;
  v58 = a5;
  v62[0] = 0LL;
  v62[1] = 0LL;
  *(_QWORD *)&DosName.Length = 0LL;
  DosName.Buffer = 0LL;
  v46 = 0;
  v43 = 0;
  ActivityId = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v52 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v45 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, v62);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
    v15 = 0;
  }
  else
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    if ( v14 < 0 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_9;
    }
    v11 = v45;
    v15 = 1;
    v43 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_77;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)v62, &DosName.Length);
    v46 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  v14 = -1073741823;
  v17 = *(_QWORD *)(BugCheckParameter1 + 24);
  v18 = (_BYTE *)BugCheckParameter1;
  while ( v17 )
  {
    v18 = (_BYTE *)v17;
    v17 = *(_QWORD *)(v17 + 24);
  }
  ObfReferenceObject(v18);
  v19 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v19 == 7 || v19 == 36 )
  {
    v20 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v20 = &IopCdRomFileSystemQueueHead;
    if ( v19 != 2 )
      v20 = &IopTapeFileSystemQueueHead;
  }
  v21 = (__int64 **)*v20;
  v22 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
  v50 = v22;
  if ( (__int64 *)*v20 == v20 )
    goto LABEL_74;
  v23 = a2;
  while ( 1 )
  {
    if ( v14 >= 0 )
    {
      v15 = v43;
      goto LABEL_77;
    }
    v24 = *v21;
    v25 = *v21 == v20;
    v59 = *v21;
    v47 = v25;
    if ( !v23 && v24 == v20 && v21 != (__int64 **)*v20 )
      goto LABEL_67;
    if ( !v22 || v24 == v20 )
      break;
LABEL_66:
    v21 = (__int64 **)*v21;
    if ( v21 == (__int64 **)v20 )
      goto LABEL_67;
  }
  v26 = (struct _DEVICE_OBJECT *)(v21 - 10);
  v27 = 1;
  v28 = (struct _DEVICE_OBJECT *)*(v21 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v21 - 10);
  while ( v28 )
  {
    v26 = v28;
    ++v27;
    v28 = v28->AttachedDevice;
  }
  KeResetEvent(&Event);
  LOBYTE(v29) = v27 + v18[76];
  IrpWithExtension = IopAllocateIrpWithExtension(v30, v29);
  v32 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
    goto LABEL_73;
  }
  v33 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = &Status;
  *(_QWORD *)(IrpWithExtension + 152) = v52;
  *(_BYTE *)(v33 - 70) = a2;
  *(_WORD *)(v33 - 72) = 269;
  *(_QWORD *)(v33 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
  v34 = IopFsRegistrationOps;
  *(_QWORD *)(v33 - 56) = v18;
  v51 = v34;
  ObfReferenceObject(v26);
  v35 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1, v36);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v37 = IofCallDriver(v26, v32);
  if ( v37 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v56 = 0LL;
    Status = v37;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v26);
  IopDecrementDeviceObjectRef(v35, 0, 0LL);
  v14 = Status;
  if ( Status >= 0 )
  {
    v39 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v18, v50, v47);
    *v58 = v39;
LABEL_65:
    v23 = a2;
    v22 = v50;
    goto LABEL_66;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || Status == -1073741643
     || (unsigned int)(Status + 1073741805) <= 1
     || Status == -2147483626
     || Status == -1073741806)
    && v56 == 1 )
  {
    goto LABEL_67;
  }
  if ( v51 != IopFsRegistrationOps )
  {
    v21 = (__int64 **)v60;
    v60[0] = *v20;
    v14 = -1073741489;
  }
  if ( v14 != -1073741412 )
  {
LABEL_60:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v59 == v20 )
        goto LABEL_67;
      v21 = *(__int64 ***)(v20[1] + 8);
    }
    goto LABEL_65;
  }
  IopIncrementDeviceObjectRefCount(v35, 1, v38);
  ExReleaseResourceLite(&IopDatabaseResource);
  v40 = (struct _KEVENT *)(BugCheckParameter1 + 280);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v43 = 0;
  }
  v41 = v52;
  KiLeaveCriticalRegionUnsafe(v52);
  IopLoadFileSystemDriver(v35);
  if ( !a3 )
  {
    v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v52 + 562), a4);
    if ( v14 < 0 )
    {
      ObfDereferenceObject(v18);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v15 = v43;
      goto LABEL_78;
    }
    v43 = 1;
  }
  --*(_WORD *)(v52 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v42 = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (v42 & 8) != 0 )
  {
    v14 = -1073741632;
LABEL_73:
    v15 = v43;
    goto LABEL_74;
  }
  if ( (v42 & 1) == 0 )
  {
    v21 = (__int64 **)v60;
    v60[0] = *v20;
    v14 = -1073741489;
    goto LABEL_60;
  }
  ObfDereferenceObject(v18);
  v14 = 0;
LABEL_67:
  v15 = v43;
  if ( v14 >= 0 )
    goto LABEL_77;
LABEL_74:
  ObfDereferenceObject(v18);
LABEL_77:
  ExReleaseResourceLite(&IopDatabaseResource);
  v41 = v52;
  v40 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_78:
  if ( v15 )
  {
    KeSetEvent(v40, 0, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe(v41);
  if ( v45 )
  {
    if ( v46 )
    {
      if ( v14 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)v62, &DosName.Length, v14);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)v62, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v14 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v14, 0LL, 0LL);
LABEL_9:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
