/*
 * XREFs of ndisAddDevice @ 0x1C010DDE4
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEB_WE@Z @ 0x1C001CC38 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C001DBC0 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     TraceLoggingProviderEnabled @ 0x1C001DC04 (TraceLoggingProviderEnabled.c)
 *     ndisMUpdateHiddenFlag @ 0x1C001E3B0 (ndisMUpdateHiddenFlag.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001E404 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C00216D0 (NdisConvertNdisStatusToNtStatus.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     McTemplateK0z @ 0x1C0064B10 (McTemplateK0z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B4364 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C00BD6EC (ndisIfUpdateInterfaceHiddenFlag.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisInitializeConfiguration @ 0x1C00C598C (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00C5E24 (ndisReadRssKeywords.c)
 *     ndisAllocateDefaultQueue @ 0x1C00CA284 (ndisAllocateDefaultQueue.c)
 *     ndisMInvokeAddDevice @ 0x1C00CA338 (ndisMInvokeAddDevice.c)
 *     ndisMFindNumaDistances @ 0x1C00CA39C (ndisMFindNumaDistances.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA59C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00CA640 (ndisCreateSecurityDescriptor.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00CAC70 (ndisCreateAdapterInstanceName.c)
 *     ndisSetDeviceNames @ 0x1C00CAED8 (ndisSetDeviceNames.c)
 *     ndisQueryDeviceFlags @ 0x1C00CAF4C (ndisQueryDeviceFlags.c)
 *     ndisAllocateEventLog @ 0x1C00CB02C (ndisAllocateEventLog.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00CB1EC (ndisMInitializeMiniportBlock.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00E346C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00F09BC (ndisMInvokeRemoveDevice.c)
 *     ndisLWMCreateAdapterInstanceName @ 0x1C00F2944 (ndisLWMCreateAdapterInstanceName.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00F3348 (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT Pdo, __int64 *a3, __int64 a4, char **a5)
{
  struct _DRIVER_OBJECT *v6; // r12
  int DevicePropertyData; // edi
  char *DeviceExtension; // rbx
  char v10; // r13
  UCHAR v11; // dl
  ULONGLONG v12; // r8
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // r13
  ULONG v14; // eax
  PVOID v15; // r14
  int v16; // esi
  KIRQL v17; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r14
  unsigned int v19; // ecx
  ULONG v20; // r14d
  unsigned __int16 Flags; // ax
  PDEVICE_OBJECT v22; // rdx
  char v23; // r14
  LOGICAL IsDriverVerifying; // eax
  _DEVICE_OBJECT *v25; // r12
  PVOID v26; // rax
  _WORD *v27; // rax
  _WORD *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  char *v31; // r9
  __int16 v32; // ax
  _WORD *v33; // rax
  struct _MCGEN_TRACE_CONTEXT *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  int AdapterInstanceName; // eax
  __int64 v38; // rcx
  void *v39; // rdi
  PVOID v40; // rax
  int updated; // eax
  Ndis::BindEngine *v42; // rcx
  char v43; // r12
  KIRQL v44; // si
  BOOLEAN v45; // al
  unsigned __int8 v46; // r14
  KIRQL v47; // al
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // r12
  void *v50; // rcx
  _DEVICE_OBJECT *v51; // rax
  void *v52; // rcx
  _DEVICE_OBJECT *v53; // rax
  char *PoolWithTag; // rax
  struct _NDIS_MINIPORT_BLOCK *v55; // rdx
  _DWORD *v56; // rax
  void *v57; // rcx
  _UNICODE_STRING *v58; // rcx
  NTSTATUS v59; // eax
  _DEVICE_OBJECT *v60; // rcx
  signed __int32 v61[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  char v64; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v65; // [rsp+41h] [rbp-BFh]
  char v66; // [rsp+42h] [rbp-BEh]
  char v67; // [rsp+43h] [rbp-BDh]
  char v68; // [rsp+44h] [rbp-BCh]
  char v69; // [rsp+45h] [rbp-BBh]
  char v70; // [rsp+46h] [rbp-BAh]
  ULONG RequiredSize; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT v75; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG Type; // [rsp+80h] [rbp-80h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+88h] [rbp-78h]
  char **v79; // [rsp+90h] [rbp-70h]
  PDRIVER_OBJECT v80; // [rsp+98h] [rbp-68h]
  PVOID v81; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  char *v83; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v84; // [rsp+C0h] [rbp-40h]
  _OWORD v85[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v86[20]; // [rsp+F0h] [rbp-10h] BYREF
  GUID InterfaceClassGuid; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v88[40]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v89[64]; // [rsp+1C8h] [rbp+C8h] BYREF

  v84 = a3;
  TargetDevice = Pdo;
  v6 = DriverObject;
  v80 = DriverObject;
  v79 = a5;
  v75 = 0LL;
  DeviceObject = 0LL;
  DevicePropertyData = -1073741823;
  InterfaceByInterfaceGuid = 0LL;
  DeviceExtension = 0LL;
  v66 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  v67 = 0;
  v81 = 0LL;
  memset(v88, 0, sizeof(v88));
  memset(v89, 0, 0x3CuLL);
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v65 = 0;
  P = 0LL;
  RequiredSize = 0;
  memset(v85, 0, sizeof(v85));
  v10 = *(_BYTE *)(a4 + 73);
  v64 = v10;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x44u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)Pdo);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( v10 )
  {
    DriverObjectExtension = 0LL;
  }
  else
  {
    DriverObjectExtension = 0LL;
    if ( TraceLoggingProviderEnabled(&hProvider, v11, v12) )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_InstanceId,
                             0,
                             0,
                             RequiredSize,
                             0LL,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData == -1073741789 )
      {
        v14 = RequiredSize;
        if ( !RequiredSize )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v14 = RequiredSize;
        }
        P = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x7473444Eu);
        v15 = P;
        if ( P )
        {
          DevicePropertyData = IoGetDevicePropertyData(
                                 Pdo,
                                 &DEVPKEY_Device_InstanceId,
                                 0,
                                 0,
                                 RequiredSize,
                                 P,
                                 &RequiredSize,
                                 &Type);
          if ( DevicePropertyData < 0 )
          {
            ExFreePoolWithTag(v15, 0x7473444Eu);
            P = 0LL;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a4 + 56) )
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E494944);
  if ( v64 )
    DriverObjectExtension = *(struct _NDIS_M_DRIVER_BLOCK **)(a4 + 80);
  if ( !DriverObjectExtension )
  {
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
      DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E494944);
  }
  v16 = 1;
  if ( !DriverObjectExtension )
    goto LABEL_101;
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != DriverObjectExtension; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v17);
  v11 = 2;
  v16 = 2;
  if ( i != DriverObjectExtension )
    goto LABEL_158;
  v16 = 3;
  if ( DriverObjectExtension->MajorNdisVersion >= 6u && !*(_BYTE *)(a4 + 24) )
  {
    DevicePropertyData = -1073741491;
    goto LABEL_158;
  }
  v16 = 4;
  v19 = (**(unsigned __int16 **)(a4 + 40) + 5971) & 0xFFFFFFF8;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v20 = v19 + 8 * ndisMaxNumberOfProcessors;
  DestinationString.Buffer = (wchar_t *)v89;
  Flags = DriverObjectExtension->Flags;
  if ( (Flags & 0xC0) != 0 )
  {
    if ( (Flags & 0x40) != 0 )
    {
      CxBlock = DriverObjectExtension->CxBlock;
      v50 = *(void **)(a4 + 64);
      v65 = 1;
      DevicePropertyData = CxBlock->Chars.EvtCxAllocateMiniportBlock(v50, v20, (void **)&v83);
      if ( DevicePropertyData )
        goto LABEL_158;
      DevicePropertyData = CxBlock->Chars.EvtCxGetAssignedFdoName(*(void **)(a4 + 64), &DestinationString);
      if ( DevicePropertyData )
        goto LABEL_158;
      v51 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)(a4 + 64));
      v52 = *(void **)(a4 + 64);
      DeviceObject = v51;
      v53 = CxBlock->Chars.EvtCxGetNextDeviceObject(v52);
      DeviceExtension = v83;
      v75 = v53;
      ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)v83, v20);
      *((_DWORD *)DeviceExtension + 30) |= 0x80u;
      v6 = v80;
      *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)(a4 + 64);
    }
    else
    {
      if ( (Flags & 0x80u) == 0 )
      {
        DevicePropertyData = -1073741811;
        if ( (unsigned __int8)byte_1C00A025C >= 2u )
          WPP_SF_qD(0x45u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DriverObjectExtension, Flags);
        goto LABEL_158;
      }
      if ( !v64 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (int)v20, 0x776C444Eu);
      DeviceExtension = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_101:
        DevicePropertyData = -1073741670;
        goto LABEL_158;
      }
      ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)PoolWithTag, v20);
      *((_DWORD *)DeviceExtension + 30) |= 0x100u;
    }
    if ( v79 )
      *v79 = DeviceExtension;
  }
  else
  {
    *(_DWORD *)&String.Length = 2621440;
    String.Buffer = (wchar_t *)v88;
    RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
    DevicePropertyData = RtlIntegerToUnicodeString(
                           _InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex),
                           0xAu,
                           &String);
    if ( DevicePropertyData )
      goto LABEL_158;
    DevicePropertyData = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( DevicePropertyData )
      goto LABEL_158;
    v16 = 5;
    DevicePropertyData = IoCreateDevice(v6, v20, &DestinationString, 0x17u, 0x100u, 0, &DeviceObject);
    if ( DevicePropertyData < 0 )
      goto LABEL_158;
    v16 = 6;
    v22 = TargetDevice;
    DeviceObject->Flags |= 0x10u;
    v22->Flags &= ~0x80u;
    DeviceObject->Flags |= 0x2000u;
    v75 = IoAttachDeviceToDeviceStack(DeviceObject, v22);
    if ( !v75 )
      goto LABEL_105;
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)DeviceExtension, v20);
  }
  *(_OWORD *)(DeviceExtension + 4040) = *(_OWORD *)a4;
  v23 = v64;
  *((_QWORD *)DeviceExtension + 564) = ndisAllocateEventLog(2u, 1);
  if ( v23 )
    IsDriverVerifying = (DriverObjectExtension->Flags >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(v6);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v16 = 1;
      DevicePropertyData = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                             DeviceObject,
                             DeviceExtension,
                             (void **)(DeviceExtension + 24),
                             (void **)(DeviceExtension + 5000));
      if ( DevicePropertyData < 0 )
      {
        if ( (unsigned __int8)byte_1C00A025C >= 2u )
          WPP_SF_q(0x46u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeviceExtension);
        goto LABEL_158;
      }
    }
  }
  v25 = TargetDevice;
  if ( !v23 )
  {
    *((_QWORD *)DeviceExtension + 483) = TargetDevice;
    *((_QWORD *)DeviceExtension + 482) = DeviceObject;
    *((_QWORD *)DeviceExtension + 484) = v75;
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
    *((_QWORD *)DeviceExtension + 531) = v26;
    if ( v26 )
    {
      *((_WORD *)DeviceExtension + 2121) = DestinationString.Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)DeviceExtension + 265, &DestinationString);
      if ( !RequiredSize )
      {
LABEL_46:
        v16 = 7;
        DevicePropertyData = IoCreateSymbolicLink(*(PUNICODE_STRING *)(a4 + 40), (PUNICODE_STRING)DeviceExtension + 265);
        if ( DevicePropertyData )
        {
          if ( (unsigned __int8)byte_1C00A025C >= 2u )
            WPP_SF_q(0x47u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeviceExtension);
          if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
            goto LABEL_88;
          LODWORD(Data) = (_DWORD)DeviceExtension;
          Size[0] = 4941;
LABEL_129:
          McTemplateK0qqq(
            v34,
            &AddDeviceFailed,
            &NDIS_PROVIDER_ID,
            DevicePropertyData,
            Size[0],
            (const unsigned int)Data);
          goto LABEL_88;
        }
        v68 = 1;
        *((_QWORD *)DeviceExtension + 624) = 0LL;
        v35 = *(_QWORD *)(a4 + 32);
        if ( v35 && *(_WORD *)v35 )
          ndisQueryDeviceFlags(*(const wchar_t **)(v35 + 8), (_QWORD *)DeviceExtension + 624);
        if ( *(_BYTE *)(a4 + 57) )
          *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
        if ( *(_BYTE *)(a4 + 58) )
          *((_DWORD *)DeviceExtension + 31) |= 2u;
        if ( *(_BYTE *)(a4 + 59) )
          *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
        goto LABEL_56;
      }
      v27 = ExAllocatePoolWithTag(NonPagedPoolNx, RequiredSize, 0x6E61444Eu);
      *((_QWORD *)DeviceExtension + 675) = v27;
      v28 = v27;
      if ( v27 )
      {
        v29 = (unsigned __int64)RequiredSize >> 1;
        if ( v29 )
        {
          v30 = 2147483646 - v29;
          v31 = (char *)((_BYTE *)P - (_BYTE *)v27);
          do
          {
            if ( !(v29 + v30) )
              break;
            v32 = *(_WORD *)&v31[(_QWORD)v28];
            if ( !v32 )
              break;
            *v28++ = v32;
            --v29;
          }
          while ( v29 );
          v33 = v28 - 1;
          if ( v29 )
            v33 = v28;
          *v33 = 0;
        }
        goto LABEL_46;
      }
    }
    v16 = 1;
    DevicePropertyData = -1073741670;
    goto LABEL_88;
  }
LABEL_56:
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)(a4 + 40),
    (PUNICODE_STRING)DeviceExtension + 240,
    (__int64)(DeviceExtension + 3824),
    (wchar_t *)DeviceExtension + 2980);
  v16 = 4;
  if ( v64 )
    AdapterInstanceName = ndisLWMCreateAdapterInstanceName((__int64)DeviceExtension, a4);
  else
    AdapterInstanceName = ndisCreateAdapterInstanceName(
                            (_UNICODE_STRING **)DeviceExtension + 486,
                            (__int64)DeviceExtension,
                            v36,
                            (_UNICODE_STRING **)DeviceExtension + 556);
  DevicePropertyData = AdapterInstanceName;
  if ( AdapterInstanceName < 0 )
    goto LABEL_158;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qZ(
      0x48u,
      &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids,
      (__int64)DeviceExtension,
      *((const wchar_t **)DeviceExtension + 486));
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z(v38, &AddDevice, v12, *(const wchar_t **)(*((_QWORD *)DeviceExtension + 486) + 8LL));
  if ( !v64 )
  {
    if ( *(_BYTE *)(a4 + 57) )
    {
      v16 = 4;
      DevicePropertyData = ndisQueryReferenceBusInterface(v25, &v81);
      if ( DevicePropertyData < 0 )
        goto LABEL_88;
      *((_QWORD *)DeviceExtension + 502) = v81;
    }
    v16 = 4;
    DevicePropertyData = ndisCreateSecurityDescriptor(
                           *((void **)DeviceExtension + 482),
                           (PSECURITY_DESCRIPTOR *)DeviceExtension + 477,
                           5u);
    if ( DevicePropertyData < 0 )
      goto LABEL_88;
  }
  v39 = (void *)*((_QWORD *)DeviceExtension + 504);
  *((_DWORD *)DeviceExtension + 1023) = 1;
  if ( !v39 )
  {
    v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu);
    *((_QWORD *)DeviceExtension + 504) = v40;
    v39 = v40;
    if ( !v40 )
    {
      v16 = 1;
      goto LABEL_101;
    }
  }
  memset(v39, 0, 0x88uLL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
    (void **)DeviceExtension + 526,
    (void **)(a4 + 40));
  v16 = 4;
  updated = ndisInitializeConfiguration((__int64)v39, (__int64)DeviceExtension, *v84);
  if ( updated )
    goto LABEL_133;
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5144),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(v42);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5072), DatapathPaused, PauseReason_Wdf)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, (struct NDIS_PNPTRACE_LOCALS *)v86);
      WPP_SF_Zq(0x49u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (const wchar_t *)v86[1], v86[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5144), v55);
  }
  v70 = 1;
  DevicePropertyData = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( DevicePropertyData < 0 )
  {
LABEL_158:
    if ( v64 )
      goto LABEL_159;
    goto LABEL_88;
  }
  ndisMFindNumaDistances((__int64)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( DriverObjectExtension->AddDeviceHandler )
  {
    v43 = v64;
    if ( v64 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v16 = 10;
    updated = ndisMInvokeAddDevice((__int64)DeviceExtension);
    if ( updated )
      goto LABEL_133;
    v66 = 1;
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qq(0x4Au, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, DriverObjectExtension, DeviceExtension);
    v43 = v64;
  }
  if ( (DriverObjectExtension->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v56 = (_DWORD *)*((_QWORD *)DeviceExtension + 475);
    if ( v56 )
    {
      if ( *v56 > 1u )
      {
        v16 = 3;
        DevicePropertyData = -1073741637;
        goto LABEL_158;
      }
      goto LABEL_77;
    }
    v16 = 3;
LABEL_105:
    DevicePropertyData = -1073741823;
    goto LABEL_158;
  }
LABEL_77:
  if ( v43 )
    goto LABEL_80;
  v16 = 8;
  DevicePropertyData = IoRegisterDeviceInterface(
                         *((PDEVICE_OBJECT *)DeviceExtension + 483),
                         &InterfaceClassGuid,
                         0LL,
                         (PUNICODE_STRING)(DeviceExtension + 4184));
  if ( DevicePropertyData < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_q(0x4Bu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
      goto LABEL_88;
    LODWORD(Data) = (_DWORD)DeviceExtension;
    Size[0] = 5170;
    goto LABEL_129;
  }
  v67 = 1;
LABEL_80:
  v44 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid((struct _GUID *)a4);
  if ( InterfaceByInterfaceGuid )
  {
    if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)(a4 + 16) )
      goto LABEL_82;
    InterfaceByInterfaceGuid = 0LL;
  }
  DevicePropertyData = -1073741072;
LABEL_82:
  KeReleaseSpinLock(&ndisIfListLock, v44);
  v16 = 4;
  if ( DevicePropertyData )
    goto LABEL_158;
  ndisMUpdateHiddenFlag((__int64)DeviceExtension, *(_BYTE *)(a4 + 60));
  ndisIfUpdateInterfaceHiddenFlag((__int64)InterfaceByInterfaceGuid, *(_BYTE *)(a4 + 60));
  if ( v65 )
  {
    if ( !*(_BYTE *)(a4 + 72) )
      *((_DWORD *)DeviceExtension + 142) |= 8u;
    if ( !BYTE2(InterfaceByInterfaceGuid[93].Flink) )
    {
      DevicePropertyData = -1073741811;
      goto LABEL_158;
    }
    DWORD2(v85[0]) = HIDWORD(InterfaceByInterfaceGuid[35].Flink);
    v57 = *(void **)(a4 + 64);
    *(_QWORD *)&v85[0] = InterfaceByInterfaceGuid[82].Flink;
    v85[1] = *((_OWORD *)DeviceExtension + 239);
    DriverObjectExtension->CxBlock->Chars.EvtCxMiniportCompleteAdd(v57, (_NDIS_WDF_COMPLETE_ADD_PARAMS *)v85);
  }
  updated = ndisIfUpdateInterfaceOnAddDevice((__int64)InterfaceByInterfaceGuid, (__int64)DeviceExtension);
  if ( updated || (v69 = 1, (updated = ndisAllocateDefaultQueue((__int64)DeviceExtension)) != 0) )
  {
LABEL_133:
    DevicePropertyData = NdisConvertNdisStatusToNtStatus(updated);
    goto LABEL_158;
  }
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  if ( v43 )
  {
LABEL_159:
    v46 = v65;
    goto LABEL_90;
  }
  _InterlockedOr(v61, 0);
  DeviceObject->Flags &= ~0x80u;
LABEL_88:
  v45 = TraceLoggingProviderEnabled(&hProvider, v11, v12);
  v46 = v65;
  if ( v45 )
    NdisTraceLoggingDeviceAdded((__int64)InterfaceByInterfaceGuid, v16, a4, DevicePropertyData, (__int64)P, v65);
LABEL_90:
  if ( P )
    ExFreePoolWithTag(P, 0x7473444Eu);
  if ( DevicePropertyData < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v70 )
      {
        Ndis::BindRegistry::Reload(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v12);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v66 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v67 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4184));
        *((_QWORD *)DeviceExtension + 524) = 0LL;
      }
      if ( v68 )
      {
        v58 = *(_UNICODE_STRING **)(a4 + 40);
        if ( !v58 )
          v58 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 526);
        v59 = IoDeleteSymbolicLink(v58);
        if ( v59 && (unsigned __int8)byte_1C00A025C >= 4u )
          WPP_SF_qD(0x4Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeviceExtension, v59);
      }
      if ( v69 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 509), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove((_NDIS_MINIPORT_BLOCK *)DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v46 )
    {
      v60 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v75 )
        {
          IoDetachDevice(v75);
          v60 = DeviceObject;
        }
        IoDeleteDevice(v60);
        DeviceObject = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1050) = *(_DWORD *)(a4 + 28);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
      (void **)DeviceExtension + 527,
      (void **)(a4 + 48));
    v47 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 485) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v47);
    if ( (unsigned __int8)byte_1C00A0258 >= 4u )
      WPP_SF_qZ(
        0x4Du,
        &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids,
        (__int64)DeviceExtension,
        *((const wchar_t **)DeviceExtension + 486));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x4Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
