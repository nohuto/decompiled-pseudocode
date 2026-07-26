/*
 * XREFs of ndisAddDevice @ 0x1C012E628
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C001A480 (NdisConvertNdisStatusToNtStatus.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ndisReadRssKeywords @ 0x1C002A93C (ndisReadRssKeywords.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C002CE14 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002D104 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C002F2E8 (ndisMInitializeMiniportBlock.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C00302C0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     TraceLoggingProviderEnabled @ 0x1C003125C (TraceLoggingProviderEnabled.c)
 *     ndisMFindNumaDistances @ 0x1C003A37C (ndisMFindNumaDistances.c)
 *     ndisCreateSecurityDescriptor @ 0x1C003A9A8 (ndisCreateSecurityDescriptor.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAE8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C003EAAC (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ndisMInvokeAddDevice @ 0x1C003EB24 (ndisMInvokeAddDevice.c)
 *     ndisAllocateDefaultQueue @ 0x1C003ECE4 (ndisAllocateDefaultQueue.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1C003F0BC (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3C0 (ndisMUpdateHiddenFlag.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00407C0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A390 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C009AFF8 (ndisMInvokeRemoveDevice.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C009D19C (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     McTemplateK0z @ 0x1C009D220 (McTemplateK0z.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FC4D8 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 *     ndisCreateAdapterInstanceName @ 0x1C0106AA4 (ndisCreateAdapterInstanceName.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisMiniportQueryDevicePropertyData @ 0x1C010AA50 (ndisMiniportQueryDevicePropertyData.c)
 *     ndisAllocateEventLog @ 0x1C010AC14 (ndisAllocateEventLog.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C0114E90 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, _QWORD *a2)
{
  int appended; // edi
  char *DeviceExtension; // rbx
  char v5; // r15
  _DEVICE_OBJECT *v6; // rax
  char v7; // r12
  const struct _GUID *v8; // rdx
  __int64 v9; // rdx
  ULONGLONG v10; // r8
  __int64 v11; // r13
  int v12; // r14d
  KIRQL v13; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r15
  unsigned int v15; // ecx
  ULONG v16; // r15d
  __int16 v17; // ax
  PDEVICE_OBJECT v18; // rdx
  LOGICAL IsDriverVerifying; // eax
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int DevicePropertyData; // edi
  char v24; // al
  __int64 v25; // rcx
  int SecurityDescriptor; // eax
  PVOID v27; // rcx
  unsigned __int16 **v28; // r15
  _UNKNOWN **v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  int updated; // eax
  Ndis::BindEngine *v33; // rcx
  KIRQL v34; // r14
  __int64 v35; // r12
  char v36; // r13
  enum Ndis::ReadBindingsOptions::Flags v37; // r8d
  unsigned __int8 v38; // r10
  __int64 v39; // rax
  void *v40; // rcx
  KIRQL v41; // al
  __int64 v42; // rdx
  int v43; // edx
  __int64 v45; // rcx
  __int64 v46; // rbx
  _DEVICE_OBJECT *v47; // rax
  __int64 v48; // rcx
  _DEVICE_OBJECT *v49; // rax
  struct _MCGEN_TRACE_CONTEXT *v50; // rcx
  PVOID v51; // rcx
  struct _MCGEN_TRACE_CONTEXT *v52; // rcx
  struct _NDIS_MINIPORT_BLOCK *v53; // rdx
  _DWORD *v54; // rax
  __int64 v55; // rcx
  unsigned __int16 *v56; // rax
  __int128 v57; // xmm1
  __int64 v58; // rax
  NTSTATUS v59; // eax
  int v60; // edx
  _UNICODE_STRING *v61; // rcx
  NTSTATUS v62; // eax
  int v63; // edx
  _DEVICE_OBJECT *v64; // rcx
  signed __int32 v65[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+40h] [rbp-C0h]
  char v69; // [rsp+41h] [rbp-BFh]
  char v70; // [rsp+42h] [rbp-BEh]
  char v71; // [rsp+43h] [rbp-BDh]
  char v72; // [rsp+44h] [rbp-BCh]
  char v73; // [rsp+45h] [rbp-BBh]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+50h] [rbp-B0h] BYREF
  char v76[8]; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT v77; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-88h]
  PDRIVER_OBJECT DriverObject; // [rsp+80h] [rbp-80h]
  struct BUS_INTERFACE_REFERENCE *v81; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-70h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-60h]
  char *v84; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v85; // [rsp+B0h] [rbp-50h]
  void **v86[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v87; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D0h] [rbp-30h] BYREF
  int v89; // [rsp+D8h] [rbp-28h]
  int v90; // [rsp+DCh] [rbp-24h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  char v93[160]; // [rsp+100h] [rbp+0h] BYREF
  char v94; // [rsp+1A0h] [rbp+A0h] BYREF
  char v95; // [rsp+1C8h] [rbp+C8h] BYREF

  v85 = a2;
  appended = -1073741823;
  v77 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  v5 = 0;
  v6 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  v7 = 0;
  TargetDevice = v6;
  *(_QWORD *)v76 = 0LL;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v68 = 0;
  v8 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      13,
      68,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)v6);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v11 = *(_QWORD *)&a1[6].Data1;
  v12 = 1;
  if ( !v11 )
  {
    appended = -1073741670;
LABEL_78:
    v36 = 0;
    goto LABEL_63;
  }
  DriverObject = *(PDRIVER_OBJECT *)(v11 + 40);
  v13 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != (struct _NDIS_M_DRIVER_BLOCK *)v11; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v13);
  v12 = 2;
  if ( i != (struct _NDIS_M_DRIVER_BLOCK *)v11 )
    goto LABEL_145;
  v12 = 3;
  if ( *(_BYTE *)(v11 + 24) >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
    goto LABEL_77;
  }
  v12 = 4;
  v15 = (**(unsigned __int16 **)a1[3].Data4 + 5851) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v16 = v15 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v94;
  DestinationString.Buffer = (wchar_t *)&v95;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended )
  {
LABEL_77:
    v5 = 0;
    goto LABEL_78;
  }
  appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
  if ( appended )
  {
    v5 = 0;
    v36 = 0;
    goto LABEL_63;
  }
  v17 = *(_WORD *)(v11 + 26);
  if ( (v17 & 0xC0) == 0 )
  {
    v12 = appended + 5;
    appended = IoCreateDevice(DriverObject, v16, &DestinationString, appended + 23, 0x100u, 0, &SourceDevice);
    if ( appended >= 0 )
    {
      v12 = 6;
      v18 = TargetDevice;
      SourceDevice->Flags |= 0x10u;
      v18->Flags &= ~0x80u;
      SourceDevice->Flags |= 0x2000u;
      v77 = IoAttachDeviceToDeviceStack(SourceDevice, v18);
      if ( v77 )
      {
        DeviceExtension = (char *)SourceDevice->DeviceExtension;
        ndisMInitializeMiniportBlock(v11, (__int64)DeviceExtension, v16);
        goto LABEL_16;
      }
      appended = -1073741823;
    }
    goto LABEL_77;
  }
  if ( (v17 & 0x40) == 0 )
  {
    if ( (v17 & 0x80u) != 0 )
    {
      DeviceExtension = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (int)v16, 0x776C444Eu);
      if ( DeviceExtension )
      {
        ndisMInitializeMiniportBlock(v11, (__int64)DeviceExtension, v16);
        *((_DWORD *)DeviceExtension + 30) |= 0x100u;
        goto LABEL_16;
      }
      appended = -1073741670;
      goto LABEL_77;
    }
    appended = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        13,
        69,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        v11,
        v17);
LABEL_145:
    v5 = 0;
    v36 = 0;
    goto LABEL_63;
  }
  v45 = *(_QWORD *)&a1[5].Data1;
  v83 = *(_QWORD *)(v11 + 360);
  v68 = 1;
  appended = (*(__int64 (__fastcall **)(__int64, _QWORD, char **))(v83 + 112))(v45, v16, &v84);
  if ( appended )
  {
LABEL_102:
    v5 = 0;
LABEL_147:
    v36 = 0;
    goto LABEL_63;
  }
  v46 = v83;
  v47 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_QWORD))(v83 + 72))(*(_QWORD *)&a1[5].Data1);
  v48 = *(_QWORD *)&a1[5].Data1;
  SourceDevice = v47;
  v49 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(v46 + 80))(v48);
  DeviceExtension = v84;
  v77 = v49;
  ndisMInitializeMiniportBlock(v11, (__int64)v84, v16);
  *((_DWORD *)DeviceExtension + 30) |= 0x80u;
  *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
LABEL_16:
  *(struct _GUID *)(DeviceExtension + 4008) = *a1;
  v5 = 0;
  *((_QWORD *)DeviceExtension + 559) = ndisAllocateEventLog(2u, 1);
  if ( a1[5].Data4[1] )
    IsDriverVerifying = (*(unsigned __int16 *)(v11 + 26) >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(DriverObject);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v12 = 1;
      appended = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                   SourceDevice,
                   DeviceExtension,
                   (void **)(DeviceExtension + 24),
                   (void **)(DeviceExtension + 4960));
      if ( appended < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2,
            13,
            70,
            (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
            (char)DeviceExtension);
        goto LABEL_94;
      }
    }
  }
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)a1[3].Data4,
    (PUNICODE_STRING)DeviceExtension + 238,
    (struct _UNICODE_STRING *)DeviceExtension + 237,
    (wchar_t *)DeviceExtension + 2920);
  if ( a1[5].Data4[1] )
    goto LABEL_41;
  *((_QWORD *)DeviceExtension + 479) = TargetDevice;
  *((_QWORD *)DeviceExtension + 478) = SourceDevice;
  *((_QWORD *)DeviceExtension + 480) = v77;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
  *((_QWORD *)DeviceExtension + 526) = PoolWithTag;
  if ( !PoolWithTag )
  {
    appended = -1073741670;
    v12 = 1;
    goto LABEL_94;
  }
  *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
  RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
  P = 0LL;
  v21 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)v86, (__int64)&P);
  DevicePropertyData = ndisMiniportQueryDevicePropertyData((__int64)DeviceExtension, v22, (wchar_t **)(v21 + 8));
  if ( v87 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v86[0], v86[1]);
  if ( !DevicePropertyData )
  {
    *((_QWORD *)DeviceExtension + 670) = P;
    P = 0LL;
  }
  v12 = 8;
  appended = IoRegisterDeviceInterface(
               *((PDEVICE_OBJECT *)DeviceExtension + 479),
               &GUID_DEVINTERFACE_NET,
               (PUNICODE_STRING)((unsigned __int64)(DeviceExtension + 3792) & -(__int64)(v68 != 0)),
               (PUNICODE_STRING)(DeviceExtension + 4152));
  if ( appended < 0 )
  {
    v50 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        13,
        71,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
      McTemplateK0qqq(v50, &AddDeviceFailed, &NDIS_PROVIDER_ID, appended, 0x10001u, (const unsigned int)DeviceExtension);
    v51 = P;
    P = 0LL;
    if ( !v51 )
      goto LABEL_102;
    ExFreePoolWithTag(v51, 0);
    v5 = v69;
LABEL_94:
    v36 = v5;
    goto LABEL_63;
  }
  v24 = v68;
  v12 = 7;
  v69 = 1;
  if ( v68 )
  {
    appended = IoCreateSymbolicLink(
                 (PUNICODE_STRING)(DeviceExtension + 4200),
                 (PUNICODE_STRING)(DeviceExtension + 4152));
    if ( appended )
    {
      v52 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          13,
          72,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          (char)DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
        goto LABEL_109;
      *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
      DeviceCharacteristics[0] = 65538;
LABEL_108:
      McTemplateK0qqq(
        v52,
        &AddDeviceFailed,
        &NDIS_PROVIDER_ID,
        appended,
        DeviceCharacteristics[0],
        *(const unsigned int *)Exclusive);
      goto LABEL_109;
    }
    v24 = v68;
    v71 = 1;
  }
  appended = IoCreateSymbolicLink(
               *(PUNICODE_STRING *)a1[3].Data4,
               (PUNICODE_STRING)&DeviceExtension[(-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 4200]);
  if ( appended )
  {
    v52 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        13,
        73,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
      goto LABEL_109;
    *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
    DeviceCharacteristics[0] = 65539;
    goto LABEL_108;
  }
  v7 = 1;
  *((_QWORD *)DeviceExtension + 619) = 0LL;
  v25 = *(_QWORD *)&a1[3].Data1;
  if ( v25 && *(_WORD *)v25 )
    ndisQueryDeviceFlags(*(const wchar_t **)(v25 + 8), (unsigned __int64 *)DeviceExtension + 619);
  if ( a1[4].Data4[0] )
    *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
  if ( a1[4].Data4[1] )
    *((_DWORD *)DeviceExtension + 31) |= 2u;
  if ( a1[4].Data4[2] )
    *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
  if ( a1[4].Data4[0] )
  {
    v12 = 4;
    v81 = 0LL;
    appended = ndisQueryReferenceBusInterface(TargetDevice, (PVOID *)&v81);
    if ( appended >= 0 )
    {
      *((_QWORD *)DeviceExtension + 498) = v81;
      goto LABEL_38;
    }
LABEL_109:
    v27 = P;
    P = 0LL;
LABEL_110:
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    goto LABEL_112;
  }
LABEL_38:
  v12 = 4;
  SecurityDescriptor = ndisCreateSecurityDescriptor(
                         *((void **)DeviceExtension + 478),
                         (PSECURITY_DESCRIPTOR *)DeviceExtension + 473,
                         5u);
  v27 = P;
  appended = SecurityDescriptor;
  P = 0LL;
  if ( SecurityDescriptor < 0 )
    goto LABEL_110;
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
LABEL_41:
  v28 = (unsigned __int16 **)(DeviceExtension + 3856);
  v12 = 4;
  v7 = v69;
  appended = ndisCreateAdapterInstanceName(
               (__int64)DeviceExtension,
               (__int64 *)DeviceExtension + 482,
               (_QWORD *)DeviceExtension + 551);
  if ( appended < 0 )
    goto LABEL_146;
  v29 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xDu,
      0x4Au,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)DeviceExtension,
      *v28);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z((__int64)v29, &AddDevice, v10, *((const wchar_t **)*v28 + 1));
  *((_DWORD *)DeviceExtension + 1015) = 1;
  v30 = *(_QWORD *)a1[3].Data4;
  *(_QWORD *)a1[3].Data4 = 0LL;
  v31 = (void *)*((_QWORD *)DeviceExtension + 522);
  *((_QWORD *)DeviceExtension + 522) = v30;
  if ( v31 )
    ExFreePoolWithTag(v31, 0x7274534Bu);
  updated = ndisInitializeConfiguration((__int64)DeviceExtension, *(const WCHAR **)a1[1].Data4);
  if ( updated )
    goto LABEL_113;
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5104),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(v33);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5032), DatapathPaused, PauseReason_Wdf) )
    {
      memset(v93, 0, sizeof(v93));
      if ( (unsigned __int8)byte_1C00E677B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          (struct NDIS_PNPTRACE_LOCALS *)v93);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v53,
            0x1Cu,
            0x4Bu,
            (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
            *(unsigned __int16 **)&v93[8],
            *(_QWORD *)v93);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5104), v53);
  }
  v73 = 1;
  v7 = v69;
  appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( appended < 0 )
  {
LABEL_146:
    v5 = v69;
    goto LABEL_147;
  }
  ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( *(_QWORD *)(v11 + 784) )
  {
    v12 = 10;
    updated = ndisMInvokeAddDevice((__int64)DeviceExtension);
    if ( updated )
      goto LABEL_113;
    v70 = 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      76,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v11,
      (char)DeviceExtension);
  }
  if ( (*(_BYTE *)(v11 + 26) & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v54 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
    if ( !v54 )
    {
      appended = -1073741823;
LABEL_133:
      v12 = 3;
      goto LABEL_114;
    }
    if ( *v54 > 1u )
    {
      appended = -1073741637;
      goto LABEL_133;
    }
  }
  v34 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_QWORD *)v76 = ndisIfFindInterfaceByInterfaceGuid(a1);
  if ( *(_QWORD *)v76 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v76 + 1312LL) == *(_QWORD *)&a1[1].Data1 )
      goto LABEL_57;
    *(_QWORD *)v76 = 0LL;
  }
  appended = -1073741072;
LABEL_57:
  KeReleaseSpinLock(&ndisIfListLock, v34);
  v7 = v69;
  v12 = 4;
  if ( appended )
  {
LABEL_112:
    v5 = v69;
LABEL_115:
    v36 = v70;
    goto LABEL_63;
  }
  ndisMUpdateHiddenFlag((__int64)DeviceExtension, a1[4].Data4[3]);
  v35 = *(_QWORD *)v76;
  ndisIfUpdateInterfaceHiddenFlag(*(__int64 *)v76, a1[4].Data4[3]);
  if ( v68 )
  {
    if ( !a1[5].Data4[0] )
      *((_DWORD *)DeviceExtension + 142) |= 8u;
    if ( !*(_BYTE *)(v35 + 1482) )
    {
      v5 = v69;
      appended = -1073741811;
      v36 = v70;
      v7 = v69;
      goto LABEL_63;
    }
    v55 = *(_QWORD *)&a1[5].Data1;
    v90 = 0;
    v89 = *(_DWORD *)(v35 + 564);
    v88 = *(_QWORD *)(v35 + 1312);
    v56 = *v28;
    v92 = 0LL;
    v91 = *((_OWORD *)DeviceExtension + 237);
    v57 = *(_OWORD *)v56;
    v58 = *(_QWORD *)(v11 + 360);
    v92 = v57;
    (*(void (__fastcall **)(__int64, __int64 *))(v58 + 120))(v55, &v88);
  }
  updated = ndisIfUpdateInterfaceOnAddDevice(v35, (__int64)DeviceExtension);
  if ( updated || (v72 = 1, (updated = ndisAllocateDefaultQueue((__int64)DeviceExtension)) != 0) )
  {
LABEL_113:
    appended = NdisConvertNdisStatusToNtStatus(updated);
LABEL_114:
    v5 = v69;
    v7 = v69;
    goto LABEL_115;
  }
  v36 = 0;
  v5 = 0;
  v7 = 0;
  v71 = 0;
  v72 = 0;
  if ( !a1[5].Data4[1] )
  {
    _InterlockedOr(v65, 0);
    SourceDevice->Flags &= ~0x80u;
  }
LABEL_63:
  if ( TraceLoggingProviderEnabled(&hProvider, v9, v10) )
    NdisTraceLoggingDeviceAdded(*(__int64 *)v76, v12, (__int64)a1, appended, *((_QWORD *)DeviceExtension + 670), v38);
  if ( appended < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v73 )
      {
        Ndis::BindRegistry::Reload((Ndis::BindRegistry *)DeviceExtension, 0LL, v37);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v36 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v5 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v71 )
      {
        v59 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v59 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v60) = 4;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v60,
              13,
              77,
              (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
              (char)DeviceExtension,
              v59);
          }
        }
      }
      if ( v7 )
      {
        v61 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v61 )
          v61 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v62 = IoDeleteSymbolicLink(v61);
        if ( v62 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v63) = 4;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v63,
            13,
            78,
            (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
            (char)DeviceExtension,
            v62);
        }
      }
      if ( v72 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((_QWORD *)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((__int64)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( !v68 )
    {
      v64 = SourceDevice;
      if ( SourceDevice )
      {
        if ( v77 )
        {
          IoDetachDevice(v77);
          v64 = SourceDevice;
        }
        IoDeleteDevice(v64);
        SourceDevice = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v39 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v40 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v39;
    if ( v40 )
      ExFreePoolWithTag(v40, 0x7274534Bu);
    v41 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v41);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v42,
        9u,
        0x4Fu,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
    if ( v85 )
      *v85 = DeviceExtension;
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v43,
      13,
      80,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)DeviceExtension,
      appended);
  }
  return (unsigned int)appended;
}
