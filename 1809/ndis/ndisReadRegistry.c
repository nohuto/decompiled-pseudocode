/*
 * XREFs of ndisReadRegistry @ 0x1C0126080
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

__int64 ndisReadRegistry()
{
  unsigned int v0; // eax
  int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE VersionInformation[284]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[2]; // [rsp+160h] [rbp+60h] BYREF
  int v8; // [rsp+170h] [rbp+70h]
  const wchar_t *v9; // [rsp+178h] [rbp+78h]
  unsigned int *v10; // [rsp+180h] [rbp+80h]
  int v11; // [rsp+188h] [rbp+88h]
  const wchar_t *v12; // [rsp+190h] [rbp+90h]
  enum _NDIS_PORT_CONTROL_STATE *v13; // [rsp+198h] [rbp+98h]
  int v14; // [rsp+1A0h] [rbp+A0h]
  const wchar_t *v15; // [rsp+1A8h] [rbp+A8h]
  enum _NDIS_PORT_CONTROL_STATE *v16; // [rsp+1B0h] [rbp+B0h]
  int v17; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v18; // [rsp+1C0h] [rbp+C0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v19; // [rsp+1C8h] [rbp+C8h]
  int v20; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v21; // [rsp+1D8h] [rbp+D8h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v22; // [rsp+1E0h] [rbp+E0h]
  int v23; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v24; // [rsp+1F0h] [rbp+F0h]
  void *v25; // [rsp+1F8h] [rbp+F8h]
  int v26; // [rsp+200h] [rbp+100h]
  const wchar_t *v27; // [rsp+208h] [rbp+108h]
  _LIST_ENTRY *p_DeviceListHead; // [rsp+210h] [rbp+110h]
  int v29; // [rsp+218h] [rbp+118h]
  const wchar_t *v30; // [rsp+220h] [rbp+120h]
  char *v31; // [rsp+228h] [rbp+128h]
  int v32; // [rsp+230h] [rbp+130h]
  const wchar_t *v33; // [rsp+238h] [rbp+138h]
  unsigned int *v34; // [rsp+240h] [rbp+140h]
  int v35; // [rsp+248h] [rbp+148h]
  const wchar_t *v36; // [rsp+250h] [rbp+150h]
  void **p_DeviceExtension; // [rsp+258h] [rbp+158h]
  int v38; // [rsp+260h] [rbp+160h]
  const wchar_t *v39; // [rsp+268h] [rbp+168h]
  int *v40; // [rsp+270h] [rbp+170h]
  int v41; // [rsp+278h] [rbp+178h]
  const wchar_t *v42; // [rsp+280h] [rbp+180h]
  int *v43; // [rsp+288h] [rbp+188h]
  int v44; // [rsp+290h] [rbp+190h]
  const wchar_t *v45; // [rsp+298h] [rbp+198h]
  unsigned int *v46; // [rsp+2A0h] [rbp+1A0h]
  int v47; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v48; // [rsp+2B0h] [rbp+1B0h]
  unsigned int *v49; // [rsp+2B8h] [rbp+1B8h]
  int v50; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v51; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v52; // [rsp+2D0h] [rbp+1D0h]
  int v53; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v54; // [rsp+2E0h] [rbp+1E0h]
  unsigned int *v55; // [rsp+2E8h] [rbp+1E8h]
  int v56; // [rsp+2F0h] [rbp+1F0h]
  const wchar_t *v57; // [rsp+2F8h] [rbp+1F8h]
  unsigned int *v58; // [rsp+300h] [rbp+200h]
  int v59; // [rsp+308h] [rbp+208h]
  const wchar_t *v60; // [rsp+310h] [rbp+210h]
  unsigned int *v61; // [rsp+318h] [rbp+218h]
  int v62; // [rsp+320h] [rbp+220h]
  const wchar_t *v63; // [rsp+328h] [rbp+228h]
  unsigned int *v64; // [rsp+330h] [rbp+230h]
  int v65; // [rsp+338h] [rbp+238h]
  const wchar_t *v66; // [rsp+340h] [rbp+240h]
  void *v67; // [rsp+348h] [rbp+248h]
  int v68; // [rsp+350h] [rbp+250h]
  const wchar_t *v69; // [rsp+358h] [rbp+258h]
  unsigned int *v70; // [rsp+360h] [rbp+260h]
  int v71; // [rsp+368h] [rbp+268h]
  const wchar_t *v72; // [rsp+370h] [rbp+270h]
  void *v73; // [rsp+378h] [rbp+278h]
  int v74; // [rsp+380h] [rbp+280h]
  const wchar_t *v75; // [rsp+388h] [rbp+288h]
  void *v76; // [rsp+390h] [rbp+290h]
  int v77; // [rsp+398h] [rbp+298h]
  const wchar_t *v78; // [rsp+3A0h] [rbp+2A0h]
  unsigned int *v79; // [rsp+3A8h] [rbp+2A8h]
  int v80; // [rsp+3B0h] [rbp+2B0h]
  const wchar_t *v81; // [rsp+3B8h] [rbp+2B8h]
  unsigned int *v82; // [rsp+3C0h] [rbp+2C0h]
  int v83; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v84; // [rsp+3D0h] [rbp+2D0h]
  unsigned int *v85; // [rsp+3D8h] [rbp+2D8h]
  int v86; // [rsp+3E0h] [rbp+2E0h]
  const wchar_t *v87; // [rsp+3E8h] [rbp+2E8h]
  unsigned int *v88; // [rsp+3F0h] [rbp+2F0h]
  int v89; // [rsp+3F8h] [rbp+2F8h]
  const wchar_t *v90; // [rsp+400h] [rbp+300h]
  unsigned int *v91; // [rsp+408h] [rbp+308h]
  int v92; // [rsp+410h] [rbp+310h]
  const wchar_t *v93; // [rsp+418h] [rbp+318h]
  unsigned int *v94; // [rsp+420h] [rbp+320h]
  int v95; // [rsp+428h] [rbp+328h]
  const wchar_t *v96; // [rsp+430h] [rbp+330h]
  unsigned int *v97; // [rsp+438h] [rbp+338h]
  int v98; // [rsp+440h] [rbp+340h]
  const wchar_t *v99; // [rsp+448h] [rbp+348h]
  unsigned int *v100; // [rsp+450h] [rbp+350h]
  int v101; // [rsp+458h] [rbp+358h]
  const wchar_t *v102; // [rsp+460h] [rbp+360h]
  unsigned int *v103; // [rsp+468h] [rbp+368h]
  int v104; // [rsp+470h] [rbp+370h]
  const wchar_t *v105; // [rsp+478h] [rbp+378h]
  unsigned int *v106; // [rsp+480h] [rbp+380h]
  int v107; // [rsp+488h] [rbp+388h]
  const wchar_t *v108; // [rsp+490h] [rbp+390h]
  ULONG *v109; // [rsp+498h] [rbp+398h]
  int v110; // [rsp+4A0h] [rbp+3A0h]
  const wchar_t *v111; // [rsp+4A8h] [rbp+3A8h]
  unsigned int *v112; // [rsp+4B0h] [rbp+3B0h]
  int v113; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v114; // [rsp+4C0h] [rbp+3C0h]
  unsigned int *v115; // [rsp+4C8h] [rbp+3C8h]
  int v116; // [rsp+4D0h] [rbp+3D0h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 (__fastcall *v118)(); // [rsp+518h] [rbp+418h]
  int v119; // [rsp+520h] [rbp+420h]
  __int64 v120; // [rsp+528h] [rbp+428h]
  __int64 v121; // [rsp+530h] [rbp+430h]
  int v122; // [rsp+538h] [rbp+438h]
  void *v123; // [rsp+540h] [rbp+440h]
  int v124; // [rsp+548h] [rbp+448h]
  _BYTE v125[56]; // [rsp+550h] [rbp+450h] BYREF

  memset(VersionInformation, 0, sizeof(VersionInformation));
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MediaTypes";
  QueryTable.Flags = 1;
  memset(&QueryTable.EntryContext, 0, 0x20uLL);
  v119 = 20;
  v118 = ndisAddMediaTypeToArray;
  v120 = 0LL;
  v123 = &unk_1C00A1F50;
  v121 = 0LL;
  v122 = 4;
  v124 = 0;
  memset(v125, 0, sizeof(v125));
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v8 = 0;
  v11 = 2;
  v7[0] = L"Flags";
  v7[1] = (char *)&WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink + 4;
  v9 = L"PacketStackSize";
  v10 = &ndisPacketStackSize;
  v12 = L"PortAuthSendControlState";
  v13 = &ndisGlobalPortSendControlState;
  v15 = L"PortAuthReceiveControlState";
  v16 = &ndisGlobalPortReceiveControlState;
  v18 = L"PortAuthSendAuthorizationState";
  v19 = &ndisGlobalPortSendAuthorizationState;
  v21 = L"PortAuthReceiveAuthorizationState";
  v22 = &ndisGlobalPortReceiveAuthorizationState;
  v24 = L"MaxNumFilters";
  v25 = &ndisMaxNumberFilterPerAdapter;
  v27 = L"ReceiveWorkerThreadPriority";
  p_DeviceListHead = &WPP_MAIN_CB.DeviceQueue.DeviceListHead;
  v30 = L"ReceiveWorkerDisableAutoStart";
  v31 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink + 4;
  v33 = L"DefaultPnPCapabilities";
  v14 = 2;
  v17 = 2;
  v20 = 2;
  v23 = 2;
  v26 = 8;
  v29 = 8;
  v32 = 0;
  v35 = 0;
  v34 = &ndisDefaultPnPCapabilities;
  v38 = 0xFFFFFF;
  v36 = L"NoPauseOnSuspend";
  v41 = 1;
  p_DeviceExtension = &WPP_MAIN_CB.DeviceExtension;
  v39 = L"NxPool";
  v40 = &v5;
  v42 = L"MaxCachedNblContextSize";
  v43 = &ndisMaxCachedNblContextSize;
  v45 = L"NicQuietInitTimeoutMs";
  v46 = &ndisNicQuietInitTimeout;
  v48 = L"NicQuietWakeTimeoutMs";
  v49 = &ndisNicQuietWakeTimeout;
  v51 = L"NicQuietDerefDefaultTimeoutMs";
  v52 = &ndisNicQuietDerefDefaultTimeout;
  v54 = L"NicQuietDerefExtendedTimeoutMs";
  v55 = &ndisNicQuietDerefExtendedTimeout;
  v57 = L"StartDeviceSync";
  v58 = &ndisStartDeviceSync;
  v60 = L"AllowWakeFromS5";
  v61 = &ndisAllowWakeFromS5;
  v63 = L"DebugLoggingMode";
  v64 = &ndisDebugLoggingMode;
  v66 = L"DatapathVerifier";
  v67 = &ndisDatapathVerifierMode;
  v69 = L"DisableIterativeDataPath";
  v70 = &ndisIterativeDataPathDisabled;
  v72 = L"StackExpansionFaultInjectionRatio";
  v73 = &ndisStackExpansionFaultInjectionRatio;
  v75 = L"StackExpansionFaultInjectionLevel";
  v76 = &ndisStackExpansionFaultInjectionLevel;
  v78 = L"AllowFlowControlUnderDebugger";
  v79 = &ndisAllowFlowControl;
  v44 = 0;
  v47 = 30000;
  v50 = 1000;
  v53 = 100;
  v56 = 1000;
  v59 = 0;
  v62 = 0;
  v65 = 1;
  v68 = 0;
  v71 = 0;
  v74 = 100;
  v77 = 0;
  v80 = 0;
  v81 = L"SriovSupportTestOverride";
  v83 = 0;
  v82 = &ndisSriovSupportTestOverride;
  v86 = 0;
  v84 = L"EnableNicAutoPowerSaverInSleepStudy";
  v85 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v87 = L"DisableNaps";
  v88 = &ndisDefaultNapsState;
  v90 = L"AOACTestOverride";
  v91 = &ndisAoAcTestOverride;
  v93 = L"EnableScreenOnNaps";
  v94 = &ndisIsScreenOnNapsEnabled;
  v96 = L"DisableWDIWatchdogForceBugcheck";
  v97 = &ndisWatchdogForceBugCheckForWDI;
  v99 = L"ImplicitPowerRefManagement";
  v100 = &ndisPowerRefManagementState;
  v102 = L"DirectedMacForNapsEnabled";
  v103 = &ndisDirectedMacForNapsState;
  v105 = L"DisableReenumerationTimeoutBugcheck";
  v106 = &ndisBugCheckOnReenumerationTimeout;
  v108 = L"RssBaseCpu";
  v109 = &ndisRssBaseCpu;
  v111 = L"MaxNumRssCpus";
  v112 = &ndisMaxNumRssCpus;
  v114 = L"PadShortPackets";
  v115 = &ndisPadShortPackets;
  v89 = 0;
  v92 = 0;
  v95 = 0;
  v98 = 1;
  v101 = 0;
  v104 = 1;
  v107 = 1;
  v110 = 0;
  v113 = 1280;
  v116 = 0;
  ndisReadRegistryKnobs((struct _DRIVER_OBJECT *)0x3E8, (const struct NDIS_REGISTRY_KNOB *)v7, 0x25uLL);
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
  *(_DWORD *)VersionInformation = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  v1 = 0;
  if ( LODWORD(WPP_MAIN_CB.DeviceExtension) == 0xFFFFFF )
  {
    LOBYTE(v1) = VersionInformation[282] == 1;
    LODWORD(WPP_MAIN_CB.DeviceExtension) = v1;
  }
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !v5 )
  {
    ndisDriverPoolType = NonPagedPool;
    ndisMdlMappingNxFlag = 0;
  }
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v2 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v2 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v2 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v2 > 0x500 )
  {
    v2 = 1280;
    ndisMaxNumRssCpus = 1280;
  }
  v3 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v3 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v3 + v2 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v3;
  result = (unsigned int)(LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) - 1);
  if ( (unsigned int)result > 0x1E )
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 8;
  return result;
}
