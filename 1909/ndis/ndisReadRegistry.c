/*
 * XREFs of ndisReadRegistry @ 0x1C0147000
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D314 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void ndisReadRegistry()
{
  unsigned int v0; // eax
  unsigned int v1; // r9d
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // edx
  _DWORD VersionInformation[72]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v6[2]; // [rsp+158h] [rbp+50h] BYREF
  int v7; // [rsp+168h] [rbp+60h]
  const wchar_t *v8; // [rsp+170h] [rbp+68h]
  unsigned int *v9; // [rsp+178h] [rbp+70h]
  int v10; // [rsp+180h] [rbp+78h]
  const wchar_t *v11; // [rsp+188h] [rbp+80h]
  enum _NDIS_PORT_CONTROL_STATE *v12; // [rsp+190h] [rbp+88h]
  int v13; // [rsp+198h] [rbp+90h]
  const wchar_t *v14; // [rsp+1A0h] [rbp+98h]
  enum _NDIS_PORT_CONTROL_STATE *v15; // [rsp+1A8h] [rbp+A0h]
  int v16; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v17; // [rsp+1B8h] [rbp+B0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v18; // [rsp+1C0h] [rbp+B8h]
  int v19; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v20; // [rsp+1D0h] [rbp+C8h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v21; // [rsp+1D8h] [rbp+D0h]
  int v22; // [rsp+1E0h] [rbp+D8h]
  const wchar_t *v23; // [rsp+1E8h] [rbp+E0h]
  void *v24; // [rsp+1F0h] [rbp+E8h]
  int v25; // [rsp+1F8h] [rbp+F0h]
  const wchar_t *v26; // [rsp+200h] [rbp+F8h]
  _LIST_ENTRY *p_DeviceListHead; // [rsp+208h] [rbp+100h]
  int v28; // [rsp+210h] [rbp+108h]
  const wchar_t *v29; // [rsp+218h] [rbp+110h]
  char *v30; // [rsp+220h] [rbp+118h]
  int v31; // [rsp+228h] [rbp+120h]
  const wchar_t *v32; // [rsp+230h] [rbp+128h]
  unsigned int *v33; // [rsp+238h] [rbp+130h]
  int v34; // [rsp+240h] [rbp+138h]
  const wchar_t *v35; // [rsp+248h] [rbp+140h]
  _DEVICE_OBJECT::<unnamed_type_Queue> *p_Queue; // [rsp+250h] [rbp+148h]
  int v37; // [rsp+258h] [rbp+150h]
  const wchar_t *v38; // [rsp+260h] [rbp+158h]
  int *v39; // [rsp+268h] [rbp+160h]
  int v40; // [rsp+270h] [rbp+168h]
  const wchar_t *v41; // [rsp+278h] [rbp+170h]
  unsigned int *v42; // [rsp+280h] [rbp+178h]
  int v43; // [rsp+288h] [rbp+180h]
  const wchar_t *v44; // [rsp+290h] [rbp+188h]
  unsigned int *v45; // [rsp+298h] [rbp+190h]
  int v46; // [rsp+2A0h] [rbp+198h]
  const wchar_t *v47; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v48; // [rsp+2B0h] [rbp+1A8h]
  int v49; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v50; // [rsp+2C0h] [rbp+1B8h]
  char *v51; // [rsp+2C8h] [rbp+1C0h]
  int v52; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v53; // [rsp+2D8h] [rbp+1D0h]
  unsigned int *v54; // [rsp+2E0h] [rbp+1D8h]
  int v55; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v56; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v57; // [rsp+2F8h] [rbp+1F0h]
  int v58; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v59; // [rsp+308h] [rbp+200h]
  unsigned int *v60; // [rsp+310h] [rbp+208h]
  int v61; // [rsp+318h] [rbp+210h]
  const wchar_t *v62; // [rsp+320h] [rbp+218h]
  void *v63; // [rsp+328h] [rbp+220h]
  int v64; // [rsp+330h] [rbp+228h]
  const wchar_t *v65; // [rsp+338h] [rbp+230h]
  unsigned int *v66; // [rsp+340h] [rbp+238h]
  int v67; // [rsp+348h] [rbp+240h]
  const wchar_t *v68; // [rsp+350h] [rbp+248h]
  void *v69; // [rsp+358h] [rbp+250h]
  int v70; // [rsp+360h] [rbp+258h]
  const wchar_t *v71; // [rsp+368h] [rbp+260h]
  void *v72; // [rsp+370h] [rbp+268h]
  int v73; // [rsp+378h] [rbp+270h]
  const wchar_t *v74; // [rsp+380h] [rbp+278h]
  unsigned int *v75; // [rsp+388h] [rbp+280h]
  int v76; // [rsp+390h] [rbp+288h]
  const wchar_t *v77; // [rsp+398h] [rbp+290h]
  unsigned int *v78; // [rsp+3A0h] [rbp+298h]
  int v79; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v80; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v81; // [rsp+3B8h] [rbp+2B0h]
  int v82; // [rsp+3C0h] [rbp+2B8h]
  const wchar_t *v83; // [rsp+3C8h] [rbp+2C0h]
  unsigned int *v84; // [rsp+3D0h] [rbp+2C8h]
  int v85; // [rsp+3D8h] [rbp+2D0h]
  const wchar_t *v86; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v87; // [rsp+3E8h] [rbp+2E0h]
  int v88; // [rsp+3F0h] [rbp+2E8h]
  const wchar_t *v89; // [rsp+3F8h] [rbp+2F0h]
  unsigned int *v90; // [rsp+400h] [rbp+2F8h]
  int v91; // [rsp+408h] [rbp+300h]
  const wchar_t *v92; // [rsp+410h] [rbp+308h]
  unsigned int *v93; // [rsp+418h] [rbp+310h]
  int v94; // [rsp+420h] [rbp+318h]
  const wchar_t *v95; // [rsp+428h] [rbp+320h]
  unsigned __int8 *v96; // [rsp+430h] [rbp+328h]
  int v97; // [rsp+438h] [rbp+330h]
  const wchar_t *v98; // [rsp+440h] [rbp+338h]
  unsigned int *v99; // [rsp+448h] [rbp+340h]
  int v100; // [rsp+450h] [rbp+348h]
  const wchar_t *v101; // [rsp+458h] [rbp+350h]
  unsigned int *v102; // [rsp+460h] [rbp+358h]
  int v103; // [rsp+468h] [rbp+360h]
  const wchar_t *v104; // [rsp+470h] [rbp+368h]
  unsigned int *v105; // [rsp+478h] [rbp+370h]
  int v106; // [rsp+480h] [rbp+378h]
  const wchar_t *v107; // [rsp+488h] [rbp+380h]
  ULONG *v108; // [rsp+490h] [rbp+388h]
  int v109; // [rsp+498h] [rbp+390h]
  const wchar_t *v110; // [rsp+4A0h] [rbp+398h]
  unsigned int *v111; // [rsp+4A8h] [rbp+3A0h]
  int v112; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v113; // [rsp+4B8h] [rbp+3B0h]
  unsigned int *v114; // [rsp+4C0h] [rbp+3B8h]
  int v115; // [rsp+4C8h] [rbp+3C0h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 (__fastcall *v117)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+510h] [rbp+408h]
  int v118; // [rsp+518h] [rbp+410h]
  __int64 v119; // [rsp+520h] [rbp+418h]
  __int64 v120; // [rsp+528h] [rbp+420h]
  int v121; // [rsp+530h] [rbp+428h]
  void *v122; // [rsp+538h] [rbp+430h]
  int v123; // [rsp+540h] [rbp+438h]
  _BYTE v124[56]; // [rsp+548h] [rbp+440h] BYREF

  memset(&VersionInformation[1], 0, 0x118uLL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MediaTypes";
  QueryTable.Flags = 1;
  memset(&QueryTable.EntryContext, 0, 0x20uLL);
  v118 = 20;
  v117 = ndisAddMediaTypeToArray;
  v119 = 0LL;
  v122 = &unk_1C00E7F10;
  v120 = 0LL;
  v121 = 4;
  v123 = 0;
  memset(v124, 0, sizeof(v124));
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v7 = 0;
  v10 = 2;
  v6[0] = L"Flags";
  v6[1] = (char *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 4;
  v8 = L"PacketStackSize";
  v9 = &ndisPacketStackSize;
  v11 = L"PortAuthSendControlState";
  v12 = &ndisGlobalPortSendControlState;
  v14 = L"PortAuthReceiveControlState";
  v15 = &ndisGlobalPortReceiveControlState;
  v17 = L"PortAuthSendAuthorizationState";
  v18 = &ndisGlobalPortSendAuthorizationState;
  v20 = L"PortAuthReceiveAuthorizationState";
  v21 = &ndisGlobalPortReceiveAuthorizationState;
  v23 = L"MaxNumFilters";
  v24 = &ndisMaxNumberFilterPerAdapter;
  v26 = L"ReceiveWorkerThreadPriority";
  p_DeviceListHead = &WPP_MAIN_CB.DeviceQueue.DeviceListHead;
  v29 = L"ReceiveWorkerDisableAutoStart";
  v30 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink + 4;
  v32 = L"DefaultPnPCapabilities";
  v13 = 2;
  v16 = 2;
  v19 = 2;
  v22 = 2;
  v25 = 8;
  v28 = 8;
  v31 = 0;
  v34 = 0;
  v33 = &ndisDefaultPnPCapabilities;
  v37 = 0xFFFFFF;
  v35 = L"NoPauseOnSuspend";
  v40 = 0;
  p_Queue = &WPP_MAIN_CB.Queue;
  v38 = L"MaxCachedNblContextSize";
  v39 = &ndisMaxCachedNblContextSize;
  v41 = L"NicQuietInitTimeoutMs";
  v42 = &ndisNicQuietInitTimeout;
  v44 = L"NicQuietWakeTimeoutMs";
  v45 = &ndisNicQuietWakeTimeout;
  v47 = L"NicQuietDerefDefaultTimeoutMs";
  v48 = &ndisNicQuietDerefDefaultTimeout;
  v50 = L"NicQuietDerefExtendedTimeoutMs";
  v51 = ndisNicQuietDerefExtendedTimeout;
  v53 = L"StartDeviceSync";
  v54 = &ndisStartDeviceSync;
  v56 = L"AllowWakeFromS5";
  v57 = &ndisAllowWakeFromS5;
  v59 = L"DebugLoggingMode";
  v60 = &ndisDebugLoggingMode;
  v62 = L"DatapathVerifier";
  v63 = &ndisDatapathVerifierMode;
  v65 = L"DisableIterativeDataPath";
  v66 = &ndisIterativeDataPathDisabled;
  v68 = L"StackExpansionFaultInjectionRatio";
  v69 = &ndisStackExpansionFaultInjectionRatio;
  v71 = L"StackExpansionFaultInjectionLevel";
  v72 = &ndisStackExpansionFaultInjectionLevel;
  v74 = L"AllowFlowControlUnderDebugger";
  v75 = &ndisAllowFlowControl;
  v77 = L"SriovSupportTestOverride";
  v78 = &ndisSriovSupportTestOverride;
  v43 = 30000;
  v46 = 1000;
  v49 = 100;
  v52 = 1000;
  v55 = 0;
  v58 = 0;
  v61 = 1;
  v64 = 3;
  v67 = 0;
  v70 = 100;
  v73 = 0;
  v76 = 0;
  v79 = 0;
  v80 = L"EnableNicAutoPowerSaverInSleepStudy";
  v82 = 0;
  v81 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v85 = 0;
  v83 = L"DisableNaps";
  v84 = &ndisDefaultNapsState;
  v86 = L"AOACTestOverride";
  v87 = &ndisAoAcTestOverride;
  v89 = L"EnableScreenOnNaps";
  v90 = &ndisIsScreenOnNapsEnabled;
  v92 = L"DisableWDIWatchdogForceBugcheck";
  v93 = &ndisWatchdogForceBugCheckForWDI;
  v95 = L"DisableNDISWatchDog";
  v96 = &ndisWatchdogDisable;
  v98 = L"ImplicitPowerRefManagement";
  v99 = &ndisPowerRefManagementState;
  v101 = L"DirectedMacForNapsEnabled";
  v102 = &ndisDirectedMacForNapsState;
  v104 = L"DisableReenumerationTimeoutBugcheck";
  v105 = &ndisBugCheckOnReenumerationTimeout;
  v107 = L"RssBaseCpu";
  v108 = &ndisRssBaseCpu;
  v110 = L"MaxNumRssCpus";
  v111 = &ndisMaxNumRssCpus;
  v113 = L"PadShortPackets";
  v114 = &ndisPadShortPackets;
  v88 = 0;
  v91 = 0;
  v94 = 1;
  v97 = 0;
  v100 = 0;
  v103 = 1;
  v106 = 1;
  v109 = 0;
  v112 = 1280;
  v115 = 0;
  ndisReadRegistryKnobs((struct _DRIVER_OBJECT *)0x3E8, (const struct NDIS_REGISTRY_KNOB *)v6, 0x25uLL);
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  v0 = ndisPacketStackSize;
  if ( !ndisPacketStackSize )
  {
    v0 = 1;
    ndisPacketStackSize = 1;
  }
  if ( v0 >= 6 )
    ndisPacketStackSize = 6;
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  v2 = 0;
  if ( LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) == 0xFFFFFF )
  {
    LOBYTE(v2) = BYTE2(VersionInformation[70]) == 1;
    LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = v2;
  }
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v3 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v3 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v3 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v3 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v3 > 0x500 )
  {
    v3 = 1280;
    ndisMaxNumRssCpus = 1280;
  }
  v4 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v4 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v4 + v3 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v4;
  if ( (unsigned int)(LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) - 1) > 0x1E )
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &Feature_NdisDatapathVerifier__private_propertyCache,
        0xFB7BF4u,
        &stru_1C00CE910,
        v1);
    ndisDatapathVerifierMode = 0;
  }
}
