/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C0145440
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C016408C (DpiDxgkDdiQueryInterface.c)
 *     DpiTestQueryInterface @ 0x1C0164264 (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C01642C8 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0176214 (MonitorNotifyDeviceNodeReady.c)
 *     DpiPdoHandleStopDevice @ 0x1C02AF5A0 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(PDEVICE_OBJECT Pdo, IRP *Tag)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  UCHAR MinorFunction; // cl
  __int64 v7; // r13
  __int64 (__fastcall *v8)(PDEVICE_OBJECT); // rax
  int Status; // edi
  __int64 v11; // r12
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  struct _LUID *v16; // rdx
  ULONG v17; // r9d
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  struct _IO_REMOVE_LOCK *v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  _QUERY_INTERFACE v32; // [rsp+40h] [rbp-30h] BYREF
  unsigned int Data; // [rsp+A0h] [rbp+30h] BYREF

  DeviceExtension = (char *)Pdo->DeviceExtension;
  CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v7 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( MinorFunction < 0x18u )
  {
    v8 = *(__int64 (__fastcall **)(PDEVICE_OBJECT))&DeviceExtension[8 * MinorFunction + 288];
    if ( v8 )
    {
      Status = v8(Pdo);
      goto LABEL_4;
    }
  }
  if ( MinorFunction > 8u )
  {
    v12 = MinorFunction - 10;
    if ( !v12 )
      goto LABEL_24;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 11;
      if ( !v14 )
      {
        Status = -1073741823;
        goto LABEL_5;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[484] )
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        Status = 0;
        v25 = *((_DWORD *)DeviceExtension + 69) & 7;
        *(_DWORD *)&DeviceExtension[4 * v25 + 244] = *((_DWORD *)DeviceExtension + 60);
        v26 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v26;
        *((_DWORD *)DeviceExtension + 59) = 6;
        v27 = WdLogNewEntry5_WdEvent(v25);
        *(_QWORD *)(v27 + 24) = Pdo;
        WdLogEvent5_WdEvent(v27);
        goto LABEL_50;
      }
      if ( v15 == 2 )
      {
        if ( !DeviceExtension[510] && *(_DWORD *)(v7 + 2736) >= 2u )
          IoInvalidateDeviceRelations(Pdo, PowerRelations);
        v22 = *((_DWORD *)DeviceExtension + 124) == 1;
        DeviceExtension[510] = 1;
        if ( !v22 || DeviceExtension[944] )
          goto LABEL_18;
        Status = DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1);
        if ( Status >= 0 )
        {
          if ( DXGADAPTER::IsAddapterSessionized(*(DXGADAPTER **)(v7 + 3896), v16, &Data, 0LL) )
            IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_SessionId, 0, v17, 7u, 4u, &Data);
          MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v7 + 3896), *((_DWORD *)DeviceExtension + 126));
          DeviceExtension[944] = 1;
          DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
        }
        goto LABEL_4;
      }
      goto LABEL_24;
    }
LABEL_25:
    Status = 0;
    goto LABEL_5;
  }
  if ( MinorFunction == 8 )
  {
    v11 = *((_QWORD *)DeviceExtension + 5);
    if ( Tag->IoStatus.Status != -1073741637 )
      goto LABEL_18;
    v32.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v32.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v32.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
    v32.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
    v32.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    v32.DeviceUid = *((_DWORD *)DeviceExtension + 126);
    *(_DWORD *)(&v32.Version + 1) = 0;
    *(&v32.DeviceUid + 1) = 0;
    if ( !*(_QWORD *)(v11 + 256) )
      goto LABEL_15;
    if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1) < 0 )
    {
      Status = -1073741637;
    }
    else
    {
      Status = DpiBrightnessQueryInterface(*((PVOID *)DeviceExtension + 4), &v32);
      if ( Status == -1073741198 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), 1LL);
        Status = DpiDxgkDdiQueryInterface(v11, *((_QWORD *)DeviceExtension + 6), &v32);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3896));
      }
      DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
    }
    if ( Status == -1073741637 )
LABEL_15:
      Status = DpiTestQueryInterface(Pdo, &v32);
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v32.InterfaceType;
      CurrentStackLocation->Parameters.QueryInterface.Size = v32.Size;
      CurrentStackLocation->Parameters.QueryInterface.Version = v32.Version;
      CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v32.Interface;
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v32.InterfaceSpecificData;
    }
LABEL_4:
    if ( Status != -1073741637 )
      goto LABEL_5;
LABEL_18:
    Status = Tag->IoStatus.Status;
    goto LABEL_5;
  }
  v18 = MinorFunction - 1;
  if ( !v18 )
  {
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
    v24 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = 5;
    goto LABEL_47;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( *((_DWORD *)DeviceExtension + 60) == 2 )
      DpiPdoHandleStopDevice(Pdo);
    v28 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    if ( DeviceExtension[509] )
    {
      IoReleaseRemoveLockEx(v28, Tag, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v28, Tag, 0x20u);
      IoQueueWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    v29 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v29 + 244] = *((_DWORD *)DeviceExtension + 60);
    v30 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v30;
    *((_DWORD *)DeviceExtension + 59) = 7;
    v31 = WdLogNewEntry5_WdEvent(v29);
    *(_QWORD *)(v31 + 24) = Pdo;
    WdLogEvent5_WdEvent(v31);
    goto LABEL_25;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 2;
    if ( !v21 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v24 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = 3;
      goto LABEL_47;
    }
    if ( v21 == 1 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v22 = *((_DWORD *)DeviceExtension + 59) == 3;
      goto LABEL_44;
    }
LABEL_24:
    Status = Tag->IoStatus.Status;
    goto LABEL_4;
  }
  KeEnterCriticalRegion();
  if ( DeviceExtension[484] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v22 = *((_DWORD *)DeviceExtension + 59) == 5;
LABEL_44:
  if ( v22 )
  {
    v23 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v23;
    v24 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_47:
    *((_DWORD *)DeviceExtension + 60) = v24;
  }
  Status = 0;
LABEL_50:
  if ( DeviceExtension[484] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
LABEL_5:
  Tag->IoStatus.Status = Status;
  IofCompleteRequest(Tag, 0);
  return (unsigned int)Status;
}
