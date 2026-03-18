/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C0151AF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C001EF54 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFilterOutVgaResources @ 0x1C015AB20 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C015AD10 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int PnpRegistryValue; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v23; // rcx
  int v24; // eax
  void *v25; // rdx
  void *v26; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v29; // r9
  struct _UNICODE_STRING *v30; // rax
  unsigned int v31; // r15d
  PVOID PoolWithTag; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _DWORD *StartContext; // rax
  void *v41; // r14
  __int64 v42; // rax
  NTSTATUS SystemThread; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  PIRP v46; // rax
  PIRP v47; // rax
  ULONG_PTR v48; // [rsp+40h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-61h]
  __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  int v51; // [rsp+58h] [rbp-51h]
  const wchar_t *v52; // [rsp+60h] [rbp-49h]
  int *v53; // [rsp+68h] [rbp-41h]
  int v54; // [rsp+70h] [rbp-39h]
  int *v55; // [rsp+78h] [rbp-31h]
  int v56; // [rsp+80h] [rbp-29h]
  __int64 v57; // [rsp+88h] [rbp-21h]
  int v58; // [rsp+90h] [rbp-19h]
  _BYTE v59[40]; // [rsp+98h] [rbp-11h] BYREF
  int v61; // [rsp+118h] [rbp+6Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+77h] BYREF
  struct _UNICODE_STRING *v63; // [rsp+128h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v48 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &NumberOfBytes);
  v10 = v7;
  if ( v7 < 0 )
  {
    v12 = 1;
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    v12 = NumberOfBytes;
    *(_QWORD *)(v11 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v11);
  v61 = 1;
  v50 = 0LL;
  v52 = L"MultiMonSupport";
  v51 = 288;
  v53 = &v61;
  v54 = 67108868;
  v55 = &v61;
  v56 = 4;
  v57 = 0LL;
  v58 = 0;
  memset(v59, 0, sizeof(v59));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v50, 0LL, 0LL);
  if ( !v61 )
    v12 = 0;
  if ( !v12
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1144)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v34);
    goto LABEL_48;
  }
  *(_DWORD *)(DeviceExtension + 2616) = v12;
  if ( *(_BYTE *)(DeviceExtension + 1148) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    NumberOfBytes = 0LL;
    v63 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v48 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
      LOBYTE(v29) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v63, v29);
      if ( NumberOfBytes )
      {
        v30 = v63;
        if ( v63 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v30;
        }
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v37 + 24) = 0LL;
      WdLogEvent5_WdError(v37);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1144)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2u);
    v19 = PnpRegistryValue;
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        LODWORD(Status) = -1073741823;
        v38 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v38 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v38);
        goto LABEL_48;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdEvent(v20);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v39[3] = *(unsigned int *)(DeviceExtension + 544);
    v39[4] = Status;
    v39[5] = *(unsigned int *)(DeviceExtension + 1116);
    v39[6] = *(unsigned int *)(DeviceExtension + 1120);
    v39[7] = *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL);
    WdLogEvent5_WdError(v39);
    goto LABEL_23;
  }
  v23 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v23 )
  {
    DpiDetermineResourceListSize(v23, &NumberOfBytes);
    v31 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1216) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_60;
    memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v31);
    if ( v4 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v48;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v24 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v24;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !byte_1C008E790 )
      goto LABEL_21;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2621) )
  {
    byte_1C008E791 = 1;
    goto LABEL_20;
  }
  byte_1C008E790 = 1;
LABEL_40:
  if ( byte_1C008E791 )
    KeSetEvent(&Event, 0, 0);
LABEL_21:
  if ( !byte_1C008E792 || *(_BYTE *)(DeviceExtension + 1151) )
    goto LABEL_22;
  StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  v41 = StartContext;
  if ( !StartContext )
  {
LABEL_60:
    LODWORD(Status) = -1073741801;
    v42 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v42);
    goto LABEL_48;
  }
  *StartContext = 2;
  *((_WORD *)StartContext + 2) = 0;
  StartContext[131] = 0;
  SystemThread = PsCreateSystemThread(
                   (PHANDLE)&NumberOfBytes,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
                   StartContext);
  Status = SystemThread;
  if ( SystemThread >= 0 )
  {
    ZwClose((HANDLE)NumberOfBytes);
LABEL_22:
    *(_DWORD *)(DeviceExtension + 284) = 1;
    *(_DWORD *)(DeviceExtension + 280) = 1;
    PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
    goto LABEL_23;
  }
  v45 = WdLogNewEntry5_WdError(v44);
  *(_QWORD *)(v45 + 24) = Status;
  WdLogEvent5_WdError(v45);
  ExFreePoolWithTag(v41, 0x74727044u);
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_48:
    v35 = *(_DWORD *)(DeviceExtension + 236);
    if ( v35 == 1 )
    {
      --*(_DWORD *)(DeviceExtension + 276);
      v35 = *(_DWORD *)(DeviceExtension + 240);
      v36 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 236) = v35;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4 * v36 + 244);
    }
    if ( *(_QWORD *)(DeviceExtension + 1216) )
    {
      ExFreePoolWithTag(*(PVOID *)(DeviceExtension + 1216), 0);
      v35 = *(_DWORD *)(DeviceExtension + 236);
      *(_QWORD *)(DeviceExtension + 1216) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x802uLL, (int)Status, v35, *(int *)(DeviceExtension + 240));
    goto LABEL_28;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v25 = *(void **)(DeviceExtension + 5288);
    if ( v25 )
    {
      v46 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5200), v25);
      *(_QWORD *)(DeviceExtension + 5288) = 0LL;
      if ( v46 )
      {
        *(_BYTE *)(DeviceExtension + 5316) = 1;
        v46->IoStatus.Status = 0;
        v46->IoStatus.Information = 0LL;
        IofCompleteRequest(v46, 0);
      }
    }
    v26 = *(void **)(DeviceExtension + 5320);
    if ( v26 )
    {
      v47 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5200), v26);
      *(_QWORD *)(DeviceExtension + 5320) = 0LL;
      if ( v47 )
      {
        *(_BYTE *)(DeviceExtension + 5348) = 1;
        v47->IoStatus.Status = 0;
        v47->IoStatus.Information = 0LL;
        IofCompleteRequest(v47, 0);
      }
    }
  }
LABEL_28:
  if ( *(_BYTE *)(DeviceExtension + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
