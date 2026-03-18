/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C0274F20
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C014C2A8 (DpiDxgkDdiQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C026C760 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiPdoHandleStopDevice @ 0x1C0276DA0 (DpiPdoHandleStopDevice.c)
 *     DpiTestQueryInterface @ 0x1C0278244 (DpiTestQueryInterface.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0290E80 (MonitorNotifyDeviceNodeReady.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Status; // edi
  UCHAR MinorFunction; // cl
  __int64 v8; // r13
  __int64 (__fastcall *v9)(PDEVICE_OBJECT); // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  struct _IO_REMOVE_LOCK *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  DXGADAPTER *v27; // rcx
  char v28; // dl
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  _QUERY_INTERFACE v34; // [rsp+40h] [rbp-30h] BYREF
  int Data; // [rsp+A0h] [rbp+30h] BYREF

  DeviceExtension = (char *)Pdo->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( MinorFunction < 0x18u )
  {
    v9 = *(__int64 (__fastcall **)(PDEVICE_OBJECT))&DeviceExtension[8 * MinorFunction + 288];
    if ( v9 )
    {
      Status = v9(Pdo);
      goto LABEL_69;
    }
  }
  if ( MinorFunction <= 8u )
  {
    if ( MinorFunction == 8 )
    {
      v22 = *((_QWORD *)DeviceExtension + 5);
      if ( Irp->IoStatus.Status != -1073741637 )
      {
LABEL_70:
        Status = Irp->IoStatus.Status;
        goto LABEL_71;
      }
      v14 = *(_QWORD *)(v22 + 256) == 0LL;
      v34.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      v34.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
      v34.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
      v34.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
      v34.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v34.DeviceUid = *((_DWORD *)DeviceExtension + 126);
      if ( v14 )
        goto LABEL_44;
      if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1) >= 0 )
      {
        Status = DpiBrightnessQueryInterface(*((_QWORD **)DeviceExtension + 4), &v34);
        if ( Status == -1073741198 )
        {
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3792), 1);
          Status = DpiDxgkDdiQueryInterface(v22, *((_QWORD *)DeviceExtension + 6), (const GUID *)&v34);
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3792));
        }
        DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
      }
      if ( Status == -1073741637 )
LABEL_44:
        Status = DpiTestQueryInterface(Pdo, &v34);
      if ( Status >= 0 )
      {
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v34.InterfaceType;
        CurrentStackLocation->Parameters.QueryInterface.Size = v34.Size;
        CurrentStackLocation->Parameters.QueryInterface.Version = v34.Version;
        CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v34.Interface;
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v34.InterfaceSpecificData;
      }
      goto LABEL_69;
    }
    v10 = MinorFunction - 1;
    if ( !v10 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
      {
        DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v16 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = 5;
      goto LABEL_16;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[483] )
        {
          DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        }
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        v14 = *((_DWORD *)DeviceExtension + 59) == 5;
        goto LABEL_14;
      }
      v13 = v12 - 2;
      if ( !v13 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[483] )
        {
          DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        }
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v16 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = 3;
        goto LABEL_16;
      }
      if ( v13 == 1 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[483] )
        {
          DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        }
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        v14 = *((_DWORD *)DeviceExtension + 59) == 3;
LABEL_14:
        if ( !v14 )
        {
LABEL_17:
          Status = 0;
LABEL_18:
          if ( DeviceExtension[483] )
          {
            DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          }
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          goto LABEL_71;
        }
        v15 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v15;
        v16 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_16:
        *((_DWORD *)DeviceExtension + 60) = v16;
        goto LABEL_17;
      }
      goto LABEL_68;
    }
    if ( *((_DWORD *)DeviceExtension + 60) == 2 )
      DpiPdoHandleStopDevice(Pdo);
    v17 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    if ( DeviceExtension[509] )
    {
      IoReleaseRemoveLockEx(v17, Irp, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v17, Irp, 0x20u);
      IoQueueWorkItem(
        *((PIO_WORKITEM *)DeviceExtension + 119),
        (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo,
        DelayedWorkQueue,
        0LL);
    }
    v19 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v19 + 244] = *((_DWORD *)DeviceExtension + 60);
    v20 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v20;
    *((_DWORD *)DeviceExtension + 59) = 7;
    v21 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v21 + 24) = Pdo;
    WdLogEvent5_WdEvent(v21);
LABEL_33:
    Status = 0;
    goto LABEL_71;
  }
  v23 = MinorFunction - 10;
  if ( !v23 )
    goto LABEL_68;
  v24 = v23 - 1;
  if ( !v24 )
    goto LABEL_33;
  v25 = v24 - 11;
  if ( !v25 )
  {
    Status = -1073741823;
    goto LABEL_71;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    KeEnterCriticalRegion();
    if ( DeviceExtension[483] )
    {
      DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    }
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    Status = 0;
    v29 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v29 + 244] = *((_DWORD *)DeviceExtension + 60);
    v30 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v30;
    *((_DWORD *)DeviceExtension + 59) = 6;
    v32 = WdLogNewEntry5_WdEvent(v29, v31);
    *(_QWORD *)(v32 + 24) = Pdo;
    WdLogEvent5_WdEvent(v32);
    goto LABEL_18;
  }
  if ( v26 != 2 )
  {
LABEL_68:
    Status = Irp->IoStatus.Status;
    goto LABEL_69;
  }
  if ( !DeviceExtension[510] && *(_DWORD *)(v8 + 2664) >= 2u )
    IoInvalidateDeviceRelations(Pdo, PowerRelations);
  v14 = *((_DWORD *)DeviceExtension + 124) == 1;
  DeviceExtension[510] = 1;
  if ( !v14 || DeviceExtension[944] )
    goto LABEL_70;
  Status = DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1);
  if ( Status >= 0 )
  {
    v27 = *(DXGADAPTER **)(v8 + 3792);
    if ( *((_DWORD *)v27 + 1074) || (v28 = 0, *((_DWORD *)v27 + 1075)) )
      v28 = 1;
    Data = *((_DWORD *)v27 + 1076);
    if ( v28 )
    {
      IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_SessionId, 0, 0, 7u, 4u, &Data);
      v27 = *(DXGADAPTER **)(v8 + 3792);
    }
    MonitorNotifyDeviceNodeReady(v27, *((_DWORD *)DeviceExtension + 126));
    DeviceExtension[944] = 1;
    DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
  }
LABEL_69:
  if ( Status == -1073741637 )
    goto LABEL_70;
LABEL_71:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
