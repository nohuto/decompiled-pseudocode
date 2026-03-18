/*
 * XREFs of DxgkEscape @ 0x1C0106440
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F060 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00021E4 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0003710 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0006574 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000658C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006854 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0006870 (-IsBddDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009DB0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000A544 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsEscapeEnabled@DXGADAPTER@@QEBAEXZ @ 0x1C000B928 (-IsEscapeEnabled@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C000B940 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000B954 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B9A8 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C000BD54 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000BFFC (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C000C2E8 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000C354 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023B48 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B5C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0032FF4 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003302C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x1C0040140 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0041F4C (-Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?GetEdidsFromCache@DXGGLOBAL@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0041F7C (-GetEdidsFromCache@DXGGLOBAL@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?VidMmAdapterVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1C0041FA4 (-VidMmAdapterVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0041FE0 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     ?VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C0042018 (-VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIF.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C004B7A4 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C004E348 (DxgkGetAdapterMiracastInfo.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D50C0 (DxgkWriteDiagEntry.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0104860 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?CheckDriverCommonEscape@@YAJPEAVDXGADAPTER@@AEBU_D3DKMT_ESCAPE@@PEAX@Z @ 0x1C0104964 (-CheckDriverCommonEscape@@YAJPEAVDXGADAPTER@@AEBU_D3DKMT_ESCAPE@@PEAX@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0104980 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0106408 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C01EDDC0 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01F04A8 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01F1AB8 (-DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C01F2BAC (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C01F3ABC (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C74 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C020650C (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C02247D0 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C022EEBC (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C023415C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C023AA40 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C023E37C (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F2F4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F414 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F494 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0240028 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0240334 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0240784 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0240A10 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C0240B60 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0240B8C (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C02456FC (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C02457C0 (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     OutputDuplGetDebugInfo @ 0x1C0276778 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0276864 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5E58 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02A6CD0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02AC3D8 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02B2EFC (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02C648C (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(_D3DKMT_ESCAPE *a1)
{
  struct VIDMM_DEVICE *v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  int *v7; // r12
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // r15
  UINT PrivateDriverDataSize; // eax
  size_t v14; // r8
  void *pPrivateDriverData; // rdx
  char *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  DXGADAPTER *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  D3DKMT_HANDLE hAdapter; // edi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  D3DKMT_ESCAPETYPE Type; // eax
  unsigned int v36; // r15d
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  char IsVmProcessOrVmValidation; // al
  const GUID *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  _DXGKARG_ESCAPE *v52; // rdx
  DXGADAPTER *v53; // rcx
  int DebugInfo; // eax
  bool v55; // r9
  char v56; // bl
  size_t v57; // r8
  void *v58; // rcx
  char *v59; // rdx
  __int64 v60; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  size_t v82; // r8
  void *v83; // rcx
  char *v84; // r9
  __int64 v85; // rdx
  unsigned __int64 v86; // r8
  char *v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // eax
  bool v94; // zf
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  struct DXGPROCESS *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  DXGGLOBAL *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  DXGADAPTER *v119; // rbx
  struct DXGGLOBAL *v120; // rax
  __int64 v121; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v123; // rdx
  DXGGLOBAL *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  DXGADAPTER *v127; // rbx
  struct DXGGLOBAL *v128; // rax
  __int64 v129; // rdx
  int LiveDumpWithWdLogs; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rbx
  __int64 v140; // r15
  __int64 v141; // rax
  D3DKMT_HANDLE v142; // edi
  __int64 v143; // r8
  unsigned int v144; // ecx
  __int64 v145; // rcx
  __int64 v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  unsigned __int64 v151; // rcx
  __int64 v152; // rdx
  size_t v153; // r8
  void *v154; // rcx
  char *v155; // r9
  char v156; // di
  unsigned __int8 v157; // r15
  __int64 v158; // rdx
  DXGADAPTER *v159; // rcx
  __int64 v160; // r8
  unsigned __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  _QWORD *v164; // rbx
  _QWORD *v165; // r8
  __int64 v166; // rcx
  unsigned int v167; // eax
  __int64 v168; // rcx
  struct _VIDSCH_GLOBAL *v169; // rdx
  __int64 v170; // rax
  struct _VIDSCH_GLOBAL *v171; // rdx
  int v172; // r8d
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rax
  int v177; // ebx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rcx
  DXGGLOBAL *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // rdx
  __int64 v190; // rcx
  char v191; // di
  unsigned int v192; // ebx
  int v193; // eax
  _QWORD *v194; // r8
  enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE v195; // r9d
  int v196; // eax
  _QWORD *v197; // r8
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rax
  __int64 v202; // rax
  unsigned int v203; // r15d
  unsigned int v204; // esi
  unsigned int v205; // edi
  unsigned int HostProcess; // eax
  int v207; // eax
  __int64 v208; // rax
  _QWORD *v209; // rax
  __int64 v210; // rax
  bool v211; // [rsp+50h] [rbp-588h]
  int v212; // [rsp+58h] [rbp-580h] BYREF
  __int64 v213; // [rsp+60h] [rbp-578h]
  char v214; // [rsp+68h] [rbp-570h]
  __int64 v215; // [rsp+70h] [rbp-568h] BYREF
  __int64 v216; // [rsp+78h] [rbp-560h] BYREF
  _D3DKMT_ESCAPE v217; // [rsp+80h] [rbp-558h] BYREF
  __int128 v218; // [rsp+A0h] [rbp-538h] BYREF
  unsigned __int64 v219; // [rsp+B0h] [rbp-528h] BYREF
  _QWORD v220[2]; // [rsp+B8h] [rbp-520h] BYREF
  char v221; // [rsp+C8h] [rbp-510h]
  __int16 v222; // [rsp+CCh] [rbp-50Ch] BYREF
  __int16 v223; // [rsp+D0h] [rbp-508h] BYREF
  DXGADAPTER *v224; // [rsp+D8h] [rbp-500h] BYREF
  _BYTE v225[24]; // [rsp+E0h] [rbp-4F8h] BYREF
  DXGADAPTER *v226; // [rsp+F8h] [rbp-4E0h]
  __int64 v227; // [rsp+100h] [rbp-4D8h]
  int v228; // [rsp+108h] [rbp-4D0h]
  BOOL IsRemoteConnection; // [rsp+10Ch] [rbp-4CCh]
  union _LARGE_INTEGER Interval; // [rsp+110h] [rbp-4C8h] BYREF
  int *v231; // [rsp+118h] [rbp-4C0h]
  _DXGKARG_ESCAPE v232; // [rsp+120h] [rbp-4B8h] BYREF
  int v233; // [rsp+150h] [rbp-488h] BYREF
  struct DXGADAPTER *v234; // [rsp+158h] [rbp-480h] BYREF
  unsigned __int64 v235; // [rsp+160h] [rbp-478h] BYREF
  unsigned __int64 v236; // [rsp+168h] [rbp-470h] BYREF
  unsigned __int64 v237; // [rsp+170h] [rbp-468h] BYREF
  _BYTE v238[24]; // [rsp+178h] [rbp-460h] BYREF
  _BYTE v239[16]; // [rsp+190h] [rbp-448h] BYREF
  __int64 v240; // [rsp+1A0h] [rbp-438h] BYREF
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A v241; // [rsp+1A8h] [rbp-430h]
  int v242; // [rsp+1ACh] [rbp-42Ch]
  int *v243; // [rsp+1B0h] [rbp-428h]
  UINT v244; // [rsp+1B8h] [rbp-420h]
  int v245; // [rsp+1BCh] [rbp-41Ch]
  __int64 v246; // [rsp+1C0h] [rbp-418h]
  __int64 v247; // [rsp+1C8h] [rbp-410h]
  __int64 v248; // [rsp+1D0h] [rbp-408h] BYREF
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A Value; // [rsp+1D8h] [rbp-400h]
  int v250; // [rsp+1DCh] [rbp-3FCh]
  int *v251; // [rsp+1E0h] [rbp-3F8h]
  UINT v252; // [rsp+1E8h] [rbp-3F0h]
  int v253; // [rsp+1ECh] [rbp-3ECh]
  __int64 v254; // [rsp+1F0h] [rbp-3E8h]
  __int64 v255; // [rsp+1F8h] [rbp-3E0h]
  _BYTE v256[32]; // [rsp+200h] [rbp-3D8h] BYREF
  _BYTE v257[64]; // [rsp+220h] [rbp-3B8h] BYREF
  struct _D3DKMT_VIDSCH_ESCAPE v258; // [rsp+260h] [rbp-378h] BYREF
  struct _D3DKMT_VIDSCH_ESCAPE v259; // [rsp+270h] [rbp-368h] BYREF
  _QWORD v260[18]; // [rsp+280h] [rbp-358h] BYREF
  _QWORD v261[10]; // [rsp+310h] [rbp-2C8h] BYREF
  _BYTE v262[64]; // [rsp+360h] [rbp-278h] BYREF
  _D3DKMT_VIDSCH_ESCAPE v263; // [rsp+3A0h] [rbp-238h] BYREF

  v212 = -1;
  v2 = 0LL;
  v213 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v214 = 1;
    v212 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2016);
  }
  else
  {
    v214 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v212, 2016LL);
  v3 = 0LL;
  v227 = 0LL;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v221 = 0;
  v7 = (int *)&v263;
  memset(&v217, 0, sizeof(v217));
  v12 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v211 = v12;
  if ( !Current )
  {
    v67 = WdLogNewEntry5_WdError(v9, v8, v10);
    LODWORD(v31) = -1073741811;
    *(_QWORD *)(v67 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v68);
    v69 = v214 == 0;
    goto LABEL_140;
  }
  if ( v12 )
  {
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v217 = *a1;
  }
  else
  {
    v217 = *a1;
  }
  if ( v217.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 424LL))() )
    {
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v8);
      if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
      return 3221225506LL;
    }
  }
  else if ( v217.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v72 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)Current + 12) + 416LL))(&v217);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v73);
    if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
    return (unsigned int)v72;
  }
  v218 = 0LL;
  PrivateDriverDataSize = v217.PrivateDriverDataSize;
  if ( v217.PrivateDriverDataSize > 0x200 )
  {
    v7 = (int *)operator new[](v217.PrivateDriverDataSize, 0x4B677844u, PagedPool);
    *(_QWORD *)&v218 = v7;
    PrivateDriverDataSize = v217.PrivateDriverDataSize;
  }
  v231 = v7;
  if ( !v7 )
  {
    v74 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v74 + 24) = v217.PrivateDriverDataSize;
    *(_QWORD *)(v74 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v74);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v75);
    if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
    return 3221225495LL;
  }
  if ( !v12 )
  {
    memmove(v7, v217.pPrivateDriverData, PrivateDriverDataSize);
LABEL_21:
    v18 = *(_QWORD *)&v217.hAdapter;
    goto LABEL_22;
  }
  v14 = PrivateDriverDataSize;
  pPrivateDriverData = v217.pPrivateDriverData;
  v16 = (char *)v217.pPrivateDriverData + PrivateDriverDataSize;
  if ( v16 < v217.pPrivateDriverData || (unsigned __int64)v16 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v7, pPrivateDriverData, v14);
  v18 = *(_QWORD *)&v217.hAdapter;
  if ( v217.hAdapter )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)v239,
      v217.hAdapter,
      (struct _KTHREAD **)Current,
      &v234,
      1);
    if ( v234 && *((_BYTE *)v234 + 185) && ((v217.Type & 0xFFFFFFF3) != 0 || v217.Type == D3DKMT_ESCAPE_DEVICE) )
    {
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v239);
LABEL_163:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v77);
      if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
      return 3221225659LL;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v239);
    goto LABEL_21;
  }
LABEL_22:
  v19 = *(_QWORD *)&v217.Type;
  if ( (*(_BYTE *)&v217.Flags.0 & 0x40) != 0 && (v217.Type || !(_DWORD)v18 || (*(_BYTE *)&v217.Flags.0 & 1) != 0) )
  {
    v78 = WdLogNewEntry5_WdWarning(v18, *(_QWORD *)&v217.Type, v17);
    *(_QWORD *)(v78 + 24) = 1289LL;
    goto LABEL_172;
  }
  if ( v217.Type < D3DKMT_ESCAPE_VIDMM || v217.Type > D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
LABEL_24:
    v20 = 0LL;
    v226 = 0LL;
    v224 = 0LL;
    if ( (_DWORD)v19 == 13 )
    {
      if ( IsCurrentConsoleSession(v18, v19) || IsCurrentProcessAdmin() )
      {
        Global = DXGGLOBAL::GetGlobal(v138, v137);
        DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v219);
      }
      goto LABEL_262;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v238, (struct _KTHREAD **)Current);
    hAdapter = v217.hAdapter;
    if ( !v217.hAdapter )
      goto LABEL_36;
    if ( (*((_BYTE *)Current + 299) & 8) == 0 )
    {
      v25 = (v217.hAdapter >> 6) & 0xFFFFFF;
      if ( (unsigned int)v25 < *((_DWORD *)Current + 56) )
      {
        v21 = (unsigned int)v25;
        v23 = *((_QWORD *)Current + 26);
        v22 = *(unsigned int *)(v23 + 16 * v25 + 8);
        if ( v217.hAdapter >> 30 == ((*(_DWORD *)(v23 + 16 * v25 + 8) >> 5) & 3)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          v21 = 2LL * (unsigned int)v25;
          v22 &= 0x1Fu;
          if ( (_BYTE)v22 == 1 )
          {
            v20 = *(DXGADAPTER **)(v23 + 16LL * (unsigned int)v25);
LABEL_35:
            v226 = v20;
LABEL_36:
            if ( v20 )
            {
              if ( !v217.hDevice )
                goto LABEL_47;
              v27 = (v217.hDevice >> 6) & 0xFFFFFF;
              v28 = v217.hDevice >> 30;
              if ( (unsigned int)v27 < *((_DWORD *)Current + 56) )
              {
                v23 = (unsigned int)v27;
                v29 = *((_QWORD *)Current + 26);
                v21 = *(unsigned int *)(v29 + 16 * v27 + 8);
                if ( (_DWORD)v28 == ((*(_DWORD *)(v29 + 16 * v27 + 8) >> 5) & 3)
                  && (v21 & 0x2000) == 0
                  && (v21 & 0x1F) != 0 )
                {
                  v23 = 2LL * (unsigned int)v27;
                  v21 &= 0x1Fu;
                  if ( (_BYTE)v21 == 3 )
                  {
                    v3 = *(_QWORD *)(v29 + 16LL * (unsigned int)v27);
                    goto LABEL_45;
                  }
                  v30 = WdLogNewEntry5_WdError(v28, v21, v23);
                  *(_QWORD *)(v30 + 24) = 267LL;
                  WdLogEvent5_WdError(v30);
                }
              }
              v3 = 0LL;
LABEL_45:
              if ( !v3 || v20 != *(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL) && v20 != *(DXGADAPTER **)(v3 + 1728) )
              {
                v147 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v21, v23);
                v147[3] = v20;
                v147[4] = v217.hDevice;
LABEL_289:
                WdLogEvent5_WdWarning(v147);
                DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v238);
LABEL_175:
                DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v80);
                if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
                return -1073741811LL;
              }
LABEL_47:
              if ( !v217.hContext )
              {
                v31 = v227;
                goto LABEL_49;
              }
              v62 = (v217.hContext >> 6) & 0xFFFFFF;
              v63 = v217.hContext >> 30;
              if ( (unsigned int)v62 < *((_DWORD *)Current + 56) )
              {
                v23 = (unsigned int)v62;
                v64 = *((_QWORD *)Current + 26);
                v21 = *(unsigned int *)(v64 + 16 * v62 + 8);
                if ( (_DWORD)v63 == ((*(_DWORD *)(v64 + 16 * v62 + 8) >> 5) & 3)
                  && (v21 & 0x2000) == 0
                  && (v21 & 0x1F) != 0 )
                {
                  v23 = 2LL * (unsigned int)v62;
                  v65 = (__int64 *)(v64 + 16LL * (unsigned int)v62);
                  v21 &= 0x1Fu;
                  if ( (_BYTE)v21 == 7 )
                  {
                    v31 = *v65;
LABEL_122:
                    v227 = v31;
                    if ( !v31 || !v3 || v3 != *(_QWORD *)(v31 + 16) )
                    {
                      v147 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v21, v23);
                      v147[3] = v20;
                      v147[4] = v3;
                      v147[5] = v217.hContext;
                      goto LABEL_289;
                    }
LABEL_49:
                    if ( v3 )
                    {
                      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 64));
                      v20 = *(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL);
                      v226 = v20;
                    }
                    if ( v31 )
                      _InterlockedIncrement64((volatile signed __int64 *)(v31 + 32));
                    _InterlockedIncrement64((volatile signed __int64 *)v20 + 3);
                    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v238);
                    if ( *((_DWORD *)v20 + 432) >= 0x5023u )
                    {
                      if ( (*(_BYTE *)&v217.Flags.0 & 0x10) != 0 || (v217.Flags.Value & 0xFFFFFF00) != 0 )
                      {
                        v78 = WdLogNewEntry5_WdWarning(v33, v32, v34);
                        *(_QWORD *)(v78 + 24) = v20;
                        goto LABEL_172;
                      }
                      if ( (*(_BYTE *)&v217.Flags.0 & 0x20) != 0 )
                      {
                        v78 = WdLogNewEntry5_WdWarning(v33, v32, v34);
                        *(_QWORD *)(v78 + 24) = v20;
                        *(_QWORD *)(v78 + 32) = 1753LL;
LABEL_172:
                        WdLogEvent5_WdWarning(v78);
                        goto LABEL_175;
                      }
                    }
                    v220[0] = v20;
                    v220[1] = -1LL;
                    v216 = v3;
                    v215 = v31;
                    LODWORD(v31) = DxgkpGetPairingAdapters(v20, 0LL, &v224, &v237, 0LL, 0LL, 0);
                    if ( (int)v31 >= 0 )
                      DXGADAPTER::ReleaseReferenceNoTracking(v224);
                    if ( v224 && *((_BYTE *)v224 + 185) )
                    {
                      Type = v217.Type;
                      if ( (v217.Type & 0xFFFFFFF7) == 0 )
                        v20 = v224;
                      v226 = v20;
                    }
                    else
                    {
                      Type = v217.Type;
                    }
                    if ( Type == D3DKMT_ESCAPE_DRT_TEST )
                    {
                      if ( !InternalEscapeEnabled() )
                      {
                        v91 = WdLogNewEntry5_WdWarning(v149, v148, v150);
                        *(_QWORD *)(v91 + 24) = 1796LL;
                        WdLogEvent5_WdWarning(v91);
LABEL_215:
                        ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v215);
                        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v216);
                        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v220);
LABEL_216:
                        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
                        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v92);
                        if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                        {
                          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
                          return 3221225506LL;
                        }
                        return 3221225506LL;
                      }
                      if ( v217.PrivateDriverDataSize >= 0xC && v217.PrivateDriverDataSize >= v7[1] && *v7 == 1484026436 )
                      {
                        v151 = v7[2];
                        if ( (unsigned int)v151 <= 0x22 )
                        {
                          v152 = 0x744204000LL;
                          if ( _bittest64(&v152, v151) )
                          {
                            if ( (_DWORD)v151 == 33 || (_DWORD)v151 == 32 )
                            {
                              Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck();
                              v72 = -1073741823;
                            }
                            else
                            {
                              v72 = DxgkDrtTestEscape(v20, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v7, 0LL);
                              if ( v72 >= 0 )
                              {
                                if ( v12 )
                                {
                                  v153 = v217.PrivateDriverDataSize;
                                  v154 = v217.pPrivateDriverData;
                                  v155 = (char *)v217.pPrivateDriverData + v217.PrivateDriverDataSize;
                                  if ( (unsigned __int64)v155 > MmUserProbeAddress || v155 <= v217.pPrivateDriverData )
                                    *(_BYTE *)MmUserProbeAddress = 0;
                                  memmove(v154, v7, v153);
                                }
                                else
                                {
                                  memmove(v217.pPrivateDriverData, v7, v217.PrivateDriverDataSize);
                                }
                              }
                            }
                            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v215);
                            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v216);
                            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v220);
                            goto LABEL_192;
                          }
                        }
                      }
                    }
                    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v260, v20, 0LL);
                    COREACCESS::COREACCESS((COREACCESS *)v257, 0LL);
                    v36 = 0;
                    v228 = 0;
                    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                      (DXGADAPTERSTOPRESETLOCKSHARED *)v225,
                      v20,
                      0);
                    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
                    v38 = *(_QWORD *)&v217.Type;
                    if ( v217.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
                    {
                      COREACCESS::AcquireShared((__int64)v257, 0xFFFFFFFF, 0LL);
                      v38 = *(_QWORD *)&v217.Type;
                    }
                    else
                    {
                      if ( (*(_BYTE *)&v217.Flags.0 & 1) == 0 )
                      {
                        if ( v217.Type == D3DKMT_ESCAPE_DRT_TEST && v7[2] == 23 && (unsigned int)(v7[3] - 2) <= 1 )
                          LOBYTE(v36) = 1;
                        if ( v217.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
                        {
                          if ( (*DXGADAPTER::GetAdapterType(v20, &v233) & 0x10) != 0
                            || *((_DWORD *)v20 + 432) >= 0x5023u && (*(_BYTE *)&v217.Flags.0 & 8) != 0 )
                          {
                            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
                            if ( !DXGADAPTER::IsActive(v20) )
                            {
                              LODWORD(v31) = -1073741130;
                              goto LABEL_104;
                            }
                            goto LABEL_69;
                          }
                          v38 = *(_QWORD *)&v217.Type;
                        }
                        if ( (_BYTE)v36 )
                        {
LABEL_70:
                          v36 = v228;
                          goto LABEL_71;
                        }
                        LODWORD(v31) = COREADAPTERACCESS::AcquireShared((__int64)v260, 0xFFFFFFFFLL, 0LL);
                        if ( (int)v31 < 0 )
                          goto LABEL_104;
LABEL_69:
                        v38 = *(_QWORD *)&v217.Type;
                        goto LABEL_70;
                      }
                      v156 = 0;
                      if ( v217.Type == D3DKMT_ESCAPE_DRIVERPRIVATE
                        || v217.Type == D3DKMT_ESCAPE_VIDSCH && v217.PrivateDriverDataSize >= 0xC && *v7 == v217.Type )
                      {
                        v156 = 1;
                      }
                      v157 = v156;
                      if ( DXGADAPTER::IsRenderAdapter(v20) )
                        v157 = 1;
                      LODWORD(v31) = COREADAPTERACCESS::AcquireExclusive(v260, (unsigned int)v157 + 2);
                      if ( (int)v31 < 0 )
                      {
LABEL_104:
                        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
                        COREACCESS::~COREACCESS((COREACCESS *)v257);
                        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v260);
                        ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v215);
                        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v216);
                        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v220);
                        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
                        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v60);
                        if ( !v214 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                          return (unsigned int)v31;
                        goto LABEL_521;
                      }
                      if ( !v157 && DXGADAPTER::IsRenderAdapter(v20) )
                        ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v20 + 320), 2, 0xFFFFFFFF, 0);
                      v36 = 1;
                      v38 = *(_QWORD *)&v217.Type;
                    }
LABEL_71:
                    if ( v217.hDevice )
                    {
                      if ( *(_DWORD *)(v3 + 464) != 1 )
                      {
                        LODWORD(v31) = -1073741130;
                        goto LABEL_104;
                      }
                      v38 = *(_QWORD *)&v217.Type;
                    }
                    if ( (_DWORD)v38 )
                    {
                      switch ( (int)v38 )
                      {
                        case 1:
                          if ( !InternalEscapeEnabled() )
                          {
                            v163 = WdLogNewEntry5_WdWarning(v162, v158, v160);
                            *(_QWORD *)(v163 + 24) = 2172LL;
                            goto LABEL_337;
                          }
                          v159 = v224;
                          if ( !v224 )
                            goto LABEL_160;
                          if ( *((_BYTE *)v224 + 185) )
                            goto LABEL_162;
                          if ( v3 )
                            v2 = *(struct VIDMM_DEVICE **)(v3 + 648);
                          if ( v217.PrivateDriverDataSize < 0x440 )
                            goto LABEL_349;
                          if ( *v7 != 16 )
                          {
                            DebugInfo = VIDMM_EXPORT::VidMmEscape(
                                          *(VIDMM_EXPORT **)(*((_QWORD *)v224 + 320) + 544LL),
                                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v224 + 320) + 552LL),
                                          v2,
                                          (struct _D3DKMT_VIDMM_ESCAPE *)v7,
                                          v36);
                            goto LABEL_95;
                          }
                          v164 = v7 + 6;
                          LODWORD(v31) = DxgkpEscapeVidMmDelayExecution(
                                           (struct DXGDEVICE *)v3,
                                           v7[3],
                                           v7[2],
                                           v7[4],
                                           (unsigned __int64 *)v7 + 3);
                          if ( (int)v31 < 0 )
                            goto LABEL_96;
                          v227 = (__int64)v217.pPrivateDriverData;
                          v55 = v211;
                          if ( !v211 )
                          {
                            *((_QWORD *)v217.pPrivateDriverData + 3) = *v164;
                            goto LABEL_97;
                          }
                          v165 = (char *)v217.pPrivateDriverData + 24;
                          if ( (char *)v217.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                            v165 = (_QWORD *)MmUserProbeAddress;
                          *v165 = *v164;
                          v56 = 0;
                          goto LABEL_98;
                        case 2:
                          if ( !v217.pPrivateDriverData )
                          {
LABEL_369:
                            v168 = 0LL;
LABEL_371:
                            DebugInfo = TdrDbgCtrl(v168);
                            goto LABEL_95;
                          }
                          if ( v217.PrivateDriverDataSize < 4 )
                            goto LABEL_349;
                          switch ( *v7 )
                          {
                            case 0:
                              goto LABEL_369;
                            case 1:
                              v168 = 2LL;
                              goto LABEL_371;
                            case 2:
                              v168 = 1LL;
                              goto LABEL_371;
                            case 3:
                              v168 = 3LL;
                              goto LABEL_371;
                            case 4:
                            case 5:
                              if ( !v224 )
                              {
                                v170 = WdLogNewEntry5_WdTrace(v38, 0x1C0000000uLL);
                                *(_QWORD *)(v170 + 24) = v224;
                                goto LABEL_516;
                              }
                              if ( *((_BYTE *)v224 + 185) )
                                goto LABEL_516;
                              LODWORD(v31) = TdrDbgCtrl(4LL);
                              if ( (int)v31 >= 0 )
                              {
                                v169 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v224 + 320) + 528LL);
                                v259.4 = 0LL;
                                v259.Type = D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL;
                                v259.PreemptionControl = *v7;
                                DebugInfo = VIDSCH_EXPORT::VidSchEscape(
                                              *(VIDSCH_EXPORT **)(*((_QWORD *)v224 + 320) + 520LL),
                                              v169,
                                              &v259);
                                goto LABEL_95;
                              }
                              goto LABEL_96;
                            case 6:
                              v168 = 5LL;
                              goto LABEL_371;
                            case 7:
                              v168 = 6LL;
                              goto LABEL_371;
                            case 8:
                              if ( v217.PrivateDriverDataSize < 8 )
                              {
                                LODWORD(v31) = -1073741811;
                                goto LABEL_129;
                              }
                              if ( !v224 )
                              {
                                *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, 0x1C0000000uLL) + 24) = v20;
                                goto LABEL_516;
                              }
                              if ( *((_BYTE *)v224 + 185) )
                                goto LABEL_516;
                              LODWORD(v31) = TdrDbgCtrl(4LL);
                              if ( (int)v31 >= 0 )
                              {
                                v171 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v224 + 320) + 528LL);
                                v258.4 = 0LL;
                                v258.Type = D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL;
                                v258.4 = *(union _D3DKMT_VIDSCH_ESCAPE::$F07540163959E7F591B75ADEBC483023 *)v7;
                                DebugInfo = VIDSCH_EXPORT::VidSchEscape(
                                              *(VIDSCH_EXPORT **)(*((_QWORD *)v224 + 320) + 520LL),
                                              v171,
                                              &v258);
                                goto LABEL_95;
                              }
                              break;
                            default:
                              goto LABEL_349;
                          }
                          goto LABEL_96;
                        case 3:
                          if ( !InternalEscapeEnabled() )
                          {
                            v163 = WdLogNewEntry5_WdWarning(v166, v158, v160);
                            *(_QWORD *)(v163 + 24) = 2252LL;
LABEL_337:
                            WdLogEvent5_WdWarning(v163);
                            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
                            COREACCESS::~COREACCESS((COREACCESS *)v257);
                            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v260);
                            goto LABEL_215;
                          }
                          v159 = v224;
                          if ( !v224 )
                            goto LABEL_160;
                          if ( *((_BYTE *)v224 + 185) )
                            goto LABEL_162;
                          if ( v217.PrivateDriverDataSize < 0xC )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( *v7 == 2 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( *v7 != 3 )
                          {
                            DebugInfo = VIDSCH_EXPORT::VidSchEscape(
                                          *(VIDSCH_EXPORT **)(*((_QWORD *)v224 + 320) + 520LL),
                                          *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v224 + 320) + 528LL),
                                          (struct _D3DKMT_VIDSCH_ESCAPE *)v7);
                            goto LABEL_95;
                          }
                          if ( !v36 )
                          {
LABEL_349:
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          v167 = 5000000;
                          if ( (unsigned int)v7[1] < 0x4C4B40 )
                            v167 = v7[1];
                          Interval.QuadPart = -(__int64)v167;
                          KeDelayExecutionThread(0, 0, &Interval);
                          LODWORD(v31) = 0;
                          v55 = v211;
                          goto LABEL_99;
                        case 4:
                          if ( v217.PrivateDriverDataSize < 0xC || !v3 )
                            goto LABEL_349;
                          DebugInfo = DXGDEVICE::Escape((DXGDEVICE *)v3, (struct _D3DKMT_DEVICE_ESCAPE *)v7);
                          goto LABEL_95;
                        case 5:
                          if ( !DXGADAPTER::IsDisplayAdapter(v20) )
                            goto LABEL_160;
                          if ( v217.PrivateDriverDataSize < 0x80 )
                            goto LABEL_349;
                          v161 = *((_QWORD *)v7 + 1);
                          if ( v161 > 0x19000 || v217.PrivateDriverDataSize != v161 + 127 && v161 )
                            goto LABEL_349;
                          DebugInfo = DmmEscape(v20, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v7);
                          goto LABEL_95;
                        case 6:
                          if ( v217.PrivateDriverDataSize < 8 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          DebugInfo = DxgDbgTakeSnapshot(v7 + 1, v217.PrivateDriverDataSize - 4, (unsigned int *)v7);
                          goto LABEL_95;
                        case 8:
                          if ( v217.PrivateDriverDataSize < 0xC
                            || v217.PrivateDriverDataSize < v7[1]
                            || *v7 != 1484026436 )
                          {
                            goto LABEL_349;
                          }
                          DebugInfo = DxgkDrtTestEscape(
                                        v20,
                                        (struct _D3DKMT_DRT_ESCAPE_HEAD *)v7,
                                        (struct COREADAPTERACCESS *)v260);
                          goto LABEL_95;
                        case 9:
                          v172 = 1;
                          goto LABEL_399;
                        case 10:
                          if ( !DXGADAPTER::IsDisplayAdapter(v20) )
                            goto LABEL_160;
                          if ( v217.PrivateDriverDataSize < 0x18 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( v217.PrivateDriverDataSize != *v7 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( IsRemoteConnection )
                            DebugInfo = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v7);
                          else
                            DebugInfo = OutputDuplGetDebugInfo(v20, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v7);
                          goto LABEL_95;
                        case 11:
                          if ( !DXGADAPTER::IsDisplayAdapter(v20) )
                            goto LABEL_160;
                          if ( v217.PrivateDriverDataSize < 8 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( v217.PrivateDriverDataSize != (unsigned int)v7[1] + 8LL )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( IsRemoteConnection )
                            DebugInfo = OutputDuplGetDiagnosticBuffer(0LL, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v7);
                          else
                            DebugInfo = OutputDuplGetDiagnosticBuffer(v20, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v7);
                          goto LABEL_95;
                        case 12:
                          if ( !DXGADAPTER::IsBddDevice(v20) || DXGADAPTER::IsBddFallbackDriver(v20) )
                          {
                            LODWORD(v31) = -1071775742;
                            goto LABEL_129;
                          }
                          v250 = 0;
                          v253 = 0;
                          v255 = 0LL;
                          v248 = 0LL;
                          v254 = 0LL;
                          Value = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)v217.Flags.Value;
                          v252 = v217.PrivateDriverDataSize;
                          v251 = v7;
                          v52 = (_DXGKARG_ESCAPE *)&v248;
                          goto LABEL_93;
                        case 13:
                          if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
                          {
                            v175 = WdLogNewEntry5_WdAssertion(v174, v173);
                            *(_QWORD *)(v175 + 24) = 2582LL;
                            WdLogEvent5_WdAssertion(v175);
                          }
                          v242 = 0;
                          v245 = 0;
                          v247 = 0LL;
                          v240 = 0LL;
                          v246 = 0LL;
                          v241 = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)v217.Flags.Value;
                          v244 = v217.PrivateDriverDataSize;
                          v243 = v7;
                          v52 = (_DXGKARG_ESCAPE *)&v240;
                          v53 = 0LL;
                          goto LABEL_94;
                        case 14:
                          if ( v217.PrivateDriverDataSize != 8 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( !*v7 )
                          {
                            v177 = v7[1];
                            *((_BYTE *)DXGGLOBAL::GetGlobal(v38, 0x1C0000000LL) + 976) = v177 != 0;
                            LODWORD(v31) = 0;
                            v55 = v211;
                            goto LABEL_99;
                          }
                          if ( *v7 != 15 )
                          {
                            v176 = WdLogNewEntry5_WdAssertion(v38, 0x1C0000000uLL);
                            *(_QWORD *)(v176 + 24) = *v7;
                            WdLogEvent5_WdAssertion(v176);
                            LODWORD(v31) = -1073741811;
                            goto LABEL_96;
                          }
                          if ( !DXGADAPTER::IsDisplayAdapter(v20) )
                          {
LABEL_160:
                            v76 = WdLogNewEntry5_WdError(v159, v158, v160);
                            *(_QWORD *)(v76 + 24) = v20;
                            *(_QWORD *)(v76 + 32) = -1073741637LL;
                            goto LABEL_161;
                          }
                          DebugInfo = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                        *((ADAPTER_DISPLAY **)v20 + 319),
                                        v7[1]);
                          goto LABEL_95;
                        case 15:
                          if ( !DXGADAPTER::IsDisplayAdapter(v20) )
                            goto LABEL_160;
                          if ( v217.PrivateDriverDataSize < 8 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( v217.PrivateDriverDataSize < 44 * (unsigned __int64)(unsigned int)v7[1] + 8 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          DebugInfo = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                        *((ADAPTER_DISPLAY **)v20 + 319),
                                        (struct _D3DKMT_DISPLAYMODELIST *)v7);
                          goto LABEL_95;
                        case 16:
                          v55 = v211;
                          if ( v217.PrivateDriverDataSize < 4 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_130;
                          }
                          *v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 24) + 64LL) + 2720LL);
                          LODWORD(v31) = 0;
                          goto LABEL_99;
                        case 17:
                          if ( (*(_BYTE *)&v217.Flags.0 & 1) == 0 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( v217.PrivateDriverDataSize < 0x60C )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( DXGPROCESS::IsRemoteConnection(Current) )
                          {
                            LODWORD(v31) = -1073741790;
                            v181 = WdLogNewEntry5_WdWarning(v179, v178, v180);
                            *(_QWORD *)(v181 + 24) = v20;
                            *(_QWORD *)(v181 + 32) = -1073741790LL;
                            WdLogEvent5_WdWarning(v181);
                            goto LABEL_96;
                          }
                          DebugInfo = DpiBrightnessEscape(
                                        *((struct _DEVICE_OBJECT **)v20 + 24),
                                        (struct _D3DKMT_BRIGHTNESS_INFO *)v7);
                          goto LABEL_95;
                        case 18:
                          if ( v217.PrivateDriverDataSize < 4 )
                            goto LABEL_349;
                          v182 = (unsigned int)*v7 + 4LL;
                          if ( v217.PrivateDriverDataSize != v182 )
                            goto LABEL_349;
                          if ( !IsCurrentConsoleSession(v182, 0x1C0000000LL) && !IsCurrentProcessAdmin() )
                          {
                            memset(v7, 0, v217.PrivateDriverDataSize);
                            goto LABEL_96;
                          }
                          v185 = DXGGLOBAL::GetGlobal(v184, v183);
                          DebugInfo = DXGGLOBAL::GetEdidsFromCache(v185, (struct _D3DKMT_DXGK_DIAGNOSTICS *)v7);
                          goto LABEL_95;
                        case 19:
                          if ( v217.PrivateDriverDataSize < 0x10 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( !DXGADAPTER::IsDiagnosticAllowed(v20) )
                            goto LABEL_455;
                          v7[1] &= 7u;
                          DxgkGetAdapterBrightnessInfo(*((_QWORD *)v20 + 24), v7);
                          LODWORD(v31) = 0;
                          v55 = v211;
                          goto LABEL_99;
                        case 21:
                          if ( v217.PrivateDriverDataSize < 8 || !v224 || !v3 )
                            goto LABEL_174;
                          v191 = 0;
                          if ( (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x61C8ED7) == 0 )
                            goto LABEL_471;
                          if ( (*(&DxgkControlGuid_Context + 3) & 0xFFFFFFFFF9E37128uLL) != 0 )
                            goto LABEL_471;
                          if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x4000) == 0 )
                            goto LABEL_471;
                          v192 = 0;
                          if ( !(unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v224) )
                            goto LABEL_471;
                          while ( !*(_QWORD *)(352LL * v192
                                             + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v224 + 320) + 16LL) + 2440LL)
                                             + 32) )
                          {
                            if ( ++v192 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v224) )
                              goto LABEL_471;
                          }
                          v191 = 1;
LABEL_471:
                          *(_BYTE *)(v3 + 1744) = v191;
                          *(_BYTE *)v7 = v191;
                          v7[1] = 0;
                          LODWORD(v31) = 0;
                          v55 = v211;
                          goto LABEL_99;
                        case 23:
                          if ( v217.PrivateDriverDataSize != 32 )
                          {
                            LODWORD(v31) = -1073741811;
                            goto LABEL_129;
                          }
                          if ( !DXGADAPTER::IsDiagnosticAllowed(v20) )
                          {
LABEL_455:
                            v31 = WdLogNewEntry5_WdWarning(v187, v186, v188);
                            *(_QWORD *)(v31 + 24) = v20;
                            *(_QWORD *)(v31 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v190, v189);
                            WdLogEvent5_WdWarning(v31);
                            LODWORD(v31) = -1073741790;
                            goto LABEL_129;
                          }
                          DxgkGetAdapterMiracastInfo(*((_QWORD *)v20 + 24), v7);
                          LODWORD(v31) = 0;
                          v55 = v211;
                          goto LABEL_99;
                        case 28:
                          if ( v217.PrivateDriverDataSize < 0x20 )
                            goto LABEL_174;
                          v193 = v7[3];
                          if ( v193 > 1 || *(_QWORD *)v7 )
                            goto LABEL_174;
                          v194 = v7 + 4;
                          if ( !v193 )
                          {
                            *v194 = 0LL;
                            *((_QWORD *)v7 + 3) = 0LL;
                          }
                          v195 = v7[2];
                          if ( (unsigned int)(v195 - 1000) > 1 )
                            goto LABEL_174;
                          if ( !v224 )
                          {
                            v76 = WdLogNewEntry5_WdError(0LL, 0x1C0000000uLL, v194);
                            *(_QWORD *)(v76 + 24) = 2899LL;
                            goto LABEL_161;
                          }
                          if ( *((_BYTE *)v224 + 185) )
                            goto LABEL_162;
                          DebugInfo = VIDMM_EXPORT::VidMmProcessVerifierOption(
                                        *(VIDMM_EXPORT **)(*((_QWORD *)v224 + 320) + 544LL),
                                        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v224 + 320) + 552LL),
                                        Current,
                                        v7[3],
                                        v195,
                                        (union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *)v7 + 1);
                          goto LABEL_95;
                        case 29:
                          if ( v217.PrivateDriverDataSize < 0x20 )
                            goto LABEL_174;
                          v196 = v7[1];
                          if ( v196 > 1 )
                            goto LABEL_174;
                          v197 = v7 + 2;
                          if ( !v196 )
                          {
                            *v197 = 0LL;
                            *((_QWORD *)v7 + 2) = 0LL;
                            *((_QWORD *)v7 + 3) = 0LL;
                          }
                          if ( (unsigned int)(*v7 - 1000) > 1 )
                            goto LABEL_174;
                          if ( !v224 )
                          {
                            v76 = WdLogNewEntry5_WdError(0LL, 0x1C0000000uLL, v197);
                            *(_QWORD *)(v76 + 24) = 2953LL;
                            goto LABEL_161;
                          }
                          if ( *((_BYTE *)v224 + 185) )
                            goto LABEL_162;
                          DebugInfo = VIDMM_EXPORT::VidMmAdapterVerifierOption(
                                        *(VIDMM_EXPORT **)(*((_QWORD *)v224 + 320) + 544LL),
                                        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v224 + 320) + 552LL),
                                        v7[1],
                                        *v7,
                                        (union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *)(v7 + 2));
                          goto LABEL_95;
                        case 31:
                          if ( v217.PrivateDriverDataSize != 4 )
                            goto LABEL_494;
                          if ( !DXGADAPTER::IsDisplayOnlyAdapter(v20) )
                            goto LABEL_173;
                          DebugInfo = ADAPTER_DISPLAY::DodSetDirtyRectMode(*((ADAPTER_DISPLAY **)v20 + 319), *v7);
                          goto LABEL_95;
                        case 34:
                          v172 = 0;
LABEL_399:
                          v56 = 1;
                          LODWORD(v31) = GetDiagnosticsBuffer(
                                           (struct _D3DKMT_DXGK_DIAGNOSTICS *)v7,
                                           v217.PrivateDriverDataSize,
                                           v172);
                          v55 = v211;
                          goto LABEL_98;
                        case 36:
                          if ( !DXGADAPTER::IsFullWDDMAdapter(v20) )
                          {
LABEL_173:
                            v79 = WdLogNewEntry5_WdWarning(v199, v198, v200);
                            *(_QWORD *)(v79 + 24) = v20;
                            WdLogEvent5_WdWarning(v79);
                            goto LABEL_174;
                          }
                          DebugInfo = ADAPTER_DISPLAY::ReportDisplayState(
                                        *((ADAPTER_DISPLAY **)v20 + 319),
                                        (struct _D3DKMT_DXGK_DIAGNOSTICS *)v7,
                                        v217.PrivateDriverDataSize);
                          goto LABEL_95;
                        case 37:
                          if ( !v217.PrivateDriverDataSize )
                          {
LABEL_494:
                            v201 = WdLogNewEntry5_WdError(v38, 0x1C0000000uLL, v37);
                            *(_QWORD *)(v201 + 24) = v217.PrivateDriverDataSize;
                            WdLogEvent5_WdError(v201);
LABEL_174:
                            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
                            COREACCESS::~COREACCESS((COREACCESS *)v257);
                            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v260);
                            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v215);
                            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v216);
                            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v220);
                            goto LABEL_175;
                          }
                          if ( v224 )
                          {
                            if ( !*((_BYTE *)v224 + 185) )
                            {
                              *(_BYTE *)v7 = *(_BYTE *)(*((_QWORD *)v224 + 320) + 1512LL);
                              LODWORD(v31) = 0;
                              v55 = v211;
LABEL_99:
                              if ( v55 )
                              {
                                v57 = v217.PrivateDriverDataSize;
                                v58 = v217.pPrivateDriverData;
                                v59 = (char *)v217.pPrivateDriverData + v217.PrivateDriverDataSize;
                                if ( (unsigned __int64)v59 > MmUserProbeAddress || v59 <= v217.pPrivateDriverData )
                                  *(_BYTE *)MmUserProbeAddress = 0;
                                memmove(v58, v7, v57);
                              }
                              else
                              {
                                memmove(v217.pPrivateDriverData, v7, v217.PrivateDriverDataSize);
                              }
                              goto LABEL_104;
                            }
                          }
                          else
                          {
                            v76 = WdLogNewEntry5_WdError(0LL, 0x1C0000000uLL, v37);
                            *(_QWORD *)(v76 + 24) = 3024LL;
LABEL_161:
                            WdLogEvent5_WdError(v76);
                          }
LABEL_162:
                          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
                          COREACCESS::~COREACCESS((COREACCESS *)v257);
                          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v260);
                          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v215);
                          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v216);
                          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v220);
                          goto LABEL_163;
                        default:
                          LODWORD(v31) = -1073741811;
                          v202 = WdLogNewEntry5_WdWarning(v38, 0x1C0000000uLL, v37);
                          *(_QWORD *)(v202 + 24) = v217.Type;
                          WdLogEvent5_WdWarning(v202);
                          goto LABEL_96;
                      }
                    }
                    memset(&v232, 0, sizeof(v232));
                    if ( (*(_BYTE *)&v217.Flags.0 & 0x40) != 0 )
                    {
                      DebugInfo = DxgkpDriverKnownEscape(Current, v7, v217.PrivateDriverDataSize);
LABEL_95:
                      LODWORD(v31) = DebugInfo;
                      goto LABEL_96;
                    }
                    if ( *((_BYTE *)v20 + 185) )
                    {
                      if ( v227 )
                        v203 = *(_DWORD *)(v227 + 28);
                      else
                        v203 = 0;
                      if ( v3 )
                        v204 = *(_DWORD *)(v3 + 336);
                      else
                        v204 = 0;
                      v205 = *((_DWORD *)v20 + 1052);
                      HostProcess = DXGPROCESS::GetHostProcess(Current);
                      v207 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                               (DXGADAPTER *)((char *)v20 + 4144),
                               HostProcess,
                               v205,
                               v204,
                               v203,
                               D3DKMT_ESCAPE_DRIVERPRIVATE,
                               v217.Flags,
                               v217.PrivateDriverDataSize,
                               (unsigned __int8 *)v7);
                      v31 = v207;
                      if ( v207 >= 0 )
                      {
LABEL_96:
                        v55 = v211;
LABEL_97:
                        v56 = 0;
LABEL_98:
                        if ( (int)v31 >= 0 )
                          goto LABEL_99;
LABEL_131:
                        if ( !v56 || (_DWORD)v31 != -2147483643 )
                          goto LABEL_104;
                        goto LABEL_99;
                      }
LABEL_511:
                      v208 = WdLogNewEntry5_WdError(v45, v44, v46);
                      *(_QWORD *)(v208 + 24) = v31;
                      WdLogEvent5_WdError(v208);
                      goto LABEL_96;
                    }
                    if ( DXGADAPTER::IsEscapeEnabled(v20) )
                    {
                      if ( !v217.PrivateDriverDataSize || !v217.pPrivateDriverData )
                      {
                        v209 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
                        v209[3] = v217.PrivateDriverDataSize;
                        v209[4] = v217.pPrivateDriverData;
                        LODWORD(v31) = -1073741811;
                        v209[5] = -1073741811LL;
                        WdLogEvent5_WdWarning(v209);
                        goto LABEL_129;
                      }
                      if ( v3 )
                        v42 = *(void **)(v3 + 472);
                      else
                        v42 = 0LL;
                      v232.hDevice = v42;
                      if ( v227 )
                        v2 = *(struct VIDMM_DEVICE **)(v227 + 184);
                      v232.hContext = v2;
                      v232.Flags.Value = v217.Flags.Value;
                      if ( DXGADAPTER::IsSoftGPU(v20)
                        || *((_DWORD *)v20 + 71) != 4098
                        || (unsigned int)IsAMDDriverEscapeAllowed(v7, v217.PrivateDriverDataSize) )
                      {
                        v43 = CheckDriverCommonEscape(v20, &v217, v7);
                        v31 = v43;
                        if ( v43 >= 0 )
                        {
                          v232.Flags.Value &= ~0x10u;
                          IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(Current, v20);
                          v232.Flags.Value ^= (*(_BYTE *)&v232.Flags.0 ^ (unsigned __int8)(32 * IsVmProcessOrVmValidation)) & 0x20;
                          v232.PrivateDriverDataSize = v217.PrivateDriverDataSize;
                          v232.pPrivateDriverData = v7;
                          if ( DXGADAPTER::IsRenderAdapter(v20) )
                          {
                            v49 = *((_QWORD *)v20 + 320);
                            if ( v49 )
                            {
                              v50 = v49 + 56;
                              KeEnterCriticalRegion();
                              ExAcquirePushLockSharedEx(v50, 0LL);
                              v51 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v20 + 52));
                              if ( v51 )
                                v232.hKmdProcessHandle = *(HANDLE *)(v51 + 16);
                              ExReleasePushLockSharedEx(v50, 0LL);
                              KeLeaveCriticalRegion();
                            }
                          }
                          v52 = &v232;
LABEL_93:
                          v53 = v20;
LABEL_94:
                          DebugInfo = DXGADAPTER::DdiEscape(v53, v52, v48);
                          goto LABEL_95;
                        }
                        goto LABEL_511;
                      }
                    }
                    else
                    {
                      v210 = WdLogNewEntry5_WdWarning(v40, v39, v41);
                      *(_QWORD *)(v210 + 24) = v20;
                      *(_QWORD *)(v210 + 32) = -1073741637LL;
                      WdLogEvent5_WdWarning(v210);
                    }
LABEL_516:
                    LODWORD(v31) = -1073741637;
LABEL_129:
                    v55 = v211;
LABEL_130:
                    v56 = 0;
                    goto LABEL_131;
                  }
                  v66 = WdLogNewEntry5_WdError(v63, v21, v23);
                  *(_QWORD *)(v66 + 24) = 267LL;
                  WdLogEvent5_WdError(v66);
                }
              }
              v31 = 0LL;
              goto LABEL_122;
            }
            v70 = WdLogNewEntry5_WdWarning(v22, v21, v23);
            *(_QWORD *)(v70 + 24) = v217.hAdapter;
            LODWORD(v31) = -1073741811;
            *(_QWORD *)(v70 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v70);
            DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v238);
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v71);
            v69 = v214 == 0;
LABEL_140:
            if ( v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
              return (unsigned int)v31;
LABEL_521:
            McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
            return (unsigned int)v31;
          }
          v26 = WdLogNewEntry5_WdError(v22, v21, v23);
          *(_QWORD *)(v26 + 24) = 267LL;
          WdLogEvent5_WdError(v26);
        }
      }
      v20 = 0LL;
      goto LABEL_35;
    }
    v139 = *((_QWORD *)Current + 54);
    v140 = v139 + 184;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v139 + 184));
    v141 = (hAdapter >> 6) & 0xFFFFFF;
    v142 = hAdapter >> 30;
    if ( (unsigned int)v141 < *(_DWORD *)(v139 + 224) )
    {
      v143 = *(_QWORD *)(v139 + 208);
      v144 = *(_DWORD *)(v143 + 16 * v141 + 8);
      if ( v142 == ((v144 >> 5) & 3) && (v144 & 0x2000) == 0 && (v144 & 0x1F) != 0 )
      {
        v145 = v144 & 0x1F;
        if ( (_BYTE)v145 == 1 )
        {
          v20 = *(DXGADAPTER **)(v143 + 16LL * (unsigned int)v141);
          goto LABEL_284;
        }
        v146 = WdLogNewEntry5_WdError(v145, 2LL * (unsigned int)v141, v143);
        *(_QWORD *)(v146 + 24) = 267LL;
        WdLogEvent5_WdError(v146);
      }
    }
    v20 = 0LL;
LABEL_284:
    ExReleasePushLockSharedEx(v140, 0LL);
    KeLeaveCriticalRegion();
    v12 = v211;
    goto LABEL_35;
  }
  if ( v217.Type != D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    switch ( v217.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        if ( !InternalEscapeEnabled() )
        {
          v90 = WdLogNewEntry5_WdWarning(v18, v88, v89);
          *(_QWORD *)(v90 + 24) = 1398LL;
LABEL_213:
          WdLogEvent5_WdWarning(v90);
          goto LABEL_216;
        }
        if ( v217.PrivateDriverDataSize < 0x440 )
          goto LABEL_233;
        v93 = *v7;
        if ( *v7 == 5 )
        {
          v72 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v7);
          break;
        }
        switch ( v93 )
        {
          case 6:
            v72 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v7);
            goto LABEL_192;
          case 13:
            v72 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v7);
            goto LABEL_192;
          case 9:
            v94 = v7[4] == 0;
            if ( !v7[4] )
            {
              if ( !(unsigned __int8)DxgkpIsDrtEnabled() )
              {
                v90 = WdLogNewEntry5_WdWarning(v96, v95, v97);
                *(_QWORD *)(v90 + 24) = 1424LL;
                goto LABEL_213;
              }
              v94 = v7[4] == 0;
            }
            v72 = DxgEscapeSuspendResumeProcess(v217.hAdapter, *((void **)v7 + 1), 1, !v94);
            goto LABEL_192;
          case 10:
            v72 = DxgEscapeSuspendResumeProcess(v217.hAdapter, *((void **)v7 + 1), 0, 0);
            goto LABEL_192;
        }
LABEL_233:
        v19 = *(_QWORD *)&v217.Type;
        goto LABEL_24;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v217.PrivateDriverDataSize < 0xC || v217.PrivateDriverDataSize < v7[1] || *v7 != 1484026436 )
          goto LABEL_24;
        v86 = v7[2];
        if ( !(_DWORD)v86 && !(_DWORD)v18 || (unsigned int)v86 <= 0x23 && (v18 = 0x893482000LL, _bittest64(&v18, v86)) )
        {
          v72 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v7, 0LL);
          break;
        }
        if ( (_DWORD)v86 != 27 )
          goto LABEL_24;
        v72 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v7, 0LL);
        if ( v72 >= 0 )
        {
          if ( v12 )
          {
            v82 = v217.PrivateDriverDataSize;
            v83 = v217.pPrivateDriverData;
            v87 = (char *)v217.pPrivateDriverData + v217.PrivateDriverDataSize;
            if ( (unsigned __int64)v87 > MmUserProbeAddress || v87 <= v217.pPrivateDriverData )
              *(_BYTE *)MmUserProbeAddress = 0;
LABEL_188:
            memmove(v83, v7, v82);
          }
          else
          {
LABEL_189:
            memmove(v217.pPrivateDriverData, v7, v217.PrivateDriverDataSize);
          }
        }
        break;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v217.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v81 = DxgkHandleIndirectEscape(v217.PrivateDriverDataSize, v7);
        else
          v81 = DxgkHandleMiracastEscape(v217.PrivateDriverDataSize, v7);
        v72 = v81;
        if ( (int)(v81 + 0x80000000) >= 0 && v81 != -2147483643 )
          break;
        if ( !v12 )
          goto LABEL_189;
        v82 = v217.PrivateDriverDataSize;
        v83 = v217.pPrivateDriverData;
        v84 = (char *)v217.pPrivateDriverData + v217.PrivateDriverDataSize;
        if ( (unsigned __int64)v84 > MmUserProbeAddress || v84 <= v217.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_188;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_216;
        if ( v217.PrivateDriverDataSize != 1 )
          goto LABEL_175;
        byte_1C00A275B = *(_BYTE *)v7;
        goto LABEL_270;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v217.PrivateDriverDataSize != 24 )
          goto LABEL_175;
        goto LABEL_256;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_216;
        if ( v217.PrivateDriverDataSize != 200 )
          goto LABEL_175;
        v98 = DXGPROCESS::GetCurrent(v18, *(__int64 *)&v217.Type);
        if ( !v98 )
        {
          v102 = WdLogNewEntry5_WdError(v100, v99, v101);
          *(_QWORD *)(v102 + 24) = 1598LL;
          WdLogEvent5_WdError(v102);
          goto LABEL_175;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v256, v98);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v256, 1u);
        memset(v261, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v261[1]);
        v261[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v261[3]) = 46;
        LOBYTE(v261[6]) = -1;
        v72 = DxgkEnableDisableTargetAsHMD(
                (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v7,
                v7[48],
                *((_BYTE *)v7 + 196),
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v261);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v256);
        break;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v217.PrivateDriverDataSize != 16 )
          goto LABEL_175;
        v226 = 0LL;
        DxgkLogCodePointPacket(*v7, v7[1], v7[2], v7[3], 0LL);
        goto LABEL_270;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v217.PrivateDriverDataSize < 0x30 || v217.PrivateDriverDataSize < v7[1] )
          goto LABEL_175;
        v72 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v7);
        break;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        v72 = DxgkPrepareCcdDatabaseForAccess();
        break;
      default:
        goto LABEL_24;
    }
LABEL_192:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v85);
    if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
      return (unsigned int)v72;
    }
    return (unsigned int)v72;
  }
  v103 = WdLogNewEntry5_WdAssertion(v18, *(_QWORD *)&v217.Type);
  *(_QWORD *)(v103 + 24) = 1445LL;
  WdLogEvent5_WdAssertion(v103);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v106 = *((_QWORD *)DXGGLOBAL::GetGlobal(v105, v104) + 77);
    if ( v106 != *((_QWORD *)DXGGLOBAL::GetGlobal(v108, v107) + 76) )
      goto LABEL_256;
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v105, v104) + 303937) )
    goto LABEL_256;
  v111 = *((_QWORD *)DXGGLOBAL::GetGlobal(v110, v109) + 77);
  if ( v111 != *((_QWORD *)DXGGLOBAL::GetGlobal(v113, v112) + 75) )
  {
    v116 = DXGGLOBAL::GetGlobal(v115, v114);
    v119 = DXGGLOBAL::ReferenceWarpAdapter(v116, &v235);
    if ( !v119 )
      goto LABEL_262;
    v222 = 0;
    v120 = DXGGLOBAL::GetGlobal(v118, v117);
    DXGGLOBAL::IterateAdaptersWithCallback((__int64)v120, (__int64)DxgkpEscapeStopAdapters, (__int64)&v222, 3);
    DXGADAPTER::ReleaseReferenceNoTracking(v119);
    if ( !HIBYTE(v222) )
      goto LABEL_256;
  }
  v124 = DXGGLOBAL::GetGlobal(v115, v114);
  v127 = DXGGLOBAL::ReferenceBddFallbackAdapter(v124, &v236);
  if ( !v127 )
  {
LABEL_262:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v123);
    if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
    return 3221226021LL;
  }
  v223 = 1;
  v128 = DXGGLOBAL::GetGlobal(v126, v125);
  DXGGLOBAL::IterateAdaptersWithCallback((__int64)v128, (__int64)DxgkpEscapeStopAdapters, (__int64)&v223, 4);
  DXGADAPTER::ReleaseReferenceNoTracking(v127);
  if ( !HIBYTE(v223) )
  {
LABEL_256:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v121);
    if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
    return 3221225473LL;
  }
  memset(v262, 0, sizeof(v262));
  DxgkDiagInitializeCodePointPacket((__int64)v262, 76, 0, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v262, v129);
  LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
  v134 = LiveDumpWithWdLogs;
  if ( LiveDumpWithWdLogs < 0 )
  {
    v135 = WdLogNewEntry5_WdWarning(v132, v131, v133);
    *(_QWORD *)(v135 + 24) = v134;
    WdLogEvent5_WdWarning(v135);
  }
LABEL_270:
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v218);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v212, v136);
  if ( v214 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v212);
  return 0LL;
}
