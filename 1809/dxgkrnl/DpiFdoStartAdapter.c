/*
 * XREFs of DpiFdoStartAdapter @ 0x1C01487C8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0273300 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001E530 (DxgkDiagCalcDuration1us.c)
 *     SendBDDDiagTelemetry @ 0x1C001EA14 (SendBDDDiagTelemetry.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C001ED5C (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiHybridInternalPanelOverride @ 0x1C001EE1C (DpiHybridInternalPanelOverride.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC (-IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     McTemplateK0pt @ 0x1C00303E4 (McTemplateK0pt.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C00442C8 (NotifyUserMSBDAIfApplicable.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0134DC0 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0144DA8 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0145F18 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C0145F8C (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiFdoEnumChildDevices @ 0x1C0146340 (DpiFdoEnumChildDevices.c)
 *     MonitorInitializeAdapterDone @ 0x1C0146EE4 (MonitorInitializeAdapterDone.c)
 *     DpiFdoConnectInterrupt @ 0x1C01484A8 (DpiFdoConnectInterrupt.c)
 *     DpiDxgkDdiStartDevice @ 0x1C0148624 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 *     DpiGetDevicePropertyString @ 0x1C0149464 (DpiGetDevicePropertyString.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149B00 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C014C474 (DpiFdoInitializeGpuVirtualization.c)
 *     DxgkAddAdapter @ 0x1C014C59C (DxgkAddAdapter.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C014E780 (DxgkRetrieveStringFromRegistry.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01BF94C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C01C841C (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C021B38C (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02638B0 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0263B28 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C0266AE8 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0267558 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiDxgkDdiStopDevice @ 0x1C0273F04 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  char v6; // bl
  __int64 v8; // rsi
  char *DeviceExtension; // r15
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 started; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  _DWORD *PoolWithTag; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rbx
  unsigned int v25; // eax
  int v26; // ecx
  _DWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  unsigned int v32; // eax
  PVOID v33; // rdi
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rcx
  _BYTE *v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // al
  bool *v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  int RelatedObjects; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // di
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  const GUID *v59; // r8
  __int64 v60; // rax
  BOOLEAN v61; // dl
  NTSTATUS v62; // eax
  int v63; // eax
  int v64; // eax
  struct _LUID *v65; // rdx
  unsigned int v66; // ebx
  __int64 v67; // rdi
  _DWORD *v68; // rax
  _DWORD *v69; // r12
  __int64 v71; // rcx
  const GUID *v72; // r8
  unsigned int v73; // eax
  bool v74; // cf
  bool v75; // zf
  int Caps; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  unsigned int v80; // edx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 (__fastcall *v83)(_QWORD, _QWORD, __int64); // rax
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rcx
  const GUID *v91; // r8
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  int DevicePropertyString; // eax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  bool v103; // zf
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  NTSTATUS v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rax
  struct _DEVICE_OBJECT *v111; // rcx
  int v112; // eax
  __int64 v113; // rdx
  PVOID v114; // rcx
  unsigned int v115; // edi
  unsigned int *v116; // r12
  DXGADAPTER *v117; // rcx
  _DWORD *v118; // rax
  _DWORD *v119; // rdi
  __int64 v120; // rcx
  unsigned int v121; // eax
  PVOID v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  __int64 (__fastcall *v125)(__int64, _QWORD); // rax
  int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 (__fastcall *v130)(_QWORD, char *); // rax
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r12
  __int64 v134; // rax
  _DWORD *v135; // rax
  _DWORD *v136; // rbx
  int v137; // eax
  unsigned __int64 v138; // [rsp+20h] [rbp-158h]
  char v139; // [rsp+31h] [rbp-147h]
  char v140; // [rsp+32h] [rbp-146h]
  char v141; // [rsp+33h] [rbp-145h]
  char v142; // [rsp+34h] [rbp-144h]
  __int64 v144; // [rsp+38h] [rbp-140h] BYREF
  PVOID v145; // [rsp+40h] [rbp-138h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v146; // [rsp+48h] [rbp-130h]
  PVOID P; // [rsp+50h] [rbp-128h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-120h] BYREF
  __int64 v149; // [rsp+60h] [rbp-118h] BYREF
  int v150; // [rsp+68h] [rbp-110h] BYREF
  __int64 v151; // [rsp+70h] [rbp-108h]
  char v152; // [rsp+78h] [rbp-100h]
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp-F8h] BYREF
  bool *v154; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v155; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v156; // [rsp+98h] [rbp-E0h]
  _QWORD v157[3]; // [rsp+A0h] [rbp-D8h] BYREF
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+B8h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-B0h] BYREF
  GUID v160[2]; // [rsp+D8h] [rbp-A0h] BYREF
  char v161[4]; // [rsp+F8h] [rbp-80h] BYREF
  int v162; // [rsp+FCh] [rbp-7Ch]
  __int64 v163; // [rsp+100h] [rbp-78h]
  int v164; // [rsp+108h] [rbp-70h]
  _DWORD v165[8]; // [rsp+110h] [rbp-68h] BYREF

  v146 = a4;
  memset(v160, 0, 28);
  v6 = a2;
  v8 = 0LL;
  v154 = a3;
  v142 = 0;
  DeviceExtension = (char *)a1->DeviceExtension;
  v141 = 0;
  v140 = 0;
  v75 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v10 = *((_QWORD *)DeviceExtension + 5);
  v156 = v10;
  v139 = 0;
  v145 = 0LL;
  v149 = MEMORY[0xFFFFF78000000320];
  if ( v75 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                104,
                2) >= 0 )
    {
      if ( a6 )
      {
        v83 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v83 )
        {
          v84 = v83(*((_QWORD *)DeviceExtension + 126), a5, a6);
          started = v84;
          if ( v84 < 0 )
          {
            v86 = WdLogNewEntry5_WdError(v85);
            v87 = *((_QWORD *)DeviceExtension + 131);
            goto LABEL_113;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x68uLL);
    }
    v6 = a2;
    *((_DWORD *)DeviceExtension + 972) = 0;
  }
  v11 = DpiFdoConnectInterrupt(a1);
  started = v11;
  if ( v11 == -1073741275 )
  {
    v15 = WdLogNewEntry5_WdEvent(v13, v12);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdEvent(v15);
    goto LABEL_8;
  }
  v50 = 0;
  if ( v11 >= 0 )
  {
    v142 = 1;
LABEL_8:
    if ( DeviceExtension[1144] == 1 )
    {
      if ( DeviceExtension[1148] == 1 && v6 && byte_1C008E755 && !DpiFdoIsCompatibleWithHighResolutionBoot((__int64)a1) )
      {
        v150 = -1;
        v151 = 0LL;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          v152 = 1;
          v150 = 8006;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v71, &EventProfilerEnter, v72, 8006);
        }
        else
        {
          v152 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v150, 8006);
        memset(v165, 0, sizeof(v165));
        v165[0] = 18;
        x86BiosCall(16LL, v165);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v150);
        if ( v152 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v90, &EventProfilerExit, v91, v150);
      }
      if ( v8 )
      {
        v73 = *(_DWORD *)(v10 + 28);
        if ( byte_1C008E755 )
        {
          v74 = v73 < 0x300E;
          v75 = v73 == 12302;
        }
        else
        {
          v74 = v73 < 0x2005;
          v75 = v73 == 8197;
        }
        *(_BYTE *)(v8 + 3800) = *(_BYTE *)(v8 + 3800) & 0xFB | (4 * (!v74 && !v75));
      }
    }
    while ( 1 )
    {
      LODWORD(started) = ExUuidCreate((UUID *)(DeviceExtension + 2584));
      if ( (int)started >= 0 )
        break;
      if ( (_DWORD)started != -1073741267 )
      {
        v86 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v86 + 24) = (int)started;
        goto LABEL_115;
      }
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 325);
    started = LocallyUniqueId;
    if ( LocallyUniqueId < 0 )
      goto LABEL_131;
    if ( v8 )
    {
      v19 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v8);
      v21 = v19;
      if ( v19 < 0 )
      {
        v92 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v92 + 24) = v21;
        WdLogEvent5_WdError(v92);
      }
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1D0uLL, 0x74727044u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_132;
    memset(PoolWithTag, 0, 0x1D0uLL);
    v25 = *(_DWORD *)(v10 + 28);
    v26 = 16387;
    if ( v25 > 0x4003 )
    {
      *v24 = 464;
      v24[1] = 40971;
      goto LABEL_17;
    }
    if ( v25 <= 0x300E )
    {
      v26 = 8197;
      if ( v25 > 0x2005 )
      {
        *v24 = 256;
        v24[1] = 12302;
LABEL_17:
        *((_QWORD *)v24 + 1) = a1;
        *((_QWORD *)v24 + 2) = DpEvalAcpiMethod;
        *((_QWORD *)v24 + 3) = &DpGetDeviceInformation;
        *((_QWORD *)v24 + 4) = DpIndicateChildStatus;
        *((_QWORD *)v24 + 5) = DpMapMemory;
        *((_QWORD *)v24 + 6) = DpQueueDpc;
        *((_QWORD *)v24 + 7) = DpQueryServices;
        *((_QWORD *)v24 + 8) = DpReadDeviceSpace;
        *((_QWORD *)v24 + 9) = DpSynchronizeExecution;
        *((_QWORD *)v24 + 10) = DpUnmapMemory;
        *((_QWORD *)v24 + 11) = DpWriteDeviceSpace;
        *((_QWORD *)v24 + 12) = DpIsDevicePresent;
        *((_QWORD *)v24 + 13) = DxgGetHandleDataCB;
        *((_QWORD *)v24 + 14) = DxgGetHandleParentCB;
        *((_QWORD *)v24 + 15) = DxgEnumHandleChildrenCB;
        *((_QWORD *)v24 + 16) = DxgNotifyInterruptCB;
        *((_QWORD *)v24 + 17) = DxgNotifyDpcCB;
        *((_QWORD *)v24 + 18) = DxgMiniportQueryVidPnInterfaceCB;
        *((_QWORD *)v24 + 19) = DxgMiniportQueryMonitorInterfaceCB;
        *((_QWORD *)v24 + 20) = DxgGetCaptureAddressCB;
        *((_QWORD *)v24 + 21) = DxgLogEtwEventCb;
        *((_QWORD *)v24 + 22) = DpExcludeAdapterAccess;
        *((_QWORD *)v24 + 23) = DxgCreateContextAllocationCB;
        *((_QWORD *)v24 + 24) = DxgDestroyContextAllocationCB;
        *((_QWORD *)v24 + 25) = &DxgSetPowerComponentActiveCB;
        *((_QWORD *)v24 + 26) = DxgSetPowerComponentIdleCB;
        *((_QWORD *)v24 + 28) = DxgkPowerRuntimeControlRequestCB;
        *((_QWORD *)v24 + 29) = DxgkSetPowerComponentLatencyCB;
        *((_QWORD *)v24 + 30) = DxgkSetPowerComponentResidencyCB;
        *((_QWORD *)v24 + 31) = DxgkCompleteFStateTransitionCB;
        *((_QWORD *)v24 + 32) = DxgkCompletePStateTransitionCB;
        *((_QWORD *)v24 + 27) = DpAcquirePostDisplayOwnership;
        *((_QWORD *)v24 + 33) = DxgkMapContextAllocationCB;
        *((_QWORD *)v24 + 34) = DxgkUpdateContextAllocationCB;
        *((_QWORD *)v24 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
        *((_QWORD *)v24 + 36) = DxgkAcquireHandleDataCB;
        *((_QWORD *)v24 + 37) = DxgkReleaseHandleDataCB;
        *((_QWORD *)v24 + 38) = DxgkHardwareContentProtectionTeardownCB;
        *((_QWORD *)v24 + 39) = DxgkMultiPlaneOverlayDisabledCB;
        *((_QWORD *)v24 + 40) = DxgkMitigatedRangeUpdateCB;
        *((_QWORD *)v24 + 42) = DpIndicateConnectorChange;
        *((_QWORD *)v24 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
        *((_QWORD *)v24 + 44) = DpAcquirePostDisplayOwnership2;
        *((_QWORD *)v24 + 45) = DxgkSetProtectedSessionStatusCB;
        *((_QWORD *)v24 + 46) = DxgkAllocateContiguousMemoryCB;
        *((_QWORD *)v24 + 47) = DxgkFreeContiguousMemoryCB;
        *((_QWORD *)v24 + 48) = DxgkAllocatePagesForMdlCB;
        *((_QWORD *)v24 + 49) = DxgkFreePagesFromMdlCB;
        *((_QWORD *)v24 + 50) = DxgkPinFrameBufferForSaveCB;
        *((_QWORD *)v24 + 51) = DxgkUnpinFrameBufferForSaveCB;
        *((_QWORD *)v24 + 52) = DxgkMapFrameBufferPointerCB;
        *((_QWORD *)v24 + 53) = DxgkUnmapFrameBufferPointerCB;
        *((_QWORD *)v24 + 54) = DxgkMapMdlToIoMmuCB;
        *((_QWORD *)v24 + 55) = DxgkUnmapMdlFromIoMmuCB;
        *((_QWORD *)v24 + 56) = DxgkCbReportDiagnostic;
        *((_QWORD *)v24 + 41) = DxgkInvalidateHwContextCB;
        *((_QWORD *)v24 + 57) = DxgkSignalEventCB;
        v160[0].Data1 = 32;
        v27 = DeviceExtension + 2612;
        *(GUID *)&v160[0].Data2 = *(GUID *)(DeviceExtension + 2584);
        *(_QWORD *)&v160[1].Data2 = *((_QWORD *)DeviceExtension + 325);
        qword_1C008EA90 = (__int64)KeGetCurrentThread();
        qword_1C008EA98 = (__int64)a1;
        started = (int)DpiDxgkDdiStartDevice(
                         v10,
                         *((const void **)DeviceExtension + 6),
                         v160,
                         (__int64)v24,
                         (const unsigned int *)DeviceExtension + 653,
                         (const unsigned int *)DeviceExtension + 652);
        ExFreePoolWithTag(v24, 0x74727044u);
        qword_1C008EA98 = 0LL;
        qword_1C008EA90 = 0LL;
        if ( (int)started < 0 )
        {
          v94 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v94 + 24) = *(_QWORD *)(v10 + 152);
          *(_QWORD *)(v94 + 32) = started;
          WdLogEvent5_WdError(v94);
          if ( (_DWORD)started == -1071775735 )
          {
            P = 0LL;
            if ( DeviceExtension[1144] )
            {
              DevicePropertyString = DpiGetDevicePropertyString(
                                       *((PDEVICE_OBJECT *)DeviceExtension + 19),
                                       DevicePropertyHardwareID,
                                       PagedPool,
                                       (__int64)&v144);
              v88 = DevicePropertyString;
              if ( DevicePropertyString < 0 )
                goto LABEL_114;
              WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
              if ( P )
                ExFreePoolWithTag(P, 0);
            }
          }
          else if ( (_DWORD)started == -1071774944 && DeviceExtension[1144] )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v95);
            v97[3] = 275LL;
            v97[4] = 26LL;
            v97[5] = v10;
            v98 = (unsigned __int8)byte_1C008E755;
            v97[7] = 0LL;
            v97[6] = v98;
            WdLogEvent5_WdCriticalError(v97);
          }
          goto LABEL_116;
        }
        if ( DeviceExtension[1144] )
        {
          memset(&dword_1C008E9E8, 0, 0x20uLL);
          dword_1C008EA00 = -1;
          memset(&xmmword_1C008EA08, 0, 0x80uLL);
          dword_1C008EA88 = 3;
        }
        if ( !*((_DWORD *)DeviceExtension + 654) && *v27 > 1u )
        {
          v99 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v99 + 24) = (unsigned int)*v27;
          WdLogEvent5_WdWarning(v99);
          *v27 = 1;
        }
        v141 = 1;
        if ( !v8 )
        {
LABEL_61:
          *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension
                                                                                           + 60);
          v64 = *((_DWORD *)DeviceExtension + 59);
          ++*((_DWORD *)DeviceExtension + 69);
          *((_DWORD *)DeviceExtension + 60) = v64;
          *((_DWORD *)DeviceExtension + 59) = 2;
          if ( v8 )
          {
            if ( *(_BYTE *)(v8 + 481) )
            {
              DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v8 + 3792));
              if ( *(_BYTE *)(v8 + 5432) )
              {
                v108 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v8 + 5416), 1u);
                started = v108;
                if ( v108 < 0 )
                {
                  v110 = WdLogNewEntry5_WdError(v109);
                  *(_QWORD *)(v110 + 24) = started;
                  WdLogEvent5_WdError(v110);
                  goto LABEL_66;
                }
              }
            }
            if ( !*(_BYTE *)(v8 + 480) )
            {
              v80 = *(_DWORD *)(v8 + 3412);
              if ( v80 != -1 )
                LPMDisplayRegisterInternalDisplay(*(void **)(v8 + 3792), v80);
            }
            DpiBrightnessStartDevice(a1);
            DXGADAPTER::IsAddapterSessionized(*(DXGADAPTER **)(v8 + 3792), v65, 0LL, &v155);
            *(_QWORD *)(v8 + 5536) = v155;
          }
          DxgkMiracastQueryMiracastSupportInternal(0LL);
LABEL_66:
          v50 = v140;
          v139 = v140;
          goto LABEL_67;
        }
        if ( *(_DWORD *)(v8 + 2608) )
        {
          v31 = DpiFdoEnumChildDevices((__int64)a1);
          started = v31;
          if ( v31 < 0 )
            goto LABEL_131;
        }
        v32 = *(_DWORD *)(v8 + 2612);
        if ( !v32 )
        {
          v33 = v145;
          goto LABEL_29;
        }
        v145 = ExAllocatePoolWithTag(PagedPool, 4LL * v32, 0x74727044u);
        v33 = v145;
        if ( v145 )
        {
          v34 = 0LL;
          if ( !*(_DWORD *)(v8 + 2612) )
            goto LABEL_29;
          while ( 1 )
          {
            v35 = DMgrAcquireGdiViewId((char *)v145 + 4 * v34);
            started = v35;
            if ( v35 < 0 )
              break;
            v34 = (unsigned int)(v34 + 1);
            if ( (unsigned int)v34 >= *(_DWORD *)(v8 + 2612) )
              goto LABEL_29;
          }
          *(_DWORD *)(v8 + 2612) = v34;
          v100 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v100[3] = (unsigned int)v34;
          v100[4] = a1;
          v100[5] = started;
          WdLogEvent5_WdError(v100);
          if ( (_DWORD)v34 )
          {
LABEL_29:
            v37 = (_BYTE *)(v8 + 3800);
            v38 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(v8 + 3800), v146);
            started = v38;
            if ( v38 >= 0 )
            {
              v39 = *(_QWORD *)(v8 + 3792);
              if ( v39 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24));
              }
              else
              {
                v101 = WdLogNewEntry5_WdError(v18);
                *(_QWORD *)(v101 + 24) = -1073741811LL;
                WdLogEvent5_WdError(v101);
              }
              v140 = 1;
              LOBYTE(v18) = *(_BYTE *)(v8 + 3801) ^ (*(_BYTE *)(v8 + 3801) ^ (2 * *(_BYTE *)(v8 + 3801))) & 8;
              *(_BYTE *)(v8 + 3801) = v18;
              if ( (v18 & 4) != 0 && (!*(_QWORD *)(v10 + 1128) || !*(_QWORD *)(v10 + 1136)) )
              {
                v102 = WdLogNewEntry5_WdError(v18);
                *(_QWORD *)(v102 + 24) = started;
                WdLogEvent5_WdError(v102);
                *(_BYTE *)(v8 + 3801) &= ~8u;
                LOBYTE(v18) = *(_BYTE *)(v8 + 3801);
              }
              if ( (v18 & 8) != 0 || *(_QWORD *)(v10 + 208) )
              {
                if ( qword_1C008E768 )
                {
                  if ( *(_BYTE *)(v8 + 2620) && (v18 & 1) != 0 )
                  {
                    v103 = (_BYTE)word_1C008E75C == 0;
LABEL_158:
                    if ( !v103 )
                      goto LABEL_38;
                    goto LABEL_159;
                  }
                }
                else
                {
                  if ( (v18 & 1) != 0 )
                  {
LABEL_159:
                    qword_1C008E768 = (__int64)a1;
                    goto LABEL_38;
                  }
                  if ( DpiHybridInternalPanelOverride() && (*v37 & 0x20) != 0 && *(_BYTE *)(v8 + 1144) )
                  {
                    v103 = (*v37 & 0x40) == 0;
                    goto LABEL_158;
                  }
                }
LABEL_38:
                if ( (*v37 & 0x40) != 0 )
                {
                  v18 = qword_1C008E760;
                  if ( qword_1C008E760 && (struct _DEVICE_OBJECT *)qword_1C008E760 != a1 )
                  {
                    if ( !*(_BYTE *)(v8 + 2620) || (_BYTE)word_1C008E75C )
                    {
                      *v37 &= ~0x40u;
                      goto LABEL_39;
                    }
                    *(_BYTE *)(*(_QWORD *)(qword_1C008E760 + 64) + 3800LL) &= ~0x40u;
                  }
                  qword_1C008E760 = (__int64)a1;
                  HIBYTE(word_1C008E75C) = (*(_BYTE *)(v8 + 3801) & 2) != 0;
                }
LABEL_39:
                if ( !qword_1C008E768 || !qword_1C008E760 || (_BYTE)word_1C008E75C )
                  goto LABEL_40;
                LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(qword_1C008E768 + 64) + 2620LL);
                if ( *(_BYTE *)(*(_QWORD *)(qword_1C008E760 + 64) + 2620LL) )
                {
                  if ( !(_BYTE)v18 )
                    goto LABEL_171;
                }
                else if ( (_BYTE)v18 )
                {
LABEL_171:
                  LOBYTE(word_1C008E75C) = 0;
                  goto LABEL_40;
                }
                LOBYTE(word_1C008E75C) = 1;
                *((_BYTE *)DXGGLOBAL::GetGlobal(v18) + 545) = 1;
LABEL_40:
                v40 = (*v37 & 1) != 0 || (_BYTE)word_1C008E75C && (*v37 & 0x40) != 0;
                v41 = v154;
                *v154 = v40;
                if ( *(_BYTE *)(v8 + 1144) && (*v37 & 1) == 0 )
                {
                  v88 = -1071775740LL;
                  LODWORD(started) = -1071775740;
LABEL_114:
                  v86 = WdLogNewEntry5_WdError(v41);
                  *(_QWORD *)(v86 + 24) = v88;
                  goto LABEL_115;
                }
                if ( !*(_DWORD *)(v8 + 3408)
                  || (v42 = *(const GUID **)(v8 + 48),
                      v43 = *(_QWORD *)(v8 + 40),
                      v157[0] = 67108861LL,
                      v157[1] = 0LL,
                      v157[2] = 0LL,
                      v44 = DpiDxgkDdiDisplayDetectControl(v8, v43, v42, (unsigned int *)v157),
                      started = v44,
                      v44 >= 0) )
                {
                  RelatedObjects = DpiFdoCreateRelatedObjects(
                                     (__int64)a1,
                                     *(_DWORD *)(v8 + 2612),
                                     (__int64)v33,
                                     (__int64)v146);
                  started = RelatedObjects;
                  if ( RelatedObjects >= 0 )
                  {
                    if ( v33 )
                    {
                      ExFreePoolWithTag(v33, 0);
                      v145 = 0LL;
                    }
                    if ( (*v37 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
                    {
                      MonitorInitializeAdapterDone(*(PERESOURCE **)(v8 + 3792), v146, v48, v49);
                      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
                    }
                    v50 = 1;
                    if ( *(_DWORD *)(v8 + 3152) != -1 )
                    {
                      Caps = DpiMiracastDdiMiracastQueryCaps(v8, v47, (GUID *)(v8 + 3144));
                      v79 = Caps;
                      if ( Caps < 0 )
                      {
                        v104 = WdLogNewEntry5_WdEvent(v78, v77);
                        *(_QWORD *)(v104 + 24) = v79;
                        WdLogEvent5_WdEvent(v104);
                        *(_DWORD *)(v8 + 3152) = -1;
                        memset((void *)(v8 + 3080), 0, 0x40uLL);
                      }
                    }
                    v51 = DpiOpenPnpRegistryKey((__int64)a1, 2u, 0x20019u, &Handle);
                    v54 = v51;
                    if ( v51 < 0 )
                    {
                      v105 = WdLogNewEntry5_WdEvent(v53, v52);
                      *(_QWORD *)(v105 + 24) = v54;
                      WdLogEvent5_WdEvent(v105);
                    }
                    else
                    {
                      RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
                      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
                      {
                        v57 = WdLogNewEntry5_WdEvent(v56, v55);
                        *(_QWORD *)(v57 + 24) = DxgkRetrieveStringFromRegistry;
                        WdLogEvent5_WdEvent(v57);
                      }
                      ZwClose(Handle);
                    }
                    v60 = *(_QWORD *)(v8 + 4808);
                    if ( v60 )
                    {
                      v106 = *(_QWORD *)(v8 + 4808);
                      if ( *(_QWORD *)(v60 + 48) && *(_BYTE *)v60 )
                      {
                        *(_BYTE *)v60 = 0;
                        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                        {
                          LODWORD(v138) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 4808) + 2LL);
                          McTemplateK0pt(
                            (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
                            &EventDpiFdoThermalActiveCooling,
                            v59,
                            a1,
                            v138);
                        }
                        v107 = *(_QWORD *)(v8 + 4808);
                        LOBYTE(v58) = *(_BYTE *)(v107 + 2);
                        (*(void (__fastcall **)(_QWORD, __int64))(v107 + 48))(*(_QWORD *)(v107 + 16), v58);
                        v106 = *(_QWORD *)(v8 + 4808);
                      }
                      if ( *(_QWORD *)(v106 + 56) && *(_BYTE *)(v106 + 1) )
                      {
                        *(_BYTE *)(v106 + 1) = 0;
                        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                        {
                          LODWORD(v138) = *(_DWORD *)(*(_QWORD *)(v8 + 4808) + 4LL);
                          McTemplateK0xq((unsigned int)v138, &EventDpiFdoThermalPassiveCooling, v59, a1, v138);
                        }
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v8 + 4808) + 56LL))(
                          *(_QWORD *)(*(_QWORD *)(v8 + 4808) + 16LL),
                          *(unsigned int *)(*(_QWORD *)(v8 + 4808) + 4LL));
                      }
                    }
                    if ( !*(_BYTE *)(v8 + 1147) || (v61 = 0, !*(_BYTE *)(v8 + 480)) )
                      v61 = 1;
                    v62 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v8 + 2672), v61);
                    started = v62;
                    if ( v62 >= 0 )
                    {
                      v139 = 1;
                      v63 = DpiFdoInitializeGpuVirtualization(a1);
                      started = v63;
                      if ( v63 >= 0 )
                        goto LABEL_61;
                    }
                    goto LABEL_118;
                  }
                  goto LABEL_131;
                }
                v86 = WdLogNewEntry5_WdError(v45);
                v87 = *(_QWORD *)(v10 + 1128);
LABEL_113:
                *(_QWORD *)(v86 + 24) = v87;
                *(_QWORD *)(v86 + 32) = started;
                goto LABEL_115;
              }
              started = -1073741735LL;
            }
LABEL_131:
            v86 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v86 + 24) = started;
LABEL_115:
            WdLogEvent5_WdError(v86);
          }
LABEL_116:
          v50 = 0;
          goto LABEL_67;
        }
LABEL_132:
        LODWORD(started) = -1073741670;
        v93 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v93 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v93);
        goto LABEL_116;
      }
      *v24 = 184;
    }
    else
    {
      *v24 = 264;
    }
    v24[1] = v26;
    goto LABEL_17;
  }
LABEL_118:
  v89 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v89 + 24) = started;
  WdLogEvent5_WdError(v89);
LABEL_67:
  v66 = 0;
  if ( v8 )
    v66 = (*(unsigned __int8 *)(v8 + 3800) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v8 + 3800) & 1 | (2
                                                                                       * (*(_BYTE *)(v8 + 480) & 1 | (2 * (*(_BYTE *)(v8 + 1144) & 1 | (2 * (*(_BYTE *)(v8 + 2620) & 1 | (4 * (*(_BYTE *)(v8 + 3800) & 0x84 | *(_BYTE *)(v8 + 3801) & 1 | (2 * (*(_BYTE *)(v8 + 3800) & 0x38 | (*(_DWORD *)(v8 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v8 + 1151) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v111 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v111);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v112 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v112;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v8 )
    {
      if ( v139 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v8 + 2672), 0);
      DpiFdoCleanupGpuVirtualization(v8);
      if ( v50 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v146);
      v114 = v145;
      v115 = 0;
      if ( v145 )
      {
        if ( *(_DWORD *)(v8 + 2612) )
        {
          v116 = (unsigned int *)v145;
          do
          {
            LOBYTE(v113) = 1;
            DMgrReleaseGdiViewId(v116[v115++], v113);
          }
          while ( v115 < *(_DWORD *)(v8 + 2612) );
          v10 = v156;
          v114 = v145;
        }
        ExFreePoolWithTag(v114, 0);
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C008E760 == a1 )
      {
        word_1C008E75C = 0;
        qword_1C008E760 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C008E768 == a1 )
      {
        LOBYTE(word_1C008E75C) = 0;
        qword_1C008E768 = 0LL;
      }
      if ( v140 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v8 + 3792) + 2568LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v117 = *(DXGADAPTER **)(v8 + 3792);
        if ( v117 )
        {
          DXGADAPTER::Stop(v117, 0, 0);
          v117 = *(DXGADAPTER **)(v8 + 3792);
        }
        DxgkReleaseAdapterFdoReference(v117);
        *(_QWORD *)(v8 + 3792) = 0LL;
        *(_QWORD *)(v8 + 3816) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v141 == 1 && v10 )
    {
      if ( !DeviceExtension[1144] )
        goto LABEL_222;
      LODWORD(v144) = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v118 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v119 = v118;
      if ( v118 )
      {
        memset(v118, 0, 0x48uLL);
        v120 = *((_QWORD *)DeviceExtension + 325);
        *v119 = 30;
        v119[10] = 0;
        *((_QWORD *)v119 + 4) = 0LL;
        v119[1] = 72;
        *((_QWORD *)v119 + 1) = 0LL;
        *((_QWORD *)v119 + 2) = 0LL;
        *((_QWORD *)v119 + 3) = 0LL;
        v121 = v144;
        *((_QWORD *)v119 + 8) = v120;
        v119[12] = 98;
        v119[13] = 1;
        *((_QWORD *)v119 + 7) = v121;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v119);
        ExFreePoolWithTag(v119, 0x74727044u);
      }
      if ( (int)v144 < 0 )
      {
LABEL_222:
        if ( v8 )
          *(_BYTE *)(v8 + 3800) &= ~4u;
        DpiDxgkDdiStopDevice(v10, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v142 == 1 )
    {
      v122 = a1->DeviceExtension;
      Parameters.Version = *((_DWORD *)v122 + 322);
      Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v122 + 162);
      *((_QWORD *)v122 + 162) = 0LL;
      IoDisconnectInterruptEx(&Parameters);
    }
    if ( v10 )
      v123 = *(_QWORD *)(v10 + 152);
    else
      v123 = 0LL;
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)started, v66, v123);
  }
  if ( DeviceExtension[1147] && DeviceExtension[1144] )
    NotifyUserMSBDAIfApplicable();
  v67 = 0LL;
  LODWORD(v144) = 0;
  if ( v8 )
  {
    if ( DeviceExtension[1151] )
    {
      v124 = *(_QWORD *)(v8 + 1008);
      if ( v124 )
      {
        v125 = *(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 1064);
        if ( v125 )
        {
          v126 = v125(v124, (unsigned int)started);
          v128 = v126;
          if ( v126 < 0 )
          {
            v129 = WdLogNewEntry5_WdError(v127);
            *(_QWORD *)(v129 + 24) = *(_QWORD *)(v8 + 1064);
            *(_QWORD *)(v129 + 32) = v128;
            WdLogEvent5_WdError(v129);
          }
        }
        v130 = *(__int64 (__fastcall **)(_QWORD, char *))(v8 + 1080);
        if ( v130 )
        {
          v131 = v130(*(_QWORD *)(v8 + 1008), v161);
          v133 = v131;
          if ( v131 < 0 )
          {
            v134 = WdLogNewEntry5_WdError(v132);
            *(_QWORD *)(v134 + 24) = *(_QWORD *)(v8 + 1080);
            *(_QWORD *)(v134 + 32) = v133;
            WdLogEvent5_WdError(v134);
          }
          else
          {
            v67 = v163;
            *(_DWORD *)(v8 + 1156) = v162;
            LODWORD(v144) = v164;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 152), PowerRelations);
      }
    }
    v68 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v69 = v68;
    if ( v68 )
    {
      memset(v68, 0, 0x60uLL);
      v69[10] = 0;
      *((_QWORD *)v69 + 4) = 0LL;
      *v69 = 41;
      v69[1] = 96;
      *((_QWORD *)v69 + 1) = 0LL;
      *((_QWORD *)v69 + 2) = 0LL;
      *((_QWORD *)v69 + 3) = 0LL;
      v69[12] = started;
      v69[13] = (unsigned int)a1 & 0xFFFF00;
      *((_QWORD *)v69 + 7) = *((_QWORD *)DeviceExtension + 325);
      v69[16] = DxgkDiagCalcDuration1us(&v149);
      v69[17] = *(_DWORD *)(v8 + 3808);
      v69[22] = v144;
      v69[18] = v66;
      *((_QWORD *)v69 + 10) = v67;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v69);
      ExFreePoolWithTag(v69, 0x74727044u);
    }
    if ( DeviceExtension[1144] )
    {
      if ( qword_1C008E9E0 )
      {
        v81 = *(_QWORD *)(qword_1C008E9E0 + 64);
        if ( v81 )
        {
          v82 = *(_QWORD *)(v81 + 40);
          if ( v82 )
          {
            if ( *(_QWORD *)(v82 + 408) )
              SendBDDDiagTelemetry(v81);
          }
        }
      }
    }
  }
  else
  {
    v135 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v136 = v135;
    if ( v135 )
    {
      memset(v135, 0, 0x40uLL);
      v137 = DxgkDiagCalcDuration1us(&v149);
      v136[10] = 0;
      *((_QWORD *)v136 + 4) = 0LL;
      *v136 = 6;
      v136[1] = 64;
      *((_QWORD *)v136 + 1) = 0LL;
      *((_QWORD *)v136 + 2) = 0LL;
      *((_QWORD *)v136 + 3) = 0LL;
      v136[12] = 35;
      v136[13] = (unsigned int)a1 & 0xFFFF00;
      v136[14] = v137;
      v136[15] = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v136);
      ExFreePoolWithTag(v136, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
