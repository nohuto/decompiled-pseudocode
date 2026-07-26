/*
 * XREFs of ndisMInitializeAdapter @ 0x1C012D618
 * Callers:
 *     ndisInitializeAdapter @ 0x1C002CA48 (ndisInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026080 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C00261A0 (ndisAllocatePerProcessorSlot.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     NdisWriteConfiguration @ 0x1C002A780 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8E0 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C002CE3C (ndisMSetIndicatePacketHandler.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C002E604 (ndisGetPciDeviceCustomProperties.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C002ECC4 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisMSetOffloadAttributes @ 0x1C00312F0 (ndisMSetOffloadAttributes.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisRequestWaitWake @ 0x1C0032E8C (ndisRequestWaitWake.c)
 *     ndisQueryPowerCapabilities @ 0x1C0032FA4 (ndisQueryPowerCapabilities.c)
 *     ndisQueryOidList @ 0x1C00339D4 (ndisQueryOidList.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C003484C (ndisCheckMiniportWakeUpCapable.c)
 *     ndisAddWoLMagicPacket @ 0x1C00349A8 (ndisAddWoLMagicPacket.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0039830 (ndisMergeOffloadCapsAndRegistry.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C003C7CC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C003D594 (ndisCreateNdisSupportedOidList.c)
 *     EthCreateFilter @ 0x1C003DE04 (EthCreateFilter.c)
 *     ndisFreePerProcessorSlot @ 0x1C003E2F0 (ndisFreePerProcessorSlot.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EC0C (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C003F55C (ndisMRegisterBugCheckHandler.c)
 *     ndisReferenceDriver @ 0x1C003F604 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     DisableMagicPacketKeyword @ 0x1C0072058 (DisableMagicPacketKeyword.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0077328 (ndisUpdateAndIndicatePMCapabilities.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 *     ndisDereferenceMiniportRef @ 0x1C0094CC4 (ndisDereferenceMiniportRef.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00962E8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0097B8C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009F8A4 (ndisMDeregisterBugCheckHandler.c)
 *     nullCreateFilter @ 0x1C00A3714 (nullCreateFilter.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1844 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovTeardownVf @ 0x1C00B1D6C (ndisIovTeardownVf.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0107050 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMInitializeInitMode @ 0x1C0108510 (ndisMInitializeInitMode.c)
 *     ndisMInvokeInitialize @ 0x1C0108640 (ndisMInvokeInitialize.c)
 *     ndisMNotifyMachineName @ 0x1C0108884 (ndisMNotifyMachineName.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 *     ndisMStartInitMode @ 0x1C010B520 (ndisMStartInitMode.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01171B4 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C01189FC (ndisQueryReenumerateSelfInterface.c)
 *     ndisMInitializePDCTaskClient @ 0x1C01194EC (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C011952C (ndisMRegisterPDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C011BF18 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C43C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 *     ndisMAdjustFilters @ 0x1C012E614 (ndisMAdjustFilters.c)
 *     ndisQueueMiniportOnDriver @ 0x1C012FD5C (ndisQueueMiniportOnDriver.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  char v8; // r13
  char v9; // r12
  const struct _GUID *v10; // rdx
  _UNKNOWN **v11; // rdx
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int PciDeviceCustomProperties; // esi
  bool v15; // cf
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 PerProcessorSlot; // rax
  unsigned int v19; // r8d
  unsigned int i; // edx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  bool v24; // zf
  ULONG_PTR v25; // rax
  int v26; // eax
  int v27; // edx
  int v28; // ebx
  __int64 *v29; // rdx
  unsigned __int8 v30; // bl
  unsigned int v31; // edx
  KIRQL v32; // bl
  __int64 v33; // rdx
  char v34; // al
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // r8d
  unsigned int v40; // edx
  char v41; // al
  int v42; // r8d
  int v43; // edx
  unsigned int v44; // ecx
  int v45; // ecx
  unsigned __int8 v46; // al
  int v47; // eax
  int v48; // edx
  int v49; // eax
  KIRQL v50; // bl
  struct _NDIS_IF_BLOCK *v51; // rdx
  NTSTATUS v52; // eax
  char v53; // bl
  NTSTATUS v54; // eax
  char v55; // bl
  __int64 v56; // rax
  int updated; // ebx
  PVOID v58; // rax
  int OidList; // eax
  int v60; // edx
  char v61; // bl
  _BYTE *v62; // rax
  _OWORD *v63; // rax
  _OWORD *v64; // rcx
  __int128 v65; // xmm1
  __int64 v66; // r15
  enum Ndis::ReadBindingsOptions::Flags v67; // r8d
  struct _NDIS_MINIPORT_BLOCK *v68; // rdx
  _WORD *v69; // rcx
  int v70; // edx
  NTSTATUS v71; // ebx
  KIRQL v72; // al
  KIRQL v73; // bl
  char v74; // si
  __int64 v75; // rbx
  void *v76; // rcx
  int v78; // eax
  unsigned int v79; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v81; // rcx
  unsigned __int8 v82; // dl
  __int64 v83; // rax
  int ReenumerateSelfInterface; // eax
  int v85; // edx
  __int64 v86; // rax
  unsigned int v87; // ebx
  _UNKNOWN **v88; // rdx
  NDIS_STATUS v89; // eax
  int v90; // edx
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  ULONG_PTR v95; // rbx
  char v96; // al
  char v97; // bl
  __int64 v98; // rcx
  int v99; // edx
  int v100; // edx
  int v101; // eax
  void (__fastcall *v102)(struct _NDIS_MINIPORT_BLOCK *, _NDIS_PACKET **, unsigned int); // rax
  char (__fastcall *v103)(struct _NDIS_MINIPORT_BLOCK *); // rax
  int v104; // ecx
  int v105; // eax
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // r9
  __int64 v109; // rax
  void *v110; // rcx
  void *v111; // rcx
  KIRQL v112; // al
  KIRQL v113; // si
  unsigned int Arg1[2]; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v115; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v116; // [rsp+41h] [rbp-BFh]
  bool v117; // [rsp+42h] [rbp-BEh]
  char v118; // [rsp+43h] [rbp-BDh]
  char v119[4]; // [rsp+44h] [rbp-BCh] BYREF
  char v120; // [rsp+48h] [rbp-B8h]
  char v121; // [rsp+49h] [rbp-B7h]
  char v122; // [rsp+4Ah] [rbp-B6h]
  char v123; // [rsp+4Bh] [rbp-B5h]
  char v124; // [rsp+4Ch] [rbp-B4h]
  char v125; // [rsp+4Dh] [rbp-B3h]
  int Status; // [rsp+50h] [rbp-B0h] BYREF
  char v127; // [rsp+54h] [rbp-ACh]
  char v128[8]; // [rsp+58h] [rbp-A8h]
  int v129; // [rsp+60h] [rbp-A0h] BYREF
  int v130; // [rsp+64h] [rbp-9Ch]
  unsigned int v131; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  BOOL v133; // [rsp+80h] [rbp-80h] BYREF
  PVOID ConfigurationHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID WnodeEventItem; // [rsp+90h] [rbp-70h] BYREF
  __int64 InputBuffer; // [rsp+98h] [rbp-68h] BYREF
  int v137; // [rsp+A0h] [rbp-60h]
  char v138; // [rsp+A4h] [rbp-5Ch]
  char v139; // [rsp+A5h] [rbp-5Bh]
  __int16 v140; // [rsp+A6h] [rbp-5Ah]
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp-58h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING Keyword; // [rsp+C8h] [rbp-38h] BYREF
  char v144[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v146[8]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v147[4]; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v149[2]; // [rsp+178h] [rbp+78h] BYREF
  __int128 v150; // [rsp+188h] [rbp+88h]
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v151; // [rsp+1A0h] [rbp+A0h] BYREF
  char v152[160]; // [rsp+280h] [rbp+180h] BYREF
  char v153[160]; // [rsp+320h] [rbp+220h] BYREF
  char v154[160]; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v155[160]; // [rsp+460h] [rbp+360h] BYREF
  _DWORD v156[6]; // [rsp+500h] [rbp+400h] BYREF
  GUID InterfaceClassGuid; // [rsp+518h] [rbp+418h] BYREF
  GUID v158; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v159[72]; // [rsp+538h] [rbp+438h] BYREF
  char v160; // [rsp+580h] [rbp+480h] BYREF

  *(_QWORD *)v128 = a1;
  v7 = a1;
  memset(v146, 0, sizeof(v146));
  memset(v147, 0, sizeof(v147));
  v131 = 0;
  *(_DWORD *)v119 = 1;
  v129 = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = 0;
  DestinationString.Buffer = 0LL;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v118 = 0;
  v9 = 0;
  v124 = 0;
  v115 = 0;
  v122 = 0;
  v121 = 0;
  v127 = 0;
  v125 = 0;
  v120 = 0;
  v117 = 0;
  LOBYTE(v130) = 0;
  memset(v159, 0, 0x3CuLL);
  memset(&v151, 0, sizeof(v151));
  v123 = 0;
  v158 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v10 = &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)v10,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a2,
      *(unsigned __int16 **)(a2 + 3856));
  }
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v116 = *(_BYTE *)(v7 + 24);
  if ( !ndisReferenceDriver(v7, 2u) )
    goto LABEL_136;
  v118 = 1;
  DestinationString.Buffer = (wchar_t *)&v160;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3792)) < 0 )
    goto LABEL_136;
  v13 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4200));
  LOBYTE(PciDeviceCustomProperties) = v13;
  v117 = v13 >= 0 || v13 == -1073741771;
  v15 = v116 < 6u;
  *(_QWORD *)(a2 + 1976) = a5;
  *(_QWORD *)(a2 + 432) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 1896) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 2136) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 2144) = ndisMDispatchReceiveNetBufferLists;
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
  *(_QWORD *)(a2 + 728) = NdisDirectOidRequest;
  *(_QWORD *)(a2 + 736) = NdisMWanIndicateReceive;
  *(_QWORD *)(a2 + 744) = NdisMWanIndicateReceiveComplete;
  *(_QWORD *)(a2 + 2400) = 48LL;
  *(_QWORD *)(a2 + 2584) = 48LL;
  *(_BYTE *)(a2 + 2665) = 1;
  *(_QWORD *)(a2 + 2432) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2392) = a2;
  *(_QWORD *)(a2 + 2408) = a2;
  *(_QWORD *)(a2 + 2616) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2576) = a2;
  *(_QWORD *)(a2 + 2592) = a2;
  *(_QWORD *)(a2 + 2416) = a2;
  *(_QWORD *)(a2 + 2472) = a2;
  *(_QWORD *)(a2 + 2600) = a2;
  *(_QWORD *)(a2 + 2656) = a2;
  *(_QWORD *)(a2 + 4576) = MEMORY[0xFFFFF78000000014];
  if ( v15 )
  {
    v79 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3152) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_179:
      Status = -1073741670;
      goto LABEL_136;
    }
    memset(PoolWithTag, 0, v79);
    v81 = *(_QWORD **)(a2 + 3760);
    v82 = v116;
    v7 = *(_QWORD *)v128;
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v81[16];
    *(_QWORD *)(a2 + 616) = v81[17];
    *(_QWORD *)(a2 + 2456) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2352) = 64LL;
    *(_QWORD *)(a2 + 2344) = a2;
    *(_QWORD *)(a2 + 2360) = a2;
    *(_QWORD *)(a2 + 4072) = v81[25];
    if ( v82 >= 4u )
    {
      if ( *(_QWORD *)(v7 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2176) = v81[28];
      *(_QWORD *)(a2 + 2160) = v81[28];
      *(_QWORD *)(a2 + 2184) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(v7 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v83 = *(_QWORD *)(v7 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v83;
      }
      if ( v82 >= 5u )
      {
        *(_DWORD *)(a2 + 1872) |= 0x200u;
        if ( v82 == 5 )
        {
          if ( *(_QWORD *)(v7 + 280) )
          {
            *(_DWORD *)(a2 + 120) |= 0x20000u;
            *(_QWORD *)(v7 + 552) = ndisMCoOidRequestToRequest;
            *(_QWORD *)(a2 + 2232) = a2;
          }
        }
      }
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 3760);
    *(_BYTE *)(a2 + 1994) = 1;
    v17 = *(_QWORD *)(v16 + 192);
    *(_QWORD *)(a2 + 2344) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 2352) = *(_QWORD *)(a2 + 4080);
    *(_QWORD *)(a2 + 2176) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a2 + 2456) = v17;
    *(_QWORD *)(a2 + 2360) = a2;
    *(_QWORD *)(a2 + 2184) = a2;
    if ( *(_QWORD *)(v7 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v124 = 1;
  if ( !*(_DWORD *)(a2 + 3868) )
  {
    *(_DWORD *)(a2 + 3868) = 1;
    *(_DWORD *)(a2 + 3880) = 1;
  }
  ndisQueryPowerCapabilities(a2);
  ndisMInitializeInitMode((char *)a2);
  *(_QWORD *)(a2 + 4080) = NdisNblTrackerRegisterComponent(0, a2, *(_QWORD *)(a2 + 3856));
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  *(_QWORD *)(a2 + 3296) = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_179;
  v19 = ndisMaxNumberOfProcessors;
  v125 = 1;
  for ( i = 0; i < v19; *(_DWORD *)(v21 + *(_QWORD *)(a2 + 3296)) = 6 )
    v21 = i++ << 12;
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
  if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 124) |= 0x100000u;
    if ( !ndisDriverTrackAlloc
      || (v24 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v24) )
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
  *(_DWORD *)(a2 + 3688) |= 0x800u;
LABEL_20:
  v22 = ndisRssV2Initialize((char *)a2);
  Status = v22;
  if ( v22 )
  {
    v11 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        1,
        21,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a2,
        v22);
    }
    goto LABEL_136;
  }
  if ( *(_QWORD *)(v7 + 864) )
  {
    if ( !*(_QWORD *)(a2 + 4088) )
    {
      ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3840), (PVOID *)(a2 + 4088));
      LOBYTE(PciDeviceCustomProperties) = ReenumerateSelfInterface;
      if ( ReenumerateSelfInterface >= 0 )
      {
        v86 = *(_QWORD *)(a2 + 4088);
        *((_DWORD *)&ConfigObject.Header + 1) = 0;
        *(&ConfigObject.Flags + 1) = 0;
        ConfigurationHandle = 0LL;
        v87 = (*(_DWORD *)(v86 + 40) >> 1) & 1;
        v88 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v88) = 4;
          WPP_RECORDER_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v88,
            1,
            23,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            (*(_DWORD *)(v86 + 40) & 2) != 0,
            *(_DWORD *)(v86 + 40) & 1);
        }
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = (void *)a2;
        ConfigObject.Flags = 0;
        v89 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        Status = v89;
        if ( v89 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v90) = 3;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v90,
              1,
              24,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              v89);
          }
        }
        else
        {
          *(_QWORD *)&Keyword.Length = 1966108LL;
          *(_QWORD *)&ParameterValue.ParameterType = 0LL;
          Keyword.Buffer = L"PldrCapability";
          ParameterValue.ParameterData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData>)v87;
          NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
          if ( Status && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v91) = 3;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v91,
              1,
              25,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              Status);
          }
          NdisCloseConfiguration(ConfigurationHandle);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v85) = 3;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v85,
            1,
            22,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            a2,
            ReenumerateSelfInterface);
        }
        LOBYTE(PciDeviceCustomProperties) = 0;
      }
    }
    v7 = *(_QWORD *)v128;
  }
  v15 = v116 < 6u;
  *(_DWORD *)(a2 + 2248) = 2;
  v151.Header.Revision = 2;
  if ( v15 )
  {
    v28 = (*(__int64 (__fastcall **)(char *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(v7 + 160))(
            v144,
            &v131,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( *(_DWORD *)(a2 + 3720) == 5 )
      LOBYTE(PciDeviceCustomProperties) = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3336));
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates((struct _NDIS_MINIPORT_BLOCK *)a2);
    v156[1] = *(_DWORD *)(a2 + 3320);
    v156[2] = *(_DWORD *)(a2 + 3324);
    v156[3] = *(_DWORD *)(a2 + 3328);
    v156[4] = *(_DWORD *)(a2 + 3332);
    v23 = *(_QWORD *)(a2 + 944);
    v156[0] = 1311104;
    LODWORD(v146[0]) = 4194689;
    if ( v23 )
      v146[1] = v23 + 12;
    v24 = *(_DWORD *)(a2 + 3720) == 5;
    v146[2] = *(_QWORD *)(a2 + 1976);
    v146[3] = *(_QWORD *)(a2 + 4112);
    v146[6] = v156;
    v146[5] = *(_QWORD *)(a2 + 4024);
    LODWORD(v146[4]) = *(_DWORD *)(a2 + 4056);
    if ( v24 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3336));
      v25 = v146[7];
      if ( PciDeviceCustomProperties >= 0 )
        v25 = a2 + 3336;
      v146[7] = v25;
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x100) != 0 )
      v26 = ndisLWMInitializeHandler((struct _NDIS_MINIPORT_BLOCK *)a2);
    else
      v26 = ndisMInvokeInitialize(a2, (__int64)v146);
    v28 = v26;
    if ( *(_DWORD *)(a2 + 3720) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      13,
      26,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a2,
      v28);
  }
  if ( (byte_1C00E8042 & 8) != 0 )
    McTemplateK0jqxqd(
      (__int64)&NDIS_PROVIDER_ID_Context,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4008),
      a2 + 4008,
      *(_DWORD *)(a2 + 4056),
      *(_QWORD *)(a2 + 4024),
      1,
      v28);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v28 )
  {
    *(_DWORD *)(a2 + 2248) = 1;
    *(_QWORD *)(a2 + 4064) = 2LL;
    v107 = *(_QWORD *)(a2 + 4040);
    if ( v107 && *(_DWORD *)(v107 + 1112) != 2 )
    {
      *(_DWORD *)(v107 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4040) + 1116LL) = *(_DWORD *)(a2 + 4068);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4632) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    *(_DWORD *)v119 = v28;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_353;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v74 = v118;
LABEL_135:
        v9 = 0;
        v122 = 0;
        v121 = 0;
        v120 = 0;
        v123 = 0;
        v124 = v74;
        v127 = v74;
        v125 = v74;
        goto LABEL_136;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v108 = *(_QWORD *)(a2 + 3856);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v108, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v108, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_353:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3856),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v29 = (__int64 *)(a2 + 16);
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 124) & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName((UNICODE_STRING *)(*(_QWORD *)(a2 + 3768) + 8LL), v29, 1, 0x1Fu);
    v92 = *(_QWORD *)(a2 + 16);
    if ( v92 )
      ndisDereferenceMiniportRef(v92, 0x1Fu);
  }
  else
  {
    *v29 = a2;
  }
  v30 = v116;
  if ( v116 < 6u )
  {
    v93 = *(_QWORD *)(a2 + 112);
    if ( !v93 || *(_BYTE *)(v93 + 145) || *(_BYTE *)(v93 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2064) )
    {
      *(_QWORD *)(a2 + 2064) = *(_QWORD *)(*(_QWORD *)v128 + 312LL);
      *(_QWORD *)(a2 + 2056) = *(_QWORD *)(a2 + 24);
    }
    v31 = *((_DWORD *)ndisMediumArray + v131);
    v151.MediaType = v31;
    *(_DWORD *)(a2 + 464) = v31;
    *(_DWORD *)(a2 + 1836) = v31;
  }
  else
  {
    v31 = *(_DWORD *)(a2 + 464);
  }
  *(_DWORD *)(a2 + 2248) = 6;
  if ( v31 <= 0xD )
  {
    v78 = 8390;
    if ( _bittest(&v78, v31) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v31,
          13,
          27,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          a2);
      }
      if ( (byte_1C00E8043 & 0x10) != 0 )
        McTemplateK0jqxq(
          (__int64)&NDIS_PROVIDER_ID_Context,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4008),
          a2 + 4008,
          *(_DWORD *)(a2 + 4056),
          *(_QWORD *)(a2 + 4024),
          *(_DWORD *)(a2 + 464));
      goto LABEL_221;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) != 3 )
  {
LABEL_44:
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    v34 = ndisSetWakeUpTimer(a2, v33);
    v35 = (unsigned __int8)v130;
    *(_QWORD *)(a2 + 520) = 0LL;
    if ( v34 )
      v35 = 1;
    v130 = v35;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v32);
    ndisMStartInitMode(a2);
    Status = ndisCreateNdisSupportedOidList(a2);
    if ( Status )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          1,
          28,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          a2,
          PciDeviceCustomProperties);
      }
      if ( (byte_1C00E8042 & 0x10) != 0 )
        McTemplateK0jqxqd(
          (__int64)&NDIS_PROVIDER_ID_Context,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4008),
          a2 + 4008,
          *(_DWORD *)(a2 + 4056),
          *(_QWORD *)(a2 + 4024),
          2,
          PciDeviceCustomProperties);
      *(_DWORD *)v119 = 36;
      goto LABEL_222;
    }
    if ( v116 < 6u )
    {
      v151.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v159;
      *(_QWORD *)(a2 + 2712) = &v151;
      Status = ndisGetMiniportInfo((struct _NDIS_MINIPORT_BLOCK *)a2, &v151, (int *)v119, &v115, &v129);
      if ( Status )
        goto LABEL_136;
      Status = ndisMSetGeneralAttributes(
                 (struct _NDIS_MINIPORT_BLOCK *)a2,
                 *(struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)(a2 + 2712));
      if ( Status )
        goto LABEL_136;
      v94 = *(_QWORD *)(a2 + 4096);
      if ( !v94 )
      {
LABEL_52:
        if ( (*(_DWORD *)(a2 + 120) & 0x180) == 0 )
        {
          v38 = ndisCheckNetworkInterfaceDataMismatch(
                  (struct _NDIS_MINIPORT_BLOCK *)a2,
                  *(const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)(a2 + 2712));
          Status = NdisConvertNtStatusToNdisStatus(v38);
          if ( Status )
            goto LABEL_136;
        }
        Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
        if ( Status )
          goto LABEL_136;
        ndisMNotifyMachineName(a2);
        v39 = *(_DWORD *)(a2 + 124);
        if ( (v39 & 0x8001) != 0 || (v40 = *(_DWORD *)(a2 + 124), (*(_BYTE *)(*(_QWORD *)(a2 + 3760) + 26LL) & 1) != 0) )
        {
          v40 = *(_DWORD *)(a2 + 124);
          if ( *(_DWORD *)(a2 + 464) < 0x14u )
          {
            if ( v129 )
              v40 = v39 & 0xFFFFFFFE;
            else
              v40 = v39 | 1;
            *(_DWORD *)(a2 + 124) = v40;
          }
        }
        if ( ((v40 & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2684) & 0x200) != 0)
          && (unsigned int)(*(_DWORD *)(a2 + 1040) - 2) <= 2
          && (*(_DWORD *)(a2 + 3912) & 0xC) == 0 )
        {
          DisableMagicPacketKeyword((_DWORD *)a2);
        }
        NdisInitializeTimer((PNDIS_TIMER)(a2 + 1392), (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, (PVOID)a2);
        KeInitializeEvent((PRKEVENT)(a2 + 1304), NotificationEvent, 1u);
        if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2684) & 0x200) != 0)
          && ndisEnforceDisconnectedStandby )
        {
          *(_DWORD *)(a2 + 3864) |= 0x10u;
        }
        ndisUpdatePMCurrentCapabilities(a2);
        if ( (*(_DWORD *)(a2 + 124) & 1) != 0 )
        {
          v41 = ndisCheckMiniportWakeUpCapable(a2);
          v42 = *(_DWORD *)(a2 + 3864);
          if ( (v42 & 8) == 0 )
          {
            v43 = *(_DWORD *)(a2 + 124) | 0x20;
            v44 = *(_DWORD *)(a2 + 1108) - 2;
            *(_DWORD *)(a2 + 124) = v43;
            if ( v44 <= 2 )
              *(_DWORD *)(a2 + 1132) |= 1u;
            if ( (v42 & 0x10) == 0 && v41 )
            {
              v45 = *(_DWORD *)(a2 + 1104);
              if ( v45 == 4 || (unsigned int)(v45 - 2) <= 1 )
              {
                v43 |= 0x40u;
                *(_DWORD *)(a2 + 124) = v43;
              }
              if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
              {
                *(_DWORD *)(a2 + 1124) |= 2u;
                v46 = *(_BYTE *)(a2 + 32);
                *(_DWORD *)(a2 + 124) = v43 | 0x40;
                if ( v46 > 6u || v46 == 6 && *(_BYTE *)(a2 + 33) >= 0x14u )
                {
                  v47 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2);
                  Status = v47;
                  if ( v47 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v48) = 2;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v48,
                        1,
                        29,
                        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                        a2,
                        v47);
                    }
                  }
                }
              }
            }
            if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
            {
              v49 = *(_DWORD *)(a2 + 124);
              if ( (v49 & 0x40) != 0 )
              {
                if ( !*(_QWORD *)(a2 + 1296) )
                {
                  *(_DWORD *)(a2 + 124) = v49 & 0xFFFFFBFF;
                  Status = ndisRequestWaitWake(a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                }
              }
              else
              {
                ndisCancelWaitWake(a2);
              }
            }
          }
        }
        v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        v24 = *(_DWORD *)(a2 + 480) == 2;
        *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        if ( v24 )
          ndisSetMediaDisconnectTimer(a2);
        *(_QWORD *)(a2 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v50);
        *(_QWORD *)(a2 + 4480) = a2;
        *(_QWORD *)(a2 + 4488) = ndisSignalD0CompleteWorkItem;
        *(_QWORD *)(a2 + 5384) = ndisDevicePowerOn;
        *(_QWORD *)(a2 + 5392) = a2 + 5368;
        *(_QWORD *)(a2 + 5368) = 0LL;
        *(_QWORD *)(a2 + 5424) = ndisDevicePowerDown;
        *(_QWORD *)(a2 + 5432) = a2 + 5408;
        *(_QWORD *)(a2 + 5408) = 0LL;
        if ( (*(_BYTE *)(a2 + 1064) & 6) != 0 )
          ndisSelectiveSuspendInitialize(a2);
        if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2684) & 0x200) != 0 )
        {
          ndisAoAcInitialize((struct _NDIS_MINIPORT_BLOCK *)a2);
          ndisReadModernStandyWoLMagicPacketKeywords((struct _NDIS_MINIPORT_BLOCK *)a2);
          ndisMRegisterPDCTaskClient(a2);
          ndisMInitializePDCTaskClient((char *)a2);
        }
        if ( *(_DWORD *)(a2 + 464) )
        {
          if ( nullCreateFilter(v147) )
            goto LABEL_92;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v51) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v51,
              1,
              31,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              a2);
          }
          *(_DWORD *)v119 = 30;
          v115 = 1;
          if ( (byte_1C00E8042 & 0x10) != 0 )
            McTemplateK0jqxqd(
              (__int64)&NDIS_PROVIDER_ID_Context,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4008),
              a2 + 4008,
              *(_DWORD *)(a2 + 4056),
              *(_QWORD *)(a2 + 4024),
              6,
              30);
        }
        else
        {
          if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2712) + 88LL), *(_QWORD *)(a2 + 2712) + 126LL, v147) )
          {
LABEL_92:
            *(_QWORD *)(v147[0] + 296LL) = a2;
            goto LABEL_93;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v51) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v51,
              1,
              30,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              a2);
          }
          *(_DWORD *)v119 = 9;
          v115 = 1;
          if ( (byte_1C00E8042 & 0x10) != 0 )
            McTemplateK0jqxqd(
              (__int64)&NDIS_PROVIDER_ID_Context,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4008),
              a2 + 4008,
              *(_DWORD *)(a2 + 4056),
              *(_QWORD *)(a2 + 4024),
              4,
              9);
        }
LABEL_93:
        if ( *(_DWORD *)(a2 + 1836) == 16 && v116 >= 6u )
        {
          v95 = a2 + 600;
          if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v51) = 3;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v51,
                1,
                32,
                (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                a2);
            }
            v115 = 1;
            *(_QWORD *)v95 = 0LL;
            *(_DWORD *)v119 = 30;
            if ( (byte_1C00E8042 & 0x10) == 0 )
              goto LABEL_222;
            McTemplateK0jqxqd(
              (__int64)&NDIS_PROVIDER_ID_Context,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4008),
              a2 + 4008,
              *(_DWORD *)(a2 + 4056),
              *(_QWORD *)(a2 + 4024),
              7,
              30);
LABEL_136:
            v8 = 0;
            if ( !*(_DWORD *)v119 )
              goto LABEL_137;
            goto LABEL_222;
          }
          *(_QWORD *)(*(_QWORD *)v95 + 296LL) = a2;
        }
        if ( !*(_DWORD *)(a2 + 464) )
          *(_BYTE *)(a2 + 1998) = 1;
        if ( (*(_DWORD *)(a2 + 120) & 0x180) == 0 )
        {
          v52 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3824), 1u);
          v53 = v52;
          if ( v52 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v51) = 3;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v51,
                1,
                33,
                (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                a2,
                v52);
            }
            if ( (byte_1C00E8042 & 0x10) != 0 )
              McTemplateK0jqxqd(
                (__int64)&NDIS_PROVIDER_ID_Context,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4008),
                a2 + 4008,
                *(_DWORD *)(a2 + 4056),
                *(_QWORD *)(a2 + 4024),
                8,
                v53);
            *(_DWORD *)v119 = 31;
            v115 = 1;
            goto LABEL_271;
          }
          v121 = 1;
        }
        if ( !v115 )
        {
          v24 = (*(_DWORD *)(a2 + 120) & 0x100) == 0;
          *(_DWORD *)v119 = 1;
          if ( v24 )
          {
            v54 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(a2 + 3832),
                    &InterfaceClassGuid,
                    (PUNICODE_STRING)(a2 + 3792),
                    (PUNICODE_STRING)(a2 + 360));
            v55 = v54;
            if ( v54 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v51) = 2;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v51,
                  1,
                  35,
                  (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                  a2,
                  v54);
              }
              if ( (byte_1C00E8042 & 0x10) != 0 )
                McTemplateK0jqxqd(
                  (__int64)&NDIS_PROVIDER_ID_Context,
                  &InitializeAdapterFailed,
                  (const GUID *)(a2 + 4008),
                  a2 + 4008,
                  *(_DWORD *)(a2 + 4056),
                  *(_QWORD *)(a2 + 4024),
                  10,
                  v55);
              *(_DWORD *)v119 = 35;
              goto LABEL_222;
            }
            v56 = *(_QWORD *)(a2 + 4608);
            v122 = 1;
            if ( v56 && (*(_BYTE *)(v56 + 8) & 3) == 3 )
            {
              v96 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3832), &v158, 0LL, (PUNICODE_STRING)(a2 + 4824));
              v97 = v96;
              if ( Status < 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v51) = 2;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v51,
                    1,
                    36,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    a2,
                    v96);
                }
                if ( (byte_1C00E8042 & 0x10) != 0 )
                  McTemplateK0jqxqd(
                    (__int64)&NDIS_PROVIDER_ID_Context,
                    &InitializeAdapterFailed,
                    (const GUID *)(a2 + 4008),
                    a2 + 4008,
                    *(_DWORD *)(a2 + 4056),
                    *(_QWORD *)(a2 + 4024),
                    0,
                    v97);
                *(_DWORD *)v119 = 34;
                v115 = 1;
                goto LABEL_222;
              }
              v123 = 1;
            }
            *(_DWORD *)(*(_QWORD *)(a2 + 3824) + 48LL) &= ~0x80u;
          }
          v12 = *(_QWORD *)(a2 + 2712);
          if ( v12 )
          {
            v51 = *(struct _NDIS_IF_BLOCK **)(a2 + 4040);
            if ( !v51 )
            {
              LOBYTE(updated) = 1;
              goto LABEL_288;
            }
            updated = ndisIfUpdateInterfaceOnInitialize((struct _NDIS_MINIPORT_BLOCK *)a2, v51, v12);
          }
          else
          {
            updated = -1073741823;
          }
          if ( !updated )
          {
            v24 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
            v120 = 1;
            if ( !v24 )
            {
              v58 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
              *(_QWORD *)(a2 + 4568) = v58;
              if ( v58 )
                memset(v58, 0, 0x20uLL);
            }
            if ( !*(_QWORD *)(a2 + 1776) )
            {
              v149[0] = 0LL;
              v149[1] = a2;
              v150 = 0LL;
              OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v149);
              v61 = OidList;
              if ( OidList )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v60) = 2;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v60,
                    1,
                    38,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    a2,
                    OidList);
                }
                if ( (byte_1C00E8042 & 0x10) != 0 )
                  McTemplateK0jqxqd(
                    (__int64)&NDIS_PROVIDER_ID_Context,
                    &InitializeAdapterFailed,
                    (const GUID *)(a2 + 4008),
                    a2 + 4008,
                    *(_DWORD *)(a2 + 4056),
                    *(_QWORD *)(a2 + 4024),
                    12,
                    v61);
              }
            }
            v62 = *(_BYTE **)(a2 + 4096);
            if ( v62 )
            {
              if ( *v62 == 1 )
              {
                v62[1] = 1;
                v63 = *(_OWORD **)(a2 + 4096);
                v64 = v63 + 14;
                v63 = (_OWORD *)((char *)v63 + 8);
                *v64 = *v63;
                v64[1] = v63[1];
                v64[2] = v63[2];
                v64[3] = v63[3];
                v64[4] = v63[4];
                v64[5] = v63[5];
                v64[6] = v63[6];
                v64 += 8;
                v65 = v63[7];
                v63 += 8;
                *(v64 - 1) = v65;
                *v64 = *v63;
                v64[1] = v63[1];
                v64[2] = v63[2];
                v64[3] = v63[3];
                v64[4] = v63[4];
                *((_QWORD *)v64 + 10) = *((_QWORD *)v63 + 10);
                ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4096) + 224LL);
                v62 = *(_BYTE **)(a2 + 4096);
              }
              if ( v62[2] == 1 )
              {
                v62[3] = 1;
                v98 = *(_QWORD *)(a2 + 4096);
                *(_OWORD *)(v98 + 984) = *(_OWORD *)(v98 + 1004);
                *(_DWORD *)(v98 + 1000) = *(_DWORD *)(v98 + 1020);
              }
            }
            v66 = *(_QWORD *)v128;
            if ( !(unsigned __int8)ndisQueueMiniportOnDriver(a2, v128[0]) )
              goto LABEL_136;
            v8 = 1;
            ndisSetDeviceInterfaceState(a2, 1u);
            if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v67) < 0 )
            {
              *(_DWORD *)v119 = 39;
              v115 = 1;
              goto LABEL_222;
            }
            ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5104));
            if ( Ndis::BindState::SetBinding(
                   (Ndis::BindState *)(a2 + 5032),
                   BindingDisabled,
                   Reason_MiniportDeviceNotStarted) )
            {
              memset(v152, 0, sizeof(v152));
              if ( (unsigned __int8)byte_1C00E673B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v152);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v99) = 4;
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v99,
                    0x1Cu,
                    0x27u,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    *(unsigned __int16 **)&v152[8],
                    *(_QWORD *)v152);
                }
              }
            }
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5032), DatapathRunning, PauseReason_InitialPause) )
            {
              memset(v153, 0, sizeof(v153));
              if ( (unsigned __int8)byte_1C00E673B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v153);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v100) = 4;
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v100,
                    0x1Cu,
                    0x28u,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    *(unsigned __int16 **)&v153[8],
                    *(_QWORD *)v153);
                }
              }
            }
            if ( Ndis::BindState::SetPause(
                   (Ndis::BindState *)(a2 + 5032),
                   DatapathRunning,
                   PauseReason_RemovingMiniport) )
            {
              memset(v154, 0, sizeof(v154));
              if ( (unsigned __int8)byte_1C00E673B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v154);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v68) = 4;
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v68,
                    0x1Cu,
                    0x29u,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    *(unsigned __int16 **)&v154[8],
                    *(_QWORD *)v154);
                }
              }
            }
            if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
              && Ndis::BindState::SetBinding(
                   (Ndis::BindState *)(a2 + 5032),
                   BindingDisabled,
                   Reason_DefaultPortNotActive) )
            {
              memset(v155, 0, sizeof(v155));
              if ( (unsigned __int8)byte_1C00E673B >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v155);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v68) = 4;
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v68,
                    0x1Cu,
                    0x2Au,
                    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                    *(unsigned __int16 **)&v155[8],
                    *(_QWORD *)v155);
                }
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5104), v68);
            Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5104), RunSynchronous, 0);
            if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0 )
            {
              ndisSetupWmiNode(
                a2,
                *(const void ***)(a2 + 3856),
                *(unsigned __int16 *)(a2 + 3808) + 2,
                (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
                &WnodeEventItem);
              if ( WnodeEventItem )
              {
                v69 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                *v69 = *(_WORD *)(a2 + 3808);
                memmove(v69 + 1, *(const void **)(a2 + 3816), *(unsigned __int16 *)(a2 + 3808));
                v71 = IoWMIWriteEvent(WnodeEventItem);
                if ( v71 < 0 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v70) = 2;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v70,
                      1,
                      43,
                      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                      a2,
                      v71);
                  }
                  if ( (byte_1C00E8041 & 0x10) != 0 )
                    McTemplateK0qqq(
                      (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
                      &IoWMIWriteEventFailed,
                      (const GUID *)(a2 + 4008),
                      v71,
                      0x10002u,
                      0);
                  ExFreePoolWithTag(WnodeEventItem, 0);
                }
              }
              v133 = (_BYTE)ndisAcOnLine == 1;
              ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)a2, 5, &v133);
            }
            ndisMAdjustFilters(a2, v147);
            if ( v116 < 6u )
            {
              *(_QWORD *)(a2 + 624) = ndisMSendPackets;
              v101 = *(_DWORD *)(a2 + 120);
              if ( (v101 & 0x40000) != 0 )
              {
                v102 = ndisMSendPacketsXToMiniport;
              }
              else
              {
                if ( (v101 & 0x40) != 0 )
                {
                  *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
                  *(_QWORD *)(a2 + 2024) = ndisMSendPacketsSGToMiniport;
                  v103 = ndisMDeferredSendPacketsSG;
                  if ( !*(_QWORD *)(v66 + 232) )
                    v103 = ndisMDeferredSendSG;
                  *(_QWORD *)(a2 + 632) = v103;
                  goto LABEL_130;
                }
                v102 = ndisMSendPacketsToMiniport;
              }
              *(_QWORD *)(a2 + 2032) = v102;
              *(_QWORD *)(a2 + 2024) = v102;
            }
            else
            {
              *(_QWORD *)(a2 + 2024) = ndisMSendPacketsToNetBufferLists;
              *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
            }
LABEL_130:
            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
            v73 = v72;
            ndisMSetIndicatePacketHandler(a2);
            *(_QWORD *)(a2 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v73);
            if ( ndisEnforceDisconnectedStandby )
            {
              if ( (v104 = *(_DWORD *)(a2 + 124), (v104 & 0x200000) != 0) && ndisAoAcCapable
                || (*(_DWORD *)(a2 + 2684) & 0x200) != 0 )
              {
                v105 = *(_DWORD *)(a2 + 3864);
                if ( (v105 & 0x10) == 0 )
                {
                  *(_DWORD *)(a2 + 124) = v104 & 0xFFFFFFBF;
                  *(_DWORD *)(a2 + 3864) = v105 | 0x10;
                  ndisUpdateAndIndicatePMCapabilities(a2);
                }
              }
            }
            if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2684) & 0x200) != 0)
              && *(_DWORD *)(a2 + 1832) == 14 )
            {
              v24 = *(_BYTE *)(a2 + 1001) == 2;
              InputBuffer = *(_QWORD *)(a2 + 3832);
              v138 = 1;
              v140 = 0;
              v137 = 4;
              if ( !v24
                || (*(_DWORD *)(a2 + 1008) & 1) == 0
                || *(_DWORD *)(a2 + 1012) < 0x10u
                || *(_DWORD *)(a2 + 1016) < 0x4Au
                || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
                || (*(_DWORD *)(a2 + 1052) & 1) == 0
                || (v106 = *(_DWORD *)(a2 + 1028) & 3, v139 = 1, (_BYTE)v106 != 3) )
              {
                v139 = 0;
              }
              ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
            }
            ndisPktMonMiniportRegister(a2);
            *(_DWORD *)v119 = 0;
            v74 = 0;
            v118 = 0;
            v117 = 0;
            goto LABEL_135;
          }
LABEL_288:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v51) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v51,
              1,
              37,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              a2,
              updated);
          }
          if ( (byte_1C00E8042 & 0x10) != 0 )
            McTemplateK0jqxqd(
              (__int64)&NDIS_PROVIDER_ID_Context,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4008),
              a2 + 4008,
              *(_DWORD *)(a2 + 4056),
              *(_QWORD *)(a2 + 4024),
              11,
              updated);
          *(_DWORD *)v119 = 32;
          v115 = 1;
          goto LABEL_222;
        }
LABEL_271:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = 3;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v51,
            1,
            34,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            a2,
            v115);
        }
        Arg1[0] = *(_DWORD *)v119;
        NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)Arg1);
        goto LABEL_136;
      }
      v37 = ndisMSetOffloadAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, v94 + 440, (_WORD *)(v94 + 440), 0LL, 0LL);
    }
    else
    {
      v36 = v129;
      if ( *(_BYTE *)(a2 + 929) )
        v36 = 0;
      v129 = v36;
      v37 = 0;
    }
    Status = v37;
    if ( v37 )
      goto LABEL_136;
    goto LABEL_52;
  }
  if ( v30 <= 4u )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
    goto LABEL_44;
LABEL_221:
  *(_DWORD *)v119 = 32;
  v115 = 1;
LABEL_222:
  Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v12);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
LABEL_137:
  if ( v120 )
  {
    *(_QWORD *)(a2 + 4064) = 2LL;
    v109 = *(_QWORD *)(a2 + 4040);
    if ( *(_DWORD *)(v109 + 1112) != 2 )
    {
      *(_DWORD *)(v109 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4040) + 1116LL) = *(_DWORD *)(a2 + 4068);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    v110 = *(void **)(a2 + 4568);
    if ( v110 )
    {
      ExFreePoolWithTag(v110, 0);
      *(_QWORD *)(a2 + 4568) = 0LL;
    }
  }
  if ( v121 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3824), 2u);
  if ( v122 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4152), 0);
  if ( v123 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4824), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4824));
    *(_QWORD *)(a2 + 4832) = 0LL;
  }
  if ( v9 )
  {
    ndisIovDeleteDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
    LOBYTE(v130) = -(char)v130;
    ndisMCommonHaltMiniport(a2);
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v127 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
    {
      v111 = *(void **)(a2 + 504);
      if ( v111 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            1,
            44,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            a2);
          v111 = *(void **)(a2 + 504);
        }
        ndisDereferenceDmaAdapter(v111);
      }
    }
    v112 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v113 = v112;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(a2 + 504) )
    {
      Timeout.QuadPart = 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v113);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_147;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v112);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
LABEL_147:
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        1,
        45,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a2);
    }
    v75 = *(_QWORD *)v128;
    ndisDeQueueMiniportOnDriver(a2, v128[0]);
  }
  else
  {
    v75 = *(_QWORD *)v128;
  }
  if ( v117 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v124 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v118 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        1,
        46,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a2);
    }
    ndisDereferenceDriver(v75, 0, 2u);
  }
  v76 = *(void **)(a2 + 2712);
  if ( v76 )
  {
    if ( v116 >= 6u )
      ExFreePoolWithTag(v76, 0);
    *(_QWORD *)(a2 + 2712) = 0LL;
  }
  if ( v125 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3296), 0x527374uLL);
    *(_QWORD *)(a2 + 3296) = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      13,
      47,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a2,
      v119[0]);
  }
  return *(unsigned int *)v119;
}
