/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C0179A60
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C0022088 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C0179E88 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C017A078 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int PnpRegistryValue; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 Status; // rsi
  PUNICODE_STRING v25; // rcx
  int v26; // eax
  void *v27; // rdx
  void *v28; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v31; // r9
  struct _UNICODE_STRING *v32; // rax
  unsigned int v33; // r15d
  PVOID PoolWithTag; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  _DWORD *StartContext; // rax
  void *v46; // r14
  __int64 v47; // rax
  NTSTATUS SystemThread; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  PIRP v53; // rax
  PIRP v54; // rax
  ULONG_PTR v55; // [rsp+40h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-61h]
  __int64 v57; // [rsp+50h] [rbp-59h] BYREF
  int v58; // [rsp+58h] [rbp-51h]
  const wchar_t *v59; // [rsp+60h] [rbp-49h]
  int *v60; // [rsp+68h] [rbp-41h]
  int v61; // [rsp+70h] [rbp-39h]
  int *v62; // [rsp+78h] [rbp-31h]
  int v63; // [rsp+80h] [rbp-29h]
  __int64 v64; // [rsp+88h] [rbp-21h]
  int v65; // [rsp+90h] [rbp-19h]
  _BYTE v66[40]; // [rsp+98h] [rbp-11h] BYREF
  int v68; // [rsp+118h] [rbp+6Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+77h] BYREF
  struct _UNICODE_STRING *v70; // [rsp+128h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v55 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &NumberOfBytes);
  v9 = v7;
  if ( v7 < 0 )
  {
    v11 = 1;
    v10 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v10 + 24) = v9;
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v8);
    v11 = NumberOfBytes;
    *(_QWORD *)(v10 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v10);
  v68 = 1;
  v57 = 0LL;
  v59 = L"MultiMonSupport";
  v58 = 288;
  v60 = &v68;
  v61 = 67108868;
  v62 = &v68;
  v63 = 4;
  v64 = 0LL;
  v65 = 0;
  memset(v66, 0, sizeof(v66));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v57, 0LL, 0LL);
  if ( !v68 )
    v11 = 0;
  if ( !v11
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1152)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v39 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v39 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v39);
    goto LABEL_48;
  }
  *(_DWORD *)(DeviceExtension + 2688) = v11;
  if ( *(_BYTE *)(DeviceExtension + 1156) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    NumberOfBytes = 0LL;
    v70 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v55 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
      LOBYTE(v31) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v70, v31);
      if ( NumberOfBytes )
      {
        v32 = v70;
        if ( v70 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v32;
        }
      }
    }
    else
    {
      v42 = WdLogNewEntry5_WdError(v13, 0LL, v14);
      *(_QWORD *)(v42 + 24) = 0LL;
      WdLogEvent5_WdError(v42);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1152)
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
        v43 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v43 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v43);
        goto LABEL_48;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdEvent(v20);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v44[3] = *(unsigned int *)(DeviceExtension + 544);
    v44[4] = Status;
    v44[5] = *(unsigned int *)(DeviceExtension + 1124);
    v44[6] = *(unsigned int *)(DeviceExtension + 1128);
    v44[7] = *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL);
    WdLogEvent5_WdError(v44);
    goto LABEL_23;
  }
  v25 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v25 )
  {
    DpiDetermineResourceListSize(v25, &NumberOfBytes);
    v33 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1288) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_60;
    memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v33);
    if ( v4 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v55;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v26 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v26;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !byte_1C00A2790 )
      goto LABEL_21;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2693) )
  {
    byte_1C00A2791 = 1;
    goto LABEL_20;
  }
  byte_1C00A2790 = 1;
LABEL_40:
  if ( byte_1C00A2791 )
    KeSetEvent(&Event, 0, 0);
LABEL_21:
  if ( !byte_1C00A2792 || *(_BYTE *)(DeviceExtension + 1159) )
    goto LABEL_22;
  StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  v46 = StartContext;
  if ( !StartContext )
  {
LABEL_60:
    LODWORD(Status) = -1073741801;
    v47 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
    *(_QWORD *)(v47 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v47);
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
  v52 = WdLogNewEntry5_WdError(v50, v49, v51);
  *(_QWORD *)(v52 + 24) = Status;
  WdLogEvent5_WdError(v52);
  ExFreePoolWithTag(v46, 0x74727044u);
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_48:
    v40 = *(_DWORD *)(DeviceExtension + 236);
    if ( v40 == 1 )
    {
      --*(_DWORD *)(DeviceExtension + 276);
      v40 = *(_DWORD *)(DeviceExtension + 240);
      v41 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 236) = v40;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4 * v41 + 244);
    }
    if ( *(_QWORD *)(DeviceExtension + 1288) )
    {
      ExFreePoolWithTag(*(PVOID *)(DeviceExtension + 1288), 0);
      v40 = *(_DWORD *)(DeviceExtension + 236);
      *(_QWORD *)(DeviceExtension + 1288) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x802uLL, (int)Status, v40, *(int *)(DeviceExtension + 240));
    goto LABEL_28;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v27 = *(void **)(DeviceExtension + 5416);
    if ( v27 )
    {
      v53 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5328), v27);
      *(_QWORD *)(DeviceExtension + 5416) = 0LL;
      if ( v53 )
      {
        *(_BYTE *)(DeviceExtension + 5444) = 1;
        v53->IoStatus.Status = 0;
        v53->IoStatus.Information = 0LL;
        IofCompleteRequest(v53, 0);
      }
    }
    v28 = *(void **)(DeviceExtension + 5448);
    if ( v28 )
    {
      v54 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5328), v28);
      *(_QWORD *)(DeviceExtension + 5448) = 0LL;
      if ( v54 )
      {
        *(_BYTE *)(DeviceExtension + 5476) = 1;
        v54->IoStatus.Status = 0;
        v54->IoStatus.Information = 0LL;
        IofCompleteRequest(v54, 0);
      }
    }
  }
LABEL_28:
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
