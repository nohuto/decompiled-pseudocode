/*
 * XREFs of DpiFdoStartAdapter @ 0x1C015F448
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02AE70C (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001E190 (DxgkDiagCalcDuration1us.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C001F2D0 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiHybridInternalPanelOverride @ 0x1C001F3C0 (DpiHybridInternalPanelOverride.c)
 *     SendBDDDiagTelemetry @ 0x1C0022CAC (SendBDDDiagTelemetry.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 *     McTemplateK0pt @ 0x1C0035BE4 (McTemplateK0pt.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C004BA84 (NotifyUserMSBDAIfApplicable.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01427C0 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0157300 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiFdoConnectInterrupt @ 0x1C015DC0C (DpiFdoConnectInterrupt.c)
 *     DpiKsrIsSoftBoot @ 0x1C015DD88 (DpiKsrIsSoftBoot.c)
 *     DpiDxgkDdiStartDevice @ 0x1C015DDA8 (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x1C015DE7C (DxgkAddAdapter.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C0160D7C (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiGetDevicePropertyString @ 0x1C0160DB4 (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01616EC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0168EC0 (DxgkRetrieveStringFromRegistry.c)
 *     MonitorInitializeAdapterDone @ 0x1C0174FB0 (MonitorInitializeAdapterDone.c)
 *     DpiFdoEnumChildDevices @ 0x1C0177880 (DpiFdoEnumChildDevices.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C017FCA8 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C017FD1C (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01EEEA0 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C01F6C98 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02001FC (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02002C4 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02004E8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C024F99C (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C029ED0C (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C029F000 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02A23B8 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02A2FB0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02A951C (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02AF114 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  char v8; // bl
  __int64 v9; // rsi
  char *DeviceExtension; // r14
  __int64 v11; // r12
  int v12; // eax
  struct _LUID *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 started; // r15
  __int64 v17; // rax
  __int64 (__fastcall *v18)(_QWORD, _QWORD, __int64); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  unsigned int v30; // eax
  bool v31; // cf
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  NTSTATUS LocallyUniqueId; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rbx
  __int64 v55; // rax
  unsigned int v56; // ecx
  int v57; // eax
  _DWORD *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int DevicePropertyString; // eax
  _QWORD *v66; // rcx
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rbx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // rax
  _BYTE *v85; // rbx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  bool v90; // zf
  __int64 v91; // r8
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  int RelatedObjects; // eax
  int Caps; // eax
  __int64 v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rdx
  const GUID *v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  int v113; // eax
  NTSTATUS v114; // eax
  unsigned int v115; // edx
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  int v121; // eax
  int v122; // eax
  BOOLEAN v123; // dl
  NTSTATUS v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  int v128; // eax
  __int64 v129; // rax
  unsigned int v130; // ebx
  struct _DEVICE_OBJECT *v131; // rcx
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rdi
  DXGADAPTER *v135; // rcx
  _QWORD *v136; // rax
  _QWORD *v137; // rdi
  __int64 v138; // r8
  int v139; // eax
  __int64 v140; // rdx
  PVOID v141; // rcx
  __int64 DiagnosticInfoArgs; // rax
  __int64 v143; // rdi
  __int64 v144; // rcx
  unsigned int v145; // edx
  unsigned __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rcx
  __int64 (__fastcall *v149)(__int64, _QWORD); // rax
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r12
  __int64 v155; // rax
  __int64 (__fastcall *v156)(_QWORD, __int64 *); // rax
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r12
  __int64 v162; // rax
  _DWORD *v163; // rax
  _DWORD *v164; // r12
  __int64 v165; // r8
  __int64 v166; // rcx
  __int64 v167; // rax
  _DWORD *v168; // rax
  _DWORD *v169; // rbx
  int v170; // eax
  __int64 v171; // r8
  unsigned __int64 v173; // [rsp+20h] [rbp-168h]
  char v174; // [rsp+40h] [rbp-148h]
  char v175; // [rsp+41h] [rbp-147h]
  char v176; // [rsp+42h] [rbp-146h]
  char v177; // [rsp+42h] [rbp-146h]
  char *v178; // [rsp+48h] [rbp-140h]
  char v179; // [rsp+50h] [rbp-138h]
  char v180; // [rsp+51h] [rbp-137h]
  int v181; // [rsp+54h] [rbp-134h] BYREF
  char v182; // [rsp+58h] [rbp-130h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v183; // [rsp+60h] [rbp-128h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-120h] BYREF
  PVOID P; // [rsp+70h] [rbp-118h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-110h] BYREF
  __int64 v187; // [rsp+80h] [rbp-108h] BYREF
  int v188; // [rsp+88h] [rbp-100h] BYREF
  __int64 v189; // [rsp+90h] [rbp-F8h]
  char v190; // [rsp+98h] [rbp-F0h]
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD *v192; // [rsp+B0h] [rbp-D8h]
  __int64 v193; // [rsp+B8h] [rbp-D0h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD v195[3]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v196; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v197; // [rsp+F0h] [rbp-98h]
  __int64 v198; // [rsp+F8h] [rbp-90h]
  GUID v199[2]; // [rsp+100h] [rbp-88h] BYREF
  _DWORD v200[8]; // [rsp+120h] [rbp-68h] BYREF

  v192 = a6;
  v183 = a3;
  memset(v199, 0, 28);
  v8 = a2;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v182 = a2;
  v176 = 0;
  v179 = 0;
  DeviceExtension = (char *)a1->DeviceExtension;
  v175 = 0;
  v174 = 0;
  v180 = 0;
  v32 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v193 = v11;
  v178 = 0LL;
  v187 = MEMORY[0xFFFFF78000000320];
  if ( v32 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                112,
                3) >= 0 )
    {
      if ( a5 )
      {
        v18 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v18 )
        {
          v19 = v18(*((_QWORD *)DeviceExtension + 126), a4, a5);
          started = v19;
          if ( v19 < 0 )
          {
            v23 = WdLogNewEntry5_WdError(v21, v20, v22);
            v24 = *((_QWORD *)DeviceExtension + 131);
LABEL_12:
            *(_QWORD *)(v23 + 24) = v24;
            *(_QWORD *)(v23 + 32) = started;
LABEL_13:
            WdLogEvent5_WdError(v23);
            goto LABEL_184;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    *((_DWORD *)DeviceExtension + 998) = 0;
    v8 = v182;
  }
  v12 = DpiFdoConnectInterrupt(a1);
  started = v12;
  if ( v12 == -1073741275 )
  {
    v17 = WdLogNewEntry5_WdEvent(v14);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    if ( v12 < 0 )
    {
LABEL_15:
      v23 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v23 + 24) = started;
      goto LABEL_13;
    }
    v176 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1156] == 1
      && v8
      && byte_1C00A2755
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      v188 = -1;
      v189 = 0LL;
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
      {
        v190 = 1;
        v188 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v25, &EventProfilerEnter, v26, 8006);
      }
      else
      {
        v190 = 0;
      }
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v188, 8006LL);
      memset(v200, 0, sizeof(v200));
      v200[0] = 18;
      x86BiosCall(16LL, v200);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v27);
      if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v188);
    }
    if ( v9 )
    {
      v30 = *(_DWORD *)(v11 + 28);
      if ( byte_1C00A2755 )
      {
        v31 = v30 < 0x300E;
        v32 = v30 == 12302;
      }
      else
      {
        v31 = v30 < 0x2005;
        v32 = v30 == 8197;
      }
      *(_BYTE *)(v9 + 3904) = *(_BYTE *)(v9 + 3904) & 0xFB | (4 * (!v31 && !v32));
    }
  }
  while ( 1 )
  {
    Interval.QuadPart = 0LL;
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v23 = WdLogNewEntry5_WdError(v34, v33, v35);
      *(_QWORD *)(v23 + 24) = (int)started;
      goto LABEL_13;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 334);
  started = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_15;
  if ( v9 )
  {
    v37 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    v41 = v37;
    if ( v37 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v39, v38, v40);
      *(_QWORD *)(v42 + 24) = v41;
      WdLogEvent5_WdError(v42);
    }
    if ( DpiKsrIsSoftBoot() )
    {
      v43 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      v47 = v43;
      if ( v43 < 0 )
      {
        v48 = WdLogNewEntry5_WdError(v45, v44, v46);
        *(_QWORD *)(v48 + 24) = v47;
        WdLogEvent5_WdError(v48);
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1E0uLL, 0x74727044u);
  v54 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(started) = -1073741670;
    v55 = WdLogNewEntry5_WdLowResource(v51, v50, v52, v53);
    *(_QWORD *)(v55 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v55);
    goto LABEL_184;
  }
  memset(PoolWithTag, 0, 0x1E0uLL);
  v56 = *(_DWORD *)(v11 + 28);
  v57 = 16387;
  if ( v56 <= 0x4003 )
  {
    if ( v56 <= 0x300E )
    {
      v57 = 8197;
      if ( v56 <= 0x2005 )
      {
        *v54 = 184;
      }
      else
      {
        *v54 = 256;
        v57 = 12302;
      }
    }
    else
    {
      *v54 = 264;
    }
  }
  else
  {
    *v54 = 480;
    v57 = *((_DWORD *)DeviceExtension + 681);
  }
  v54[1] = v57;
  *((_QWORD *)v54 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)v54 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)v54 + 4) = DpIndicateChildStatus;
  *((_QWORD *)v54 + 5) = DpMapMemory;
  *((_QWORD *)v54 + 6) = DpQueueDpc;
  *((_QWORD *)v54 + 7) = DpQueryServices;
  *((_QWORD *)v54 + 8) = DpReadDeviceSpace;
  *((_QWORD *)v54 + 9) = DpSynchronizeExecution;
  *((_QWORD *)v54 + 10) = DpUnmapMemory;
  *((_QWORD *)v54 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)v54 + 12) = DpIsDevicePresent;
  *((_QWORD *)v54 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)v54 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)v54 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)v54 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)v54 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)v54 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)v54 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)v54 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)v54 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)v54 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)v54 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)v54 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)v54 + 25) = &DxgSetPowerComponentActiveCB;
  *((_QWORD *)v54 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)v54 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)v54 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)v54 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)v54 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)v54 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)v54 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)v54 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)v54 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)v54 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)v54 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)v54 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)v54 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)v54 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)v54 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)v54 + 1) = a1;
  *((_QWORD *)v54 + 42) = DpIndicateConnectorChange;
  *((_QWORD *)v54 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)v54 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)v54 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)v54 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)v54 + 47) = DxgkFreeContiguousMemoryCB;
  *((_QWORD *)v54 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)v54 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)v54 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)v54 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)v54 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)v54 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)v54 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)v54 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)v54 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)v54 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)v54 + 57) = DxgkSignalEventCB;
  *((_QWORD *)v54 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)v54 + 59) = DpSaveMemoryForHotUpdateCB;
  v199[0].Data1 = 32;
  v58 = DeviceExtension + 2684;
  *(GUID *)&v199[0].Data2 = *((GUID *)DeviceExtension + 166);
  *(_QWORD *)&v199[1].Data2 = *((_QWORD *)DeviceExtension + 334);
  qword_1C00A2A90 = (__int64)KeGetCurrentThread();
  qword_1C00A2A98 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v11,
                   *((const void **)DeviceExtension + 6),
                   v199,
                   (__int64)v54,
                   (unsigned int *)DeviceExtension + 671,
                   (const unsigned int *)DeviceExtension + 670);
  ExFreePoolWithTag(v54, 0x74727044u);
  qword_1C00A2A98 = 0LL;
  qword_1C00A2A90 = 0LL;
  if ( (int)started >= 0 )
  {
    if ( DeviceExtension[1152] )
    {
      memset(&dword_1C00A29E8, 0, 0x20uLL);
      dword_1C00A2A00 = -1;
      memset(&xmmword_1C00A2A08, 0, 0x80uLL);
      dword_1C00A2A88 = 3;
    }
    if ( !*((_DWORD *)DeviceExtension + 672) && *v58 > 1u )
    {
      v70 = WdLogNewEntry5_WdWarning(v60, v59, v61);
      *(_QWORD *)(v70 + 24) = (unsigned int)*v58;
      WdLogEvent5_WdWarning(v70);
      *v58 = 1;
    }
    v179 = 1;
    if ( !v9 )
    {
      v77 = 0LL;
      goto LABEL_170;
    }
    if ( *(_DWORD *)(v9 + 2680) )
    {
      v71 = DpiFdoEnumChildDevices(a1);
      started = v71;
      if ( v71 < 0 )
        goto LABEL_15;
    }
    v72 = *(_DWORD *)(v9 + 2684);
    if ( v72 )
    {
      v178 = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v72, 0x74727044u);
      v77 = (__int64)v178;
      if ( !v178 )
      {
        LODWORD(started) = -1073741670;
        v78 = WdLogNewEntry5_WdLowResource(v74, v73, v75, v76);
        *(_QWORD *)(v78 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v78);
        goto LABEL_185;
      }
      v79 = 0LL;
      if ( *(_DWORD *)(v9 + 2684) )
      {
        while ( 1 )
        {
          v80 = DMgrAcquireGdiViewId(&v178[4 * v79]);
          started = v80;
          if ( v80 < 0 )
            break;
          v79 = (unsigned int)(v79 + 1);
          if ( (unsigned int)v79 >= *(_DWORD *)(v9 + 2684) )
            goto LABEL_83;
        }
        *(_DWORD *)(v9 + 2684) = v79;
        v84 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81, v83);
        v84[3] = (unsigned int)v79;
        v84[4] = a1;
        v84[5] = started;
        WdLogEvent5_WdError(v84);
        if ( !(_DWORD)v79 )
        {
          ExFreePoolWithTag(v178, 0);
          v77 = 0LL;
          v178 = 0LL;
          goto LABEL_185;
        }
      }
    }
    else
    {
      v77 = 0LL;
    }
LABEL_83:
    v85 = (_BYTE *)(v9 + 3904);
    v86 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3904), v183);
    started = v86;
    if ( v86 < 0 )
      goto LABEL_15;
    v87 = *(_QWORD *)(v9 + 3896);
    if ( v87 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v87 + 24));
    }
    else
    {
      v88 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v88 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v88);
    }
    v175 = 1;
    *(_BYTE *)(v9 + 2743) = DXGADAPTER::IsAddapterSessionized(
                              *(DXGADAPTER **)(v9 + 3896),
                              v13,
                              0LL,
                              (unsigned __int64 *)(v9 + 5760));
    LOBYTE(v14) = *(_BYTE *)(v9 + 3905) ^ (*(_BYTE *)(v9 + 3905) ^ (2 * *(_BYTE *)(v9 + 3905))) & 8;
    *(_BYTE *)(v9 + 3905) = v14;
    LOBYTE(v15) = v14;
    if ( (v14 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
    {
      v89 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v89 + 24) = started;
      WdLogEvent5_WdError(v89);
      *(_BYTE *)(v9 + 3905) &= ~8u;
      LOBYTE(v15) = *(_BYTE *)(v9 + 3905);
      LOBYTE(v14) = v15;
    }
    LOBYTE(v13) = v14;
    if ( (*v85 & 1) != 0 && *(int *)(v9 + 3912) >= 0x2000 && !*(_BYTE *)(v9 + 1159) )
    {
      if ( (v15 & 8) != 0 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_HPDWakeFiltering__private_propertyCache,
          17586977LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0081F14,
          0,
          v173);
      }
      else
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_LegacyHPDFiltering__private_propertyCache,
          15689327LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0081F0C,
          1,
          v173);
        *(_BYTE *)(v9 + 3905) |= 0x10u;
      }
      LOBYTE(v13) = *(_BYTE *)(v9 + 3905);
    }
    if ( ((unsigned __int8)v13 & 8) == 0 && !*(_QWORD *)(v11 + 208) )
    {
      started = -1073741735LL;
      goto LABEL_15;
    }
    if ( qword_1C00A2768 )
    {
      if ( *(_BYTE *)(v9 + 2692) && ((unsigned __int8)v13 & 1) != 0 )
      {
        v90 = (_BYTE)word_1C00A275C == 0;
LABEL_110:
        if ( !v90 )
          goto LABEL_112;
        goto LABEL_111;
      }
    }
    else
    {
      if ( ((unsigned __int8)v13 & 1) != 0 )
      {
LABEL_111:
        qword_1C00A2768 = (__int64)a1;
        goto LABEL_112;
      }
      if ( DpiHybridInternalPanelOverride() && (*v85 & 0x20) != 0 && *(_BYTE *)(v9 + 1152) )
      {
        v90 = (*v85 & 0x40) == 0;
        goto LABEL_110;
      }
    }
LABEL_112:
    if ( (*v85 & 0x40) != 0 )
    {
      v14 = qword_1C00A2760;
      if ( qword_1C00A2760 && (struct _DEVICE_OBJECT *)qword_1C00A2760 != a1 )
      {
        if ( !*(_BYTE *)(v9 + 2692) || (_BYTE)word_1C00A275C )
        {
          *v85 &= ~0x40u;
          goto LABEL_119;
        }
        *(_BYTE *)(*(_QWORD *)(qword_1C00A2760 + 64) + 3904LL) &= ~0x40u;
      }
      qword_1C00A2760 = (__int64)a1;
      HIBYTE(word_1C00A275C) = (*(_BYTE *)(v9 + 3905) & 2) != 0;
    }
LABEL_119:
    if ( !qword_1C00A2768 )
      goto LABEL_125;
    v13 = (struct _LUID *)qword_1C00A2760;
    if ( !qword_1C00A2760 || (_BYTE)word_1C00A275C )
      goto LABEL_125;
    LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(qword_1C00A2768 + 64) + 2692LL);
    if ( *(_BYTE *)(*(_QWORD *)(qword_1C00A2760 + 64) + 2692LL) )
    {
      if ( !(_BYTE)v14 )
        goto LABEL_124;
    }
    else if ( (_BYTE)v14 )
    {
LABEL_124:
      LOBYTE(word_1C00A275C) = 0;
LABEL_125:
      v66 = v192;
      if ( v192 )
      {
        *v192 = *(_QWORD *)v85;
        *((_DWORD *)v66 + 2) = *(_DWORD *)(v9 + 3912);
      }
      if ( *(_BYTE *)(v9 + 1152) && (*v85 & 1) == 0 )
      {
        v67 = -1071775740LL;
        LODWORD(started) = -1071775740;
LABEL_59:
        v23 = WdLogNewEntry5_WdError(v66, v13, v15);
        *(_QWORD *)(v23 + 24) = v67;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 3480) )
      {
        v91 = *(_QWORD *)(v9 + 48);
        v92 = *(_QWORD *)(v9 + 40);
        v195[0] = 67108861LL;
        v195[1] = 0LL;
        v195[2] = 0LL;
        v93 = DpiDxgkDdiDisplayDetectControl(v9, v92, v91, (unsigned int *)v195);
        started = v93;
        if ( v93 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v95, v94, v96);
          v24 = *(_QWORD *)(v11 + 1128);
          goto LABEL_12;
        }
      }
      RelatedObjects = DpiFdoCreateRelatedObjects((__int64)a1, *(_DWORD *)(v9 + 2684), v77, (__int64)v183);
      started = RelatedObjects;
      if ( RelatedObjects < 0 )
        goto LABEL_15;
      if ( (*v85 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
      {
        MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 3896), v183);
        DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      }
      v174 = 1;
      if ( *(_DWORD *)(v9 + 3224) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v9, v13, v9 + 3216);
        v100 = Caps;
        if ( Caps < 0 )
        {
          v101 = WdLogNewEntry5_WdEvent(v99);
          *(_QWORD *)(v101 + 24) = v100;
          WdLogEvent5_WdEvent(v101);
          *(_DWORD *)(v9 + 3224) = -1;
          memset((void *)(v9 + 3152), 0, 0x40uLL);
        }
      }
      v102 = DpiOpenPnpRegistryKey((__int64)a1, 2u, 0x20019u, &Handle);
      v104 = v102;
      if ( v102 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          v109 = WdLogNewEntry5_WdEvent(v108);
          *(_QWORD *)(v109 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v109);
        }
        ZwClose(Handle);
      }
      else
      {
        v105 = WdLogNewEntry5_WdEvent(v103);
        *(_QWORD *)(v105 + 24) = v104;
        WdLogEvent5_WdEvent(v105);
      }
      v110 = *(_QWORD *)(v9 + 4936);
      if ( v110 )
      {
        v111 = *(_QWORD *)(v9 + 4936);
        if ( *(_QWORD *)(v110 + 48) && *(_BYTE *)v110 )
        {
          *(_BYTE *)v110 = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v173) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4936) + 2LL);
            McTemplateK0pt(
              (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
              &EventDpiFdoThermalActiveCooling,
              v107,
              a1,
              v173);
          }
          v112 = *(_QWORD *)(v9 + 4936);
          LOBYTE(v106) = *(_BYTE *)(v112 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v112 + 48))(*(_QWORD *)(v112 + 16), v106);
          v111 = *(_QWORD *)(v9 + 4936);
        }
        if ( *(_QWORD *)(v111 + 56) && *(_BYTE *)(v111 + 1) )
        {
          *(_BYTE *)(v111 + 1) = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v173) = *(_DWORD *)(*(_QWORD *)(v9 + 4936) + 4LL);
            McTemplateK0xq((unsigned int)v173, &EventDpiFdoThermalPassiveCooling, v107, a1, v173);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4936) + 56LL))(
            *(_QWORD *)(*(_QWORD *)(v9 + 4936) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v9 + 4936) + 4LL));
        }
      }
      v113 = DpiFdoInitializeGpuVirtualization(a1);
      started = v113;
      if ( v113 < 0 )
        goto LABEL_15;
      if ( *(_BYTE *)(v9 + 482) )
      {
        DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3896));
        if ( *(_BYTE *)(v9 + 5560) )
        {
          v114 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5544), 1u);
          started = v114;
          if ( v114 < 0 )
            goto LABEL_15;
        }
      }
      if ( !*(_BYTE *)(v9 + 480) )
      {
        v115 = *(_DWORD *)(v9 + 3484);
        if ( v115 != -1 )
          LPMDisplayRegisterInternalDisplay(*(void **)(v9 + 3896), v115);
      }
      DpiBrightnessStartDevice(a1);
LABEL_170:
      v116 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
      started = v116;
      if ( v116 >= 0 )
      {
        DxgkMiracastQueryMiracastSupportInternal(0LL);
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v121 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v121;
        *((_DWORD *)DeviceExtension + 59) = 2;
        if ( !v77 || (int)DMgrWriteDeviceCountToRegistry() >= 0 )
        {
          v174 = v175;
          if ( v9 )
          {
            v123 = !*(_BYTE *)(v9 + 1155) || !*(_BYTE *)(v9 + 480);
            v124 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v123);
            started = v124;
            if ( v124 >= 0 )
            {
              v180 = 1;
            }
            else
            {
              v128 = *((_DWORD *)DeviceExtension + 60);
              --*((_DWORD *)DeviceExtension + 69);
              *((_DWORD *)DeviceExtension + 59) = v128;
              *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4
                                                                            * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                            + 244];
              v129 = WdLogNewEntry5_WdError(v126, v125, v127);
              *(_QWORD *)(v129 + 24) = started;
              WdLogEvent5_WdError(v129);
            }
            v174 = v175;
          }
          goto LABEL_184;
        }
        v122 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v122;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                      + 244];
      }
      v120 = WdLogNewEntry5_WdError(v118, v117, v119);
      *(_QWORD *)(v120 + 24) = started;
      WdLogEvent5_WdError(v120);
      v174 = v175;
      goto LABEL_184;
    }
    LOBYTE(word_1C00A275C) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal(v14, qword_1C00A2760) + 545) = 1;
    goto LABEL_125;
  }
  v62 = WdLogNewEntry5_WdError(v60, v59, v61);
  *(_QWORD *)(v62 + 24) = *(_QWORD *)(v11 + 152);
  *(_QWORD *)(v62 + 32) = started;
  WdLogEvent5_WdError(v62);
  if ( (_DWORD)started != -1071775735 )
  {
    if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63);
      v68[3] = 275LL;
      v68[4] = 26LL;
      v68[5] = v11;
      v69 = (unsigned __int8)byte_1C00A2755;
      v68[7] = 0LL;
      v68[6] = v69;
      WdLogEvent5_WdCriticalError(v68);
    }
    goto LABEL_184;
  }
  P = 0LL;
  if ( DeviceExtension[1152] )
  {
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             (__int64)&v181);
    v67 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_184;
    }
    goto LABEL_59;
  }
LABEL_184:
  v77 = (__int64)v178;
LABEL_185:
  v130 = 0;
  if ( v9 )
    v130 = (*(unsigned __int8 *)(v9 + 3904) >> 1) & 0x21 | (2
                                                          * (*(_BYTE *)(v9 + 3904) & 1 | (2
                                                                                        * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3904) & 0x84 | *(_BYTE *)(v9 + 3905) & 1 | (2 * (*(_BYTE *)(v9 + 3904) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1159) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v131 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v131);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v132 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v132;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v180 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      if ( v174 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v183);
      if ( v77 )
      {
        v134 = 0LL;
        if ( *(_DWORD *)(v9 + 2684) )
        {
          do
          {
            LOBYTE(v133) = 1;
            DMgrReleaseGdiViewId(*(unsigned int *)&v178[4 * v134], v133);
            v134 = (unsigned int)(v134 + 1);
          }
          while ( (unsigned int)v134 < *(_DWORD *)(v9 + 2684) );
          v11 = v193;
        }
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00A2760 == a1 )
      {
        qword_1C00A2760 = 0LL;
        word_1C00A275C = 0;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00A2768 == a1 )
      {
        LOBYTE(word_1C00A275C) = 0;
        qword_1C00A2768 = 0LL;
      }
      if ( v175 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3896) + 2600LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v135 = *(DXGADAPTER **)(v9 + 3896);
        if ( v135 && *((_DWORD *)v135 + 44) != 2 && *((_DWORD *)v135 + 44) != 4 )
          DXGADAPTER::Stop(v135, 0, 0);
        DxgkReleaseAdapterFdoReference(*(_QWORD *)(v9 + 3896));
        *(_QWORD *)(v9 + 3896) = 0LL;
        *(_QWORD *)(v9 + 3920) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v179 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_221;
      v181 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v136 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v137 = v136;
      if ( v136 )
      {
        memset(v136, 0, 0x48uLL);
        v139 = v181;
        v137[8] = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)v137 = 30;
        *((_DWORD *)v137 + 1) = 72;
        *((_DWORD *)v137 + 12) = 98;
        *((_DWORD *)v137 + 13) = 1;
        *((_DWORD *)v137 + 14) = v139;
        if ( v9 )
          v140 = *(_QWORD *)(v9 + 5760);
        else
          v140 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v137, v140, v138);
        ExFreePoolWithTag(v137, 0x74727044u);
      }
      if ( v181 < 0 )
      {
LABEL_221:
        if ( v9 )
          *(_BYTE *)(v9 + 3904) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v176 == 1 )
    {
      v141 = a1->DeviceExtension;
      *(_QWORD *)&Parameters.Version = 0LL;
      Parameters.ConnectionContext.Generic = 0LL;
      Parameters.Version = *((_DWORD *)v141 + 340);
      Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v141 + 171);
      *((_QWORD *)v141 + 171) = 0LL;
      IoDisconnectInterruptEx(&Parameters);
    }
    v177 = 1;
    if ( v179 )
      goto LABEL_234;
    if ( !*(_QWORD *)(v11 + 1344) )
      goto LABEL_234;
    DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL);
    v143 = DiagnosticInfoArgs;
    if ( !DiagnosticInfoArgs )
      goto LABEL_234;
    *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
    v144 = *((_QWORD *)DeviceExtension + 19);
    v181 = *(_DWORD *)(DiagnosticInfoArgs + 216);
    if ( (*(int (__fastcall **)(__int64, __int64))(v11 + 1344))(v144, DiagnosticInfoArgs) >= 0 )
    {
      if ( *(_DWORD *)(v143 + 220) > (unsigned int)v181 )
        *(_DWORD *)(v143 + 220) = 0;
      DxgCreateLiveDumpWithDriverBlob(
        *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
        v145,
        *(int *)(v143 + 8),
        (int)started,
        v130,
        *(_QWORD *)(v11 + 152),
        (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v143);
      v177 = 0;
    }
    DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v143);
    if ( v177 )
    {
LABEL_234:
      if ( v11 )
        v146 = *(_QWORD *)(v11 + 152);
      else
        v146 = 0LL;
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)started, v130, v146);
    }
  }
  if ( v178 )
    ExFreePoolWithTag(v178, 0);
  if ( DeviceExtension[1155] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v147 = 0LL;
  v181 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1159] )
    {
      v148 = *(_QWORD *)(v9 + 1008);
      if ( v148 )
      {
        v149 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v149 )
        {
          v150 = v149(v148, (unsigned int)started);
          v154 = v150;
          if ( v150 < 0 )
          {
            v155 = WdLogNewEntry5_WdError(v152, v151, v153);
            *(_QWORD *)(v155 + 24) = *(_QWORD *)(v9 + 1064);
            *(_QWORD *)(v155 + 32) = v154;
            WdLogEvent5_WdError(v155);
          }
        }
        v156 = *(__int64 (__fastcall **)(_QWORD, __int64 *))(v9 + 1080);
        if ( v156 )
        {
          v196 = 0LL;
          v197 = 0LL;
          v198 = 0LL;
          v157 = v156(*(_QWORD *)(v9 + 1008), &v196);
          v161 = v157;
          if ( v157 < 0 )
          {
            v162 = WdLogNewEntry5_WdError(v159, v158, v160);
            *(_QWORD *)(v162 + 24) = *(_QWORD *)(v9 + 1080);
            *(_QWORD *)(v162 + 32) = v161;
            WdLogEvent5_WdError(v162);
          }
          else
          {
            v147 = v197;
            *(_DWORD *)(v9 + 1164) = HIDWORD(v196);
            v181 = v198;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v163 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v164 = v163;
    if ( v163 )
    {
      memset(v163, 0, 0x60uLL);
      *v164 = 41;
      v164[1] = 96;
      v164[13] = (unsigned int)a1 & 0xFFFF00;
      v164[12] = started;
      *((_QWORD *)v164 + 7) = *((_QWORD *)DeviceExtension + 334);
      v164[16] = DxgkDiagCalcDuration1us(&v187);
      v164[17] = *(_DWORD *)(v9 + 3912);
      v164[22] = v181;
      v164[18] = v130;
      *((_QWORD *)v164 + 10) = v147;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v164, *(_QWORD *)(v9 + 5760), v165);
      ExFreePoolWithTag(v164, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C00A29E0 )
      {
        v166 = *(_QWORD *)(qword_1C00A29E0 + 64);
        if ( v166 )
        {
          v167 = *(_QWORD *)(v166 + 40);
          if ( v167 )
          {
            if ( *(_QWORD *)(v167 + 408) )
              SendBDDDiagTelemetry(v166);
          }
        }
      }
    }
  }
  else
  {
    v168 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v169 = v168;
    if ( v168 )
    {
      memset(v168, 0, 0x40uLL);
      v170 = DxgkDiagCalcDuration1us(&v187);
      v169[10] = 0;
      *((_QWORD *)v169 + 4) = 0LL;
      *v169 = 6;
      v169[1] = 64;
      *((_QWORD *)v169 + 1) = 0LL;
      *((_QWORD *)v169 + 2) = 0LL;
      *((_QWORD *)v169 + 3) = 0LL;
      v169[12] = 35;
      v169[13] = (unsigned int)a1 & 0xFFFF00;
      v169[14] = v170;
      v169[15] = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v169, 0x200000000LL, v171);
      ExFreePoolWithTag(v169, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
