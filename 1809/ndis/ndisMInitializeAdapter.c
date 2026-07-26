/*
 * XREFs of ndisMInitializeAdapter @ 0x1C010B314
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     NdisWriteErrorLogEntry @ 0x1C0014630 (NdisWriteErrorLogEntry.c)
 *     ndisAddWoLMagicPacket @ 0x1C0014CE0 (ndisAddWoLMagicPacket.c)
 *     ndisReferenceDriver @ 0x1C00151A8 (ndisReferenceDriver.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001524C (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSetWakeUpTimer @ 0x1C00153E8 (ndisSetWakeUpTimer.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001554C (ndisUpdatePMCurrentCapabilities.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0015804 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C00162F0 (ndisMSetIndicatePacketHandler.c)
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0019FEC (ndisMergeOffloadCapsAndRegistry.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001C360 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C001C520 (ndisAllocatePerProcessorSlot.c)
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     ndisFreePerProcessorSlot @ 0x1C0025620 (ndisFreePerProcessorSlot.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisDereferenceMiniportRef @ 0x1C005FA54 (ndisDereferenceMiniportRef.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00BBE1C (ndisMiniportPMParametersUpdated.c)
 *     ndisRequestWaitWake @ 0x1C00BBF44 (ndisRequestWaitWake.c)
 *     ndisQueryPowerCapabilities @ 0x1C00BC400 (ndisQueryPowerCapabilities.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00BC674 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00BCA28 (ndisGetPciDeviceCustomProperties.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00BCDE0 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00BCF00 (ndisMRegisterBugCheckHandler.c)
 *     ndisMStartInitMode @ 0x1C00BCF2C (ndisMStartInitMode.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00BCF94 (ndisCreateNdisSupportedOidList.c)
 *     ndisMNotifyMachineName @ 0x1C00BD150 (ndisMNotifyMachineName.c)
 *     EthCreateFilter @ 0x1C00BD4A8 (EthCreateFilter.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00BD698 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00BD718 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C (ndisIovCreateDefaultNicSwitch.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00C4940 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C8AA0 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisMInvokeInitialize @ 0x1C00C932C (ndisMInvokeInitialize.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C956C (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeInitMode @ 0x1C00C99F8 (ndisMInitializeInitMode.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C9B6C (ndisMSetOffloadAttributes.c)
 *     ndisQueryOidList @ 0x1C00CC7F0 (ndisQueryOidList.c)
 *     ndisInitializeNsi @ 0x1C00D0EAC (ndisInitializeNsi.c)
 *     DisableMagicPacketKeyword @ 0x1C00E6268 (DisableMagicPacketKeyword.c)
 *     ndisGetMiniportInfo @ 0x1C00EF6C8 (ndisGetMiniportInfo.c)
 *     ndisLWMInitializeHandler @ 0x1C00F0124 (ndisLWMInitializeHandler.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00F0B04 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00F2D4C (ndisMDeregisterBugCheckHandler.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00F32C4 (ndisQueryReenumerateSelfInterface.c)
 *     nullCreateFilter @ 0x1C00F3EF0 (nullCreateFilter.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00F539C (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C00F53DC (ndisMRegisterPDCTaskClient.c)
 *     ndisIovTeardownVf @ 0x1C00F94D0 (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00FC5B0 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCA88 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisQueueMiniportOnDriver @ 0x1C010B264 (ndisQueueMiniportOnDriver.c)
 *     ndisMAdjustFilters @ 0x1C010C284 (ndisMAdjustFilters.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // r8
  NTSTATUS v11; // eax
  int PciDeviceCustomProperties; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 PerProcessorSlot; // rax
  unsigned int v16; // r8d
  unsigned int i; // edx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  bool v21; // zf
  ULONG_PTR v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ebx
  __int64 *v25; // rdx
  unsigned __int8 v26; // bl
  unsigned int v27; // edx
  KIRQL v28; // bl
  char v29; // al
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // r8d
  unsigned int v35; // edx
  char v36; // al
  int v37; // r8d
  char v38; // bl
  int v39; // edx
  unsigned int v40; // ecx
  int v41; // ecx
  unsigned __int8 v42; // al
  int v43; // eax
  int v44; // eax
  KIRQL v45; // bl
  NTSTATUS v46; // eax
  char v47; // bl
  NTSTATUS v48; // eax
  char v49; // r15
  char v50; // bl
  __int64 v51; // rax
  __int64 v52; // rdx
  int updated; // ebx
  PVOID v54; // rax
  int OidList; // eax
  char v56; // bl
  _BYTE *v57; // rax
  __int64 v58; // rax
  enum Ndis::ReadBindingsOptions::Flags v59; // r8d
  struct _NDIS_MINIPORT_BLOCK *v60; // rdx
  _WORD *v61; // rcx
  NTSTATUS v62; // eax
  unsigned int v63; // ebx
  KIRQL v64; // bl
  char v65; // bl
  void *v66; // rcx
  int v68; // eax
  unsigned int v69; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v71; // rcx
  unsigned __int8 v72; // bl
  __int64 v73; // rax
  int ReenumerateSelfInterface; // eax
  __int64 v75; // rax
  int v76; // ebx
  NDIS_STATUS v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  ULONG_PTR v81; // rbx
  NTSTATUS v82; // eax
  char v83; // bl
  __int64 v84; // rcx
  int v85; // eax
  void *v86; // rax
  char (__fastcall *v87)(__int64); // rax
  int v88; // ecx
  int v89; // eax
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // r9
  __int64 v93; // rax
  void *v94; // rcx
  void *v95; // rcx
  KIRQL v96; // al
  KIRQL v97; // si
  unsigned int Arg1[2]; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v99; // [rsp+40h] [rbp-C0h] BYREF
  char v100; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v101; // [rsp+42h] [rbp-BEh]
  char v102; // [rsp+43h] [rbp-BDh]
  bool v103; // [rsp+44h] [rbp-BCh]
  char v104; // [rsp+45h] [rbp-BBh]
  unsigned int v105; // [rsp+48h] [rbp-B8h] BYREF
  char v106; // [rsp+4Ch] [rbp-B4h]
  char v107; // [rsp+4Dh] [rbp-B3h]
  char v108; // [rsp+4Eh] [rbp-B2h]
  char v109; // [rsp+4Fh] [rbp-B1h]
  char v110; // [rsp+50h] [rbp-B0h]
  int Status; // [rsp+54h] [rbp-ACh] BYREF
  char v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+5Ch] [rbp-A4h] BYREF
  int v114; // [rsp+60h] [rbp-A0h]
  unsigned int v115; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v116; // [rsp+68h] [rbp-98h] BYREF
  __int64 InputBuffer; // [rsp+70h] [rbp-90h] BYREF
  __int64 v118; // [rsp+78h] [rbp-88h]
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-80h] BYREF
  PVOID WnodeEventItem; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  char v122[8]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Keyword; // [rsp+B0h] [rbp-50h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v126[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v127[4]; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v130[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v131[28]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v132[20]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v133[20]; // [rsp+310h] [rbp+210h] BYREF
  _QWORD v134[20]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD v135[20]; // [rsp+450h] [rbp+350h] BYREF
  _DWORD v136[6]; // [rsp+4F0h] [rbp+3F0h] BYREF
  GUID InterfaceClassGuid; // [rsp+508h] [rbp+408h] BYREF
  GUID v138; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v139[72]; // [rsp+528h] [rbp+428h] BYREF
  char v140; // [rsp+570h] [rbp+470h] BYREF

  memset(v127, 0, sizeof(v127));
  v105 = 1;
  v8 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v113 = 1;
  v115 = 0;
  v104 = 0;
  v138 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v109 = 0;
  v100 = 0;
  v99 = 0;
  v102 = 0;
  v107 = 0;
  v112 = 0;
  v110 = 0;
  v106 = 0;
  v103 = 0;
  LOBYTE(v114) = 0;
  v108 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qZ(0x14u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v9 = *(_BYTE *)(a1 + 24);
  v101 = v9;
  if ( !(unsigned __int8)ndisReferenceDriver(a1) )
    goto LABEL_137;
  v104 = 1;
  DestinationString.Buffer = (wchar_t *)&v140;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3824)) < 0 )
    goto LABEL_137;
  v11 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4240));
  PciDeviceCustomProperties = v11;
  v103 = v11 >= 0 || v11 == -1073741771;
  *(_QWORD *)(a2 + 1984) = a5;
  *(_QWORD *)(a2 + 432) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 1904) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 2152) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 2160) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 640) = EthFilterDprIndicateReceive;
  *(_QWORD *)(a2 + 664) = EthFilterDprIndicateReceiveComplete;
  *(_QWORD *)(a2 + 440) = NdisMSendComplete;
  *(_QWORD *)(a2 + 752) = NdisMSendNetBufferListsComplete;
  *(_QWORD *)(a2 + 704) = NdisMTransferDataComplete;
  *(_QWORD *)(a2 + 456) = NdisMResetComplete;
  *(_QWORD *)(a2 + 688) = NdisMIndicateStatus;
  *(_QWORD *)(a2 + 696) = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)(a2 + 448) = NdisMSendResourcesAvailable;
  *(_QWORD *)(a2 + 712) = NdisMQueryInformationComplete;
  *(_QWORD *)(a2 + 720) = NdisMSetInformationComplete;
  *(_QWORD *)(a2 + 728) = ndisMWanSendCompleteInternal;
  *(_QWORD *)(a2 + 736) = NdisMWanIndicateReceive;
  *(_QWORD *)(a2 + 744) = NdisMWanIndicateReceiveComplete;
  *(_QWORD *)(a2 + 2416) = 48LL;
  *(_QWORD *)(a2 + 2600) = 48LL;
  *(_BYTE *)(a2 + 2681) = 1;
  *(_QWORD *)(a2 + 2448) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2408) = a2;
  *(_QWORD *)(a2 + 2424) = a2;
  *(_QWORD *)(a2 + 2632) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2592) = a2;
  *(_QWORD *)(a2 + 2608) = a2;
  *(_QWORD *)(a2 + 2432) = a2;
  *(_QWORD *)(a2 + 2488) = a2;
  *(_QWORD *)(a2 + 2616) = a2;
  *(_QWORD *)(a2 + 2672) = a2;
  *(_QWORD *)(a2 + 4616) = MEMORY[0xFFFFF78000000014];
  if ( v9 < 6u )
  {
    v69 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3168) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_181:
      Status = -1073741670;
      goto LABEL_137;
    }
    memset(PoolWithTag, 0, v69);
    v71 = *(_QWORD **)(a2 + 3792);
    v72 = v101;
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v71[16];
    *(_QWORD *)(a2 + 616) = v71[17];
    *(_QWORD *)(a2 + 2472) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2368) = 64LL;
    *(_QWORD *)(a2 + 2360) = a2;
    *(_QWORD *)(a2 + 2376) = a2;
    *(_QWORD *)(a2 + 4104) = v71[25];
    if ( v72 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1880) |= 0x10u;
      *(_QWORD *)(a2 + 2192) = v71[28];
      *(_QWORD *)(a2 + 2176) = v71[28];
      *(_QWORD *)(a2 + 2200) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v73 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1880) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v73;
      }
      if ( v72 >= 5u )
      {
        *(_DWORD *)(a2 + 1880) |= 0x200u;
        if ( v72 == 5 )
        {
          if ( *(_QWORD *)(a1 + 280) )
          {
            *(_DWORD *)(a2 + 120) |= 0x20000u;
            *(_QWORD *)(a1 + 552) = ndisMCoOidRequestToRequest;
            *(_QWORD *)(a2 + 2248) = a2;
          }
        }
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 3792);
    *(_BYTE *)(a2 + 2002) = 1;
    v14 = *(_QWORD *)(v13 + 192);
    *(_QWORD *)(a2 + 2360) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 2368) = *(_QWORD *)(a2 + 4112);
    *(_QWORD *)(a2 + 2192) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a2 + 2472) = v14;
    *(_QWORD *)(a2 + 2376) = a2;
    *(_QWORD *)(a2 + 2200) = a2;
    if ( *(_QWORD *)(a1 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v109 = 1;
  if ( !*(_DWORD *)(a2 + 3900) )
  {
    *(_DWORD *)(a2 + 3900) = 1;
    *(_DWORD *)(a2 + 3912) = 1;
  }
  ndisQueryPowerCapabilities((char *)a2);
  ndisMInitializeInitMode((char *)a2);
  *(_QWORD *)(a2 + 4112) = NdisNblTrackerRegisterComponent(0, a2, *(_QWORD *)(a2 + 3888));
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  *(_QWORD *)(a2 + 3320) = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_181;
  v16 = ndisMaxNumberOfProcessors;
  v110 = 1;
  for ( i = 0; i < v16; *(_DWORD *)(v18 + *(_QWORD *)(a2 + 3320)) = 6 )
    v18 = i++ << 12;
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 124) |= 0x100000u;
    if ( !ndisDriverTrackAlloc
      || (v21 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v21) )
    {
      ndisMiniportTrackAlloc = 0LL;
    }
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (*(_DWORD *)(a2 + 124) & 0x100000) == 0 )
      goto LABEL_20;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_20;
  }
  *(_DWORD *)(a2 + 3712) |= 0x800u;
LABEL_20:
  v19 = ndisRssV2Initialize((PVOID)a2);
  Status = v19;
  if ( v19 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x15u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v19);
    goto LABEL_137;
  }
  if ( *(_QWORD *)(a1 + 864) && !*(_QWORD *)(a2 + 4120) )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3872), (PVOID *)(a2 + 4120));
    PciDeviceCustomProperties = ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface >= 0 )
    {
      v75 = *(_QWORD *)(a2 + 4120);
      ConfigurationHandle = 0LL;
      v76 = (*(_DWORD *)(v75 + 40) >> 1) & 1;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(0x17u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v76, *(_DWORD *)(v75 + 40) & 1);
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = (void *)a2;
      ConfigObject.Flags = 0;
      v77 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v77;
      if ( v77 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_D(0x18u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v77);
      }
      else
      {
        Keyword.Buffer = L"PldrCapability";
        *(_DWORD *)&Keyword.Length = 1966108;
        ParameterValue.ParameterType = NdisParameterInteger;
        ParameterValue.ParameterData.IntegerData = v76;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_D(0x19u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, Status);
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_qD(0x16u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, ReenumerateSelfInterface);
      PciDeviceCustomProperties = 0;
    }
  }
  *(_DWORD *)(a2 + 2264) = 2;
  memset(v126, 0, sizeof(v126));
  memset(v131, 0, sizeof(v131));
  BYTE1(v131[0]) = 2;
  if ( v101 < 6u )
  {
    v24 = (*(__int64 (__fastcall **)(char *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
            v122,
            &v115,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( *(_DWORD *)(a2 + 3744) == 5 )
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3360));
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v136[1] = *(_DWORD *)(a2 + 3344);
    v136[2] = *(_DWORD *)(a2 + 3348);
    v136[3] = *(_DWORD *)(a2 + 3352);
    v136[4] = *(_DWORD *)(a2 + 3356);
    v20 = *(_QWORD *)(a2 + 944);
    v136[0] = 1311104;
    LODWORD(v126[0]) = 4194689;
    if ( v20 )
      v126[1] = v20 + 12;
    v21 = *(_DWORD *)(a2 + 3744) == 5;
    v126[2] = *(_QWORD *)(a2 + 1984);
    v126[3] = *(_QWORD *)(a2 + 4144);
    v126[6] = v136;
    v126[5] = *(_QWORD *)(a2 + 4056);
    LODWORD(v126[4]) = *(_DWORD *)(a2 + 4088);
    if ( v21 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3360));
      v22 = v126[7];
      if ( PciDeviceCustomProperties >= 0 )
        v22 = a2 + 3360;
      v126[7] = v22;
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x100) != 0 )
      v23 = ndisLWMInitializeHandler((NDIS_HANDLE)a2);
    else
      v23 = ndisMInvokeInitialize(a2, (__int64)v126);
    v24 = v23;
    if ( *(_DWORD *)(a2 + 3744) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x1Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v24);
  if ( (byte_1C00A2082 & 8) != 0 )
    McTemplateK0jqxqd(
      (__int64)&NDIS_PROVIDER_ID_Context,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4040),
      a2 + 4040,
      *(_DWORD *)(a2 + 4088),
      *(_QWORD *)(a2 + 4056),
      1,
      v24);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v24 )
  {
    *(_DWORD *)(a2 + 2264) = 1;
    *(_QWORD *)(a2 + 4096) = 2LL;
    v91 = *(_QWORD *)(a2 + 4072);
    if ( v91 && *(_DWORD *)(v91 + 1112) != 2 )
    {
      *(_DWORD *)(v91 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4072) + 1116LL) = *(_DWORD *)(a2 + 4100);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4672) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v105 = v24;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_355;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v65 = v104;
LABEL_136:
        v8 = 0;
        v102 = 0;
        v107 = 0;
        v106 = 0;
        v108 = 0;
        v109 = v65;
        v112 = v65;
        v110 = v65;
        goto LABEL_137;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v92 = *(_QWORD *)(a2 + 3888);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v92, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v92, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_355:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3888),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v25 = (__int64 *)(a2 + 16);
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 124) & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)(*(_QWORD *)(a2 + 3800) + 8LL), v25, 1, 0x1Fu);
    v78 = *(_QWORD *)(a2 + 16);
    if ( v78 )
      ndisDereferenceMiniportRef(v78, 0x1Fu);
  }
  else
  {
    *v25 = a2;
  }
  v26 = v101;
  if ( v101 < 6u )
  {
    v79 = *(_QWORD *)(a2 + 112);
    if ( !v79 || *(_BYTE *)(v79 + 145) || *(_BYTE *)(v79 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2080) )
    {
      *(_QWORD *)(a2 + 2080) = *(_QWORD *)(a1 + 312);
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a2 + 24);
    }
    v27 = *((_DWORD *)ndisMediumArray + v115);
    LODWORD(v131[1]) = v27;
    *(_DWORD *)(a2 + 464) = v27;
    *(_DWORD *)(a2 + 1836) = v27;
  }
  else
  {
    v27 = *(_DWORD *)(a2 + 464);
  }
  *(_DWORD *)(a2 + 2264) = 6;
  if ( v27 <= 0xD )
  {
    v68 = 8390;
    if ( _bittest(&v68, v27) )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 4u )
        WPP_SF_q(0x1Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
      if ( (byte_1C00A2083 & 0x10) != 0 )
        McTemplateK0jqxq(
          (__int64)&NDIS_PROVIDER_ID_Context,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4040),
          a2 + 4040,
          *(_DWORD *)(a2 + 4088),
          *(_QWORD *)(a2 + 4056),
          *(_DWORD *)(a2 + 464));
      goto LABEL_222;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) != 3 )
  {
LABEL_44:
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1864) = 721863;
    v29 = ndisSetWakeUpTimer(a2);
    v30 = (unsigned __int8)v114;
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1864) = 0;
    if ( v29 )
      v30 = 1;
    v114 = v30;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v28);
    ndisMStartInitMode(a2);
    Status = ndisCreateNdisSupportedOidList(a2);
    if ( Status )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x1Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, PciDeviceCustomProperties);
      if ( (byte_1C00A2082 & 0x10) != 0 )
        McTemplateK0jqxqd(
          (__int64)&NDIS_PROVIDER_ID_Context,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4040),
          a2 + 4040,
          *(_DWORD *)(a2 + 4088),
          *(_QWORD *)(a2 + 4056),
          2,
          PciDeviceCustomProperties);
      v105 = 36;
      goto LABEL_223;
    }
    if ( v101 < 6u )
    {
      memset(v139, 0, 0x3CuLL);
      v131[27] = v139;
      *(_QWORD *)(a2 + 2728) = v131;
      Status = ndisGetMiniportInfo(a2, (__int64)v131, &v105, (char *)&v99, &v113);
      if ( Status )
        goto LABEL_137;
      Status = ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2728));
      if ( Status )
        goto LABEL_137;
      v80 = *(_QWORD *)(a2 + 4128);
      if ( !v80 )
      {
LABEL_52:
        if ( (*(_DWORD *)(a2 + 120) & 0x180) == 0 )
        {
          v33 = ndisCheckNetworkInterfaceDataMismatch(
                  (struct _NDIS_MINIPORT_BLOCK *)a2,
                  *(struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)(a2 + 2728));
          Status = NdisConvertNtStatusToNdisStatus(v33);
          if ( Status )
            goto LABEL_137;
        }
        Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
        if ( Status )
          goto LABEL_137;
        ndisMNotifyMachineName(a2);
        v34 = *(_DWORD *)(a2 + 124);
        if ( (v34 & 0x8001) != 0 || (v35 = *(_DWORD *)(a2 + 124), (*(_BYTE *)(*(_QWORD *)(a2 + 3792) + 26LL) & 1) != 0) )
        {
          v35 = *(_DWORD *)(a2 + 124);
          if ( *(_DWORD *)(a2 + 464) < 0x14u )
          {
            if ( v113 )
              v35 = v34 & 0xFFFFFFFE;
            else
              v35 = v34 | 1;
            *(_DWORD *)(a2 + 124) = v35;
          }
        }
        if ( ((v35 & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2700) & 0x200) != 0)
          && (unsigned int)(*(_DWORD *)(a2 + 1040) - 2) <= 2
          && (*(_DWORD *)(a2 + 3944) & 0xC) == 0 )
        {
          DisableMagicPacketKeyword((_DWORD *)a2);
        }
        NdisInitializeTimer((PNDIS_TIMER)(a2 + 1392), (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, (PVOID)a2);
        KeInitializeEvent((PRKEVENT)(a2 + 1304), NotificationEvent, 1u);
        if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2700) & 0x200) != 0)
          && ndisEnforceDisconnectedStandby )
        {
          *(_DWORD *)(a2 + 3896) |= 0x10u;
        }
        ndisUpdatePMCurrentCapabilities(a2);
        if ( (*(_DWORD *)(a2 + 124) & 1) == 0
          || (v36 = ndisCheckMiniportWakeUpCapable(a2), v37 = *(_DWORD *)(a2 + 3896), (v37 & 8) != 0) )
        {
LABEL_84:
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
          *(_DWORD *)(a2 + 1864) = 722118;
          if ( *(_DWORD *)(a2 + 480) == 2 )
            ndisSetMediaDisconnectTimer(a2);
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v45);
          *(_QWORD *)(a2 + 4520) = a2;
          *(_QWORD *)(a2 + 4528) = ndisSignalD0CompleteWorkItem;
          *(_QWORD *)(a2 + 5448) = ndisDevicePowerOn;
          *(_QWORD *)(a2 + 5456) = a2 + 5432;
          *(_QWORD *)(a2 + 5432) = 0LL;
          *(_QWORD *)(a2 + 5488) = ndisDevicePowerDown;
          *(_QWORD *)(a2 + 5496) = a2 + 5472;
          *(_QWORD *)(a2 + 5472) = 0LL;
          if ( (*(_BYTE *)(a2 + 1064) & 6) != 0 )
            ndisSelectiveSuspendInitialize((_QWORD *)a2);
          if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2700) & 0x200) != 0 )
          {
            ndisAoAcInitialize((_QWORD *)a2);
            ndisReadModernStandyWoLMagicPacketKeywords((_DWORD *)a2);
            ndisMRegisterPDCTaskClient(a2);
            ndisMInitializePDCTaskClient((char *)a2);
          }
          if ( *(_DWORD *)(a2 + 464) )
          {
            if ( nullCreateFilter(v127) )
              goto LABEL_93;
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
              WPP_SF_q(0x1Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
            v105 = 30;
            v99 = 1;
            if ( (byte_1C00A2082 & 0x10) != 0 )
              McTemplateK0jqxqd(
                (__int64)&NDIS_PROVIDER_ID_Context,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4040),
                a2 + 4040,
                *(_DWORD *)(a2 + 4088),
                *(_QWORD *)(a2 + 4056),
                6,
                30);
          }
          else
          {
            if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2728) + 88LL), *(_QWORD *)(a2 + 2728) + 126LL, v127) )
            {
LABEL_93:
              *(_QWORD *)(v127[0] + 296LL) = a2;
              goto LABEL_94;
            }
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
              WPP_SF_q(0x1Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
            v105 = 9;
            v99 = 1;
            if ( (byte_1C00A2082 & 0x10) != 0 )
              McTemplateK0jqxqd(
                (__int64)&NDIS_PROVIDER_ID_Context,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4040),
                a2 + 4040,
                *(_DWORD *)(a2 + 4088),
                *(_QWORD *)(a2 + 4056),
                4,
                9);
          }
LABEL_94:
          if ( *(_DWORD *)(a2 + 1836) == 16 && v101 >= 6u )
          {
            v81 = a2 + 600;
            if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                WPP_SF_q(0x20u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
              *(_QWORD *)v81 = 0LL;
              v105 = 30;
              v99 = 1;
              if ( (byte_1C00A2082 & 0x10) == 0 )
                goto LABEL_223;
              McTemplateK0jqxqd(
                (__int64)&NDIS_PROVIDER_ID_Context,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4040),
                a2 + 4040,
                *(_DWORD *)(a2 + 4088),
                *(_QWORD *)(a2 + 4056),
                7,
                30);
LABEL_137:
              v49 = 0;
              if ( !v105 )
                goto LABEL_138;
              goto LABEL_224;
            }
            *(_QWORD *)(*(_QWORD *)v81 + 296LL) = a2;
          }
          if ( !*(_DWORD *)(a2 + 464) )
            *(_BYTE *)(a2 + 2006) = 1;
          if ( (*(_DWORD *)(a2 + 120) & 0x180) == 0 )
          {
            v46 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3856), 1u);
            v47 = v46;
            if ( v46 < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                WPP_SF_qD(0x21u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v46);
              if ( (byte_1C00A2082 & 0x10) != 0 )
                McTemplateK0jqxqd(
                  (__int64)&NDIS_PROVIDER_ID_Context,
                  &InitializeAdapterFailed,
                  (const GUID *)(a2 + 4040),
                  a2 + 4040,
                  *(_DWORD *)(a2 + 4088),
                  *(_QWORD *)(a2 + 4056),
                  8,
                  v47);
              v105 = 31;
              v99 = 1;
              goto LABEL_273;
            }
            v107 = 1;
          }
          if ( !v99 )
          {
            v21 = (*(_DWORD *)(a2 + 120) & 0x100) == 0;
            v105 = 1;
            if ( v21 )
            {
              v48 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(a2 + 3864),
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)(a2 + 3824),
                      (PUNICODE_STRING)(a2 + 360));
              v49 = 0;
              v50 = v48;
              if ( v48 < 0 )
              {
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                  WPP_SF_qD(0x23u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v48);
                if ( (byte_1C00A2082 & 0x10) != 0 )
                  McTemplateK0jqxqd(
                    (__int64)&NDIS_PROVIDER_ID_Context,
                    &InitializeAdapterFailed,
                    (const GUID *)(a2 + 4040),
                    a2 + 4040,
                    *(_DWORD *)(a2 + 4088),
                    *(_QWORD *)(a2 + 4056),
                    10,
                    v50);
                v105 = 35;
                goto LABEL_224;
              }
              v51 = *(_QWORD *)(a2 + 4648);
              v102 = 1;
              if ( v51 && (*(_BYTE *)(v51 + 8) & 3) == 3 )
              {
                v82 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(a2 + 3864),
                        &v138,
                        0LL,
                        (PUNICODE_STRING)(a2 + 4864));
                v83 = v82;
                if ( Status < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_qD(0x24u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v82);
                  if ( (byte_1C00A2082 & 0x10) != 0 )
                    McTemplateK0jqxqd(
                      (__int64)&NDIS_PROVIDER_ID_Context,
                      &InitializeAdapterFailed,
                      (const GUID *)(a2 + 4040),
                      a2 + 4040,
                      *(_DWORD *)(a2 + 4088),
                      *(_QWORD *)(a2 + 4056),
                      0,
                      v83);
                  v105 = 34;
                  v99 = 1;
                  goto LABEL_224;
                }
                v108 = 1;
              }
              *(_DWORD *)(*(_QWORD *)(a2 + 3856) + 48LL) &= ~0x80u;
            }
            v10 = *(_QWORD *)(a2 + 2728);
            if ( v10 )
            {
              v52 = *(_QWORD *)(a2 + 4072);
              if ( !v52 )
              {
                updated = -1073741823;
                goto LABEL_290;
              }
              updated = ndisIfUpdateInterfaceOnInitialize(a2, v52, v10);
            }
            else
            {
              updated = -1073741823;
            }
            if ( !updated )
            {
              v21 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
              v106 = 1;
              if ( !v21 )
              {
                v54 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
                *(_QWORD *)(a2 + 4608) = v54;
                if ( v54 )
                  memset(v54, 0, 0x20uLL);
              }
              if ( !*(_QWORD *)(a2 + 1776) )
              {
                memset(v130, 0, sizeof(v130));
                v130[1] = a2;
                OidList = ndisQueryOidList((__int64)v130);
                v56 = OidList;
                if ( OidList )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_qD(0x26u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, OidList);
                  if ( (byte_1C00A2082 & 0x10) != 0 )
                    McTemplateK0jqxqd(
                      (__int64)&NDIS_PROVIDER_ID_Context,
                      &InitializeAdapterFailed,
                      (const GUID *)(a2 + 4040),
                      a2 + 4040,
                      *(_DWORD *)(a2 + 4088),
                      *(_QWORD *)(a2 + 4056),
                      12,
                      v56);
                }
              }
              v57 = *(_BYTE **)(a2 + 4128);
              if ( v57 )
              {
                if ( *v57 == 1 )
                {
                  v57[1] = 1;
                  v58 = *(_QWORD *)(a2 + 4128);
                  *(_OWORD *)(v58 + 196) = *(_OWORD *)(v58 + 8);
                  *(_OWORD *)(v58 + 212) = *(_OWORD *)(v58 + 24);
                  *(_OWORD *)(v58 + 228) = *(_OWORD *)(v58 + 40);
                  *(_OWORD *)(v58 + 244) = *(_OWORD *)(v58 + 56);
                  *(_OWORD *)(v58 + 260) = *(_OWORD *)(v58 + 72);
                  *(_OWORD *)(v58 + 276) = *(_OWORD *)(v58 + 88);
                  *(_OWORD *)(v58 + 292) = *(_OWORD *)(v58 + 104);
                  *(_OWORD *)(v58 + 308) = *(_OWORD *)(v58 + 120);
                  *(_OWORD *)(v58 + 324) = *(_OWORD *)(v58 + 136);
                  *(_OWORD *)(v58 + 340) = *(_OWORD *)(v58 + 152);
                  *(_OWORD *)(v58 + 356) = *(_OWORD *)(v58 + 168);
                  *(_QWORD *)(v58 + 372) = *(_QWORD *)(v58 + 184);
                  *(_DWORD *)(v58 + 380) = *(_DWORD *)(v58 + 192);
                  ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4128) + 196LL);
                  v57 = *(_BYTE **)(a2 + 4128);
                }
                if ( v57[2] == 1 )
                {
                  v57[3] = 1;
                  v84 = *(_QWORD *)(a2 + 4128);
                  *(_OWORD *)(v84 + 872) = *(_OWORD *)(v84 + 892);
                  *(_DWORD *)(v84 + 888) = *(_DWORD *)(v84 + 908);
                }
              }
              if ( !ndisQueueMiniportOnDriver(a2, a1) )
                goto LABEL_137;
              v49 = 1;
              ndisSetDeviceInterfaceState(a2, 1u);
              if ( (int)Ndis::BindRegistry::Reload((struct _NDIS_MINIPORT_BLOCK *)a2, 0LL, v59) < 0 )
              {
                v105 = 39;
                v99 = 1;
                goto LABEL_224;
              }
              ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5144));
              if ( Ndis::BindState::SetBinding(
                     (Ndis::BindState *)(a2 + 5072),
                     BindingDisabled,
                     Reason_MiniportDeviceNotStarted)
                && (unsigned __int8)byte_1C00A026B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v132);
                if ( (unsigned __int8)byte_1C00A026B >= 4u )
                  WPP_SF_Zq(0x27u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (const wchar_t *)v132[1], v132[0]);
              }
              if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5072), DatapathRunning, PauseReason_InitialPause)
                && (unsigned __int8)byte_1C00A026B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v133);
                if ( (unsigned __int8)byte_1C00A026B >= 4u )
                  WPP_SF_Zq(0x28u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (const wchar_t *)v133[1], v133[0]);
              }
              if ( Ndis::BindState::SetPause(
                     (Ndis::BindState *)(a2 + 5072),
                     DatapathRunning,
                     PauseReason_RemovingMiniport)
                && (unsigned __int8)byte_1C00A026B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v134);
                if ( (unsigned __int8)byte_1C00A026B >= 4u )
                  WPP_SF_Zq(0x29u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (const wchar_t *)v134[1], v134[0]);
              }
              if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
                && Ndis::BindState::SetBinding(
                     (Ndis::BindState *)(a2 + 5072),
                     BindingDisabled,
                     Reason_DefaultPortNotActive)
                && (unsigned __int8)byte_1C00A026B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v135);
                if ( (unsigned __int8)byte_1C00A026B >= 4u )
                  WPP_SF_Zq(0x2Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (const wchar_t *)v135[1], v135[0]);
              }
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5144), v60);
              Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5144), RunSynchronous, 0);
              if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0 )
              {
                ndisSetupWmiNode(
                  a2,
                  *(const void ***)(a2 + 3888),
                  *(unsigned __int16 *)(a2 + 3840) + 2,
                  (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
                  &WnodeEventItem);
                if ( WnodeEventItem )
                {
                  v61 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                  *v61 = *(_WORD *)(a2 + 3840);
                  memmove(v61 + 1, *(const void **)(a2 + 3848), *(unsigned __int16 *)(a2 + 3840));
                  v62 = IoWMIWriteEvent(WnodeEventItem);
                  v63 = v62;
                  if ( v62 < 0 )
                  {
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                      WPP_SF_qD(0x2Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v62);
                    if ( (byte_1C00A2081 & 0x10) != 0 )
                      McTemplateK0qqq(
                        (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
                        &IoWMIWriteEventFailed,
                        (const GUID *)(a2 + 4040),
                        v63,
                        0x6C3u,
                        0);
                    ExFreePoolWithTag(WnodeEventItem, 0);
                  }
                }
                v116 = (_BYTE)ndisAcOnLine == 1;
                ndisNotifyMiniports(a2, 5LL, &v116, 4LL);
              }
              ndisMAdjustFilters(a2, v127);
              if ( v101 < 6u )
              {
                *(_QWORD *)(a2 + 624) = ndisMSendPackets;
                v85 = *(_DWORD *)(a2 + 120);
                if ( (v85 & 0x40000) != 0 )
                {
                  v86 = ndisMSendPacketsXToMiniport;
                }
                else
                {
                  if ( (v85 & 0x40) != 0 )
                  {
                    *(_QWORD *)(a2 + 2048) = ndisMSendPacketsSGToMiniport;
                    *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
                    v87 = ndisMDeferredSendPacketsSG;
                    if ( !*(_QWORD *)(a1 + 232) )
                      v87 = ndisMDeferredSendSG;
                    *(_QWORD *)(a2 + 632) = v87;
                    goto LABEL_131;
                  }
                  v86 = ndisMSendPacketsToMiniport;
                }
                *(_QWORD *)(a2 + 2048) = v86;
                *(_QWORD *)(a2 + 2040) = v86;
              }
              else
              {
                *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
                *(_QWORD *)(a2 + 2048) = ndisMSendPacketsToNetBufferLists;
              }
LABEL_131:
              v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
              *(_DWORD *)(a2 + 1864) = 722686;
              ndisMSetIndicatePacketHandler(a2);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1864) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v64);
              if ( ndisEnforceDisconnectedStandby )
              {
                if ( (v88 = *(_DWORD *)(a2 + 124), (v88 & 0x200000) != 0) && ndisAoAcCapable
                  || (*(_DWORD *)(a2 + 2700) & 0x200) != 0 )
                {
                  v89 = *(_DWORD *)(a2 + 3896);
                  if ( (v89 & 0x10) == 0 )
                  {
                    *(_DWORD *)(a2 + 124) = v88 & 0xFFFFFFBF;
                    *(_DWORD *)(a2 + 3896) = v89 | 0x10;
                    ndisUpdateAndIndicatePMCapabilities(a2);
                  }
                }
              }
              if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2700) & 0x200) != 0)
                && *(_DWORD *)(a2 + 1832) == 14 )
              {
                v21 = *(_BYTE *)(a2 + 1001) == 2;
                v118 = 0LL;
                InputBuffer = *(_QWORD *)(a2 + 3864);
                LODWORD(v118) = 4;
                BYTE4(v118) = 1;
                if ( !v21
                  || (*(_DWORD *)(a2 + 1008) & 1) == 0
                  || *(_DWORD *)(a2 + 1012) < 0x10u
                  || *(_DWORD *)(a2 + 1016) < 0x4Au
                  || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
                  || (*(_DWORD *)(a2 + 1052) & 1) == 0
                  || (v90 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v118) = 1, (_BYTE)v90 != 3) )
                {
                  BYTE5(v118) = 0;
                }
                ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
              }
              ndisPktMonMiniportRegister(a2);
              v65 = 0;
              v105 = 0;
              v104 = 0;
              v103 = 0;
              goto LABEL_136;
            }
LABEL_290:
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
              WPP_SF_qD(0x25u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, updated);
            if ( (byte_1C00A2082 & 0x10) != 0 )
              McTemplateK0jqxqd(
                (__int64)&NDIS_PROVIDER_ID_Context,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4040),
                a2 + 4040,
                *(_DWORD *)(a2 + 4088),
                *(_QWORD *)(a2 + 4056),
                11,
                updated);
            v105 = 32;
            v99 = 1;
            goto LABEL_223;
          }
LABEL_273:
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
            WPP_SF_qD(0x22u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v99);
          Arg1[0] = v105;
          NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)Arg1);
          goto LABEL_137;
        }
        v38 = 0;
        v39 = *(_DWORD *)(a2 + 124) | 0x20;
        v40 = *(_DWORD *)(a2 + 1108) - 2;
        *(_DWORD *)(a2 + 124) = v39;
        if ( v40 <= 2 )
        {
          *(_DWORD *)(a2 + 1132) |= 1u;
          v38 = 1;
        }
        if ( (v37 & 0x10) == 0 && v36 )
        {
          v41 = *(_DWORD *)(a2 + 1104);
          if ( v41 == 4 || (unsigned int)(v41 - 2) <= 1 )
          {
            v39 |= 0x40u;
            *(_DWORD *)(a2 + 124) = v39;
          }
          if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
          {
            *(_DWORD *)(a2 + 1124) |= 2u;
            v42 = *(_BYTE *)(a2 + 32);
            v38 = 1;
            *(_DWORD *)(a2 + 124) = v39 | 0x40;
            if ( v42 <= 6u && (v42 != 6 || *(_BYTE *)(a2 + 33) < 0x14u) )
              goto LABEL_79;
            v43 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2);
            Status = v43;
            if ( !v43 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
              goto LABEL_79;
            WPP_SF_qD(0x1Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v43);
          }
        }
        if ( !v38 )
        {
LABEL_80:
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
          {
            v44 = *(_DWORD *)(a2 + 124);
            if ( (v44 & 0x40) != 0 )
            {
              if ( !*(_QWORD *)(a2 + 1296) )
              {
                *(_DWORD *)(a2 + 124) = v44 & 0xFFFFFBFF;
                Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
              }
            }
            else
            {
              ndisCancelWaitWake(a2);
            }
          }
          goto LABEL_84;
        }
LABEL_79:
        ndisMiniportPMParametersUpdated(a2);
        goto LABEL_80;
      }
      v32 = ndisMSetOffloadAttributes(a2, v80 + 384, (_WORD *)(v80 + 384), 0LL, 0LL);
    }
    else
    {
      v31 = v113;
      if ( *(_BYTE *)(a2 + 929) )
        v31 = 0;
      v113 = v31;
      v32 = 0;
    }
    Status = v32;
    if ( v32 )
      goto LABEL_137;
    goto LABEL_52;
  }
  if ( v26 <= 4u )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
    goto LABEL_44;
LABEL_222:
  v105 = 32;
  v99 = 1;
LABEL_223:
  v49 = v100;
LABEL_224:
  Ndis::BindRegistry::Reload((struct _NDIS_MINIPORT_BLOCK *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v10);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
LABEL_138:
  if ( v106 )
  {
    *(_QWORD *)(a2 + 4096) = 2LL;
    v93 = *(_QWORD *)(a2 + 4072);
    if ( *(_DWORD *)(v93 + 1112) != 2 )
    {
      *(_DWORD *)(v93 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4072) + 1116LL) = *(_DWORD *)(a2 + 4100);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    v94 = *(void **)(a2 + 4608);
    if ( v94 )
    {
      ExFreePoolWithTag(v94, 0);
      *(_QWORD *)(a2 + 4608) = 0LL;
    }
  }
  if ( v107 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3856), 2u);
  if ( v102 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4184), 0);
  if ( v108 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4864), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4864));
    *(_QWORD *)(a2 + 4872) = 0LL;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
    LOBYTE(v114) = -(char)v114;
    v102 = -v102;
    ndisMCommonHaltMiniport(a2);
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v112 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
    {
      v95 = *(void **)(a2 + 504);
      if ( v95 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        {
          WPP_SF_q(0x2Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
          v95 = *(void **)(a2 + 504);
        }
        ndisDereferenceDmaAdapter(v95);
      }
    }
    v96 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v97 = v96;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1864) = 722929;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v97);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_148;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v96);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
LABEL_148:
  if ( v49 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x2Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
    ndisDeQueueMiniportOnDriver(a2, a1);
  }
  if ( v103 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v109 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v104 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x2Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
    ndisDereferenceDriver(a1, 0, 2u);
  }
  v66 = *(void **)(a2 + 2728);
  if ( v66 )
  {
    if ( v101 >= 6u )
      ExFreePoolWithTag(v66, 0);
    *(_QWORD *)(a2 + 2728) = 0LL;
  }
  if ( v110 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3320), 0x527374uLL);
    *(_QWORD *)(a2 + 3320) = 0LL;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x2Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v105);
  return v105;
}
