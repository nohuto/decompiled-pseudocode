/*
 * XREFs of DxgkEscape @ 0x1C01124E0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF010 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0005AA8 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F5E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsBddDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001084C (-IsBddDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C00120A0 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C00120F8 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00122E8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0012320 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0012380 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0012788 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C001279C (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C00127F0 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsEscapeEnabled@DXGADAPTER@@QEBAEXZ @ 0x1C0012804 (-IsEscapeEnabled@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C001281C (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SessionIsolatedContainerRequiresEmulation@DXGADAPTER@@QEBA_NXZ @ 0x1C0034D90 (-SessionIsolatedContainerRequiresEmulation@DXGADAPTER@@QEBA_NXZ.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x1C0039D44 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     ?GetEdidsFromCache@DXGGLOBAL@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C003B68C (-GetEdidsFromCache@DXGGLOBAL@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?VidMmAdapterVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1C003B6B4 (-VidMmAdapterVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C003B6F0 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     ?VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C003B790 (-VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIF.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C00450A4 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C004786C (DxgkGetAdapterMiracastInfo.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0112DD0 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0112EC0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?CheckDriverCommonEscape@@YAJPEAVDXGADAPTER@@AEBU_D3DKMT_ESCAPE@@PEAX@Z @ 0x1C0113268 (-CheckDriverCommonEscape@@YAJPEAVDXGADAPTER@@AEBU_D3DKMT_ESCAPE@@PEAX@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01C08B4 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01C21B0 (-DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C01C3260 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C01C4578 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D24C0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C01D7B54 (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01F4430 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C01FE5B4 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C02032EC (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0208860 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C020B0EC (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C170 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C1F0 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C020CD00 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C020CFC8 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C020D3A8 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C020D524 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C020D550 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0211218 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C02112DC (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     OutputDuplGetDebugInfo @ 0x1C0240F38 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0241030 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C026A648 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C026B1B0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C026FACC (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C027A764 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 */

__int64 __fastcall DxgkEscape(struct _D3DKMT_ESCAPE *a1)
{
  struct VIDMM_DEVICE *v2; // r15
  struct DXGPROCESS *Current; // r13
  __int64 v4; // r14
  int *v5; // r12
  __int64 v6; // rcx
  bool v7; // di
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 hAdapter; // rdx
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A Value; // eax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  D3DKMT_HANDLE v19; // edi
  unsigned int v20; // ebx
  D3DKMT_HANDLE v21; // edi
  DXGADAPTER **v22; // rbx
  __int64 hDevice; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  D3DKMT_HANDLE hContext; // ecx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // edi
  D3DKMT_ESCAPETYPE v32; // ecx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r9
  D3DKMT_ESCAPETYPE v38; // r12d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v42; // rax
  void *v43; // rax
  bool IsSoftGPU; // al
  int *v45; // r14
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  _DXGKARG_ESCAPE *v51; // rdx
  int DiagnosticsBuffer; // eax
  size_t v53; // r8
  char *v54; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 *v59; // rax
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A v60; // eax
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  D3DKMT_ESCAPETYPE Type; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  UINT v67; // eax
  unsigned int v68; // eax
  int v69; // ebx
  size_t v70; // r8
  char *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // eax
  bool v77; // zf
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  int v82; // eax
  struct DXGPROCESS *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  UINT v86; // ebx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rcx
  DXGGLOBAL *v95; // rax
  __int64 v96; // rcx
  DXGADAPTER *v97; // rbx
  struct DXGGLOBAL *v98; // rax
  DXGGLOBAL *v99; // rax
  __int64 v100; // rcx
  DXGADAPTER *v101; // rbx
  struct DXGGLOBAL *v102; // rax
  int LiveDumpWithWdLogs; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rbx
  __int64 v108; // rax
  UINT v109; // eax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v111; // rax
  __int64 v112; // r12
  __int64 v113; // r8
  unsigned int v114; // ecx
  DXGADAPTER **v115; // rbx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  UINT v124; // eax
  unsigned int v125; // eax
  int v126; // ecx
  size_t v127; // r8
  char *v128; // rcx
  unsigned __int8 v129; // r12
  DXGADAPTER *v130; // rcx
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rax
  unsigned int v140; // eax
  __int64 v141; // rdx
  struct _VIDSCH_GLOBAL *v142; // rdx
  __int64 v143; // rax
  struct _VIDSCH_GLOBAL *v144; // rdx
  UINT v145; // edx
  UINT v146; // eax
  UINT v147; // eax
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // ebx
  unsigned __int64 v153; // rdx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  DXGGLOBAL *v160; // rax
  char v161; // di
  unsigned int v162; // ebx
  int v163; // eax
  enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE v164; // r9d
  int v165; // eax
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rax
  unsigned int v171; // edi
  unsigned int HostProcess; // eax
  int v173; // eax
  __int64 v174; // rax
  _QWORD *v175; // rax
  __int64 v176; // rax
  int v177; // [rsp+50h] [rbp-518h] BYREF
  __int64 v178; // [rsp+58h] [rbp-510h]
  char v179; // [rsp+60h] [rbp-508h]
  void *Src; // [rsp+68h] [rbp-500h]
  __int64 v181; // [rsp+70h] [rbp-4F8h] BYREF
  __int64 v182; // [rsp+78h] [rbp-4F0h] BYREF
  bool v183; // [rsp+80h] [rbp-4E8h]
  __int128 v184; // [rsp+88h] [rbp-4E0h] BYREF
  unsigned __int64 v185; // [rsp+98h] [rbp-4D0h] BYREF
  __int16 v186; // [rsp+A0h] [rbp-4C8h] BYREF
  __int16 v187; // [rsp+A4h] [rbp-4C4h] BYREF
  _QWORD v188[2]; // [rsp+A8h] [rbp-4C0h] BYREF
  DXGADAPTER *v189; // [rsp+B8h] [rbp-4B0h] BYREF
  unsigned int IsRemoteConnection; // [rsp+C0h] [rbp-4A8h]
  _BYTE v191[24]; // [rsp+C8h] [rbp-4A0h] BYREF
  DXGADAPTER *v192; // [rsp+E0h] [rbp-488h]
  DXGADAPTER *v193[4]; // [rsp+E8h] [rbp-480h] BYREF
  DXGADAPTER *v194; // [rsp+108h] [rbp-460h]
  __int64 v195; // [rsp+110h] [rbp-458h]
  union _LARGE_INTEGER Interval; // [rsp+118h] [rbp-450h] BYREF
  int v197; // [rsp+120h] [rbp-448h]
  _QWORD v198[10]; // [rsp+130h] [rbp-438h] BYREF
  struct DXGADAPTER *v199; // [rsp+180h] [rbp-3E8h] BYREF
  unsigned __int64 v200; // [rsp+188h] [rbp-3E0h] BYREF
  unsigned __int64 v201; // [rsp+190h] [rbp-3D8h] BYREF
  unsigned __int64 v202; // [rsp+198h] [rbp-3D0h] BYREF
  _DXGKARG_ESCAPE v203; // [rsp+1A8h] [rbp-3C0h] BYREF
  _BYTE v204[24]; // [rsp+1D8h] [rbp-390h] BYREF
  _BYTE v205[16]; // [rsp+1F0h] [rbp-378h] BYREF
  _BYTE v206[24]; // [rsp+200h] [rbp-368h] BYREF
  __int64 v207; // [rsp+218h] [rbp-350h] BYREF
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A v208; // [rsp+220h] [rbp-348h]
  void *v209; // [rsp+228h] [rbp-340h]
  UINT v210; // [rsp+230h] [rbp-338h]
  __int64 v211; // [rsp+238h] [rbp-330h]
  __int64 v212; // [rsp+248h] [rbp-320h] BYREF
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A v213; // [rsp+250h] [rbp-318h]
  void *v214; // [rsp+258h] [rbp-310h]
  UINT v215; // [rsp+260h] [rbp-308h]
  __int64 v216; // [rsp+268h] [rbp-300h]
  struct _D3DKMT_VIDSCH_ESCAPE v217; // [rsp+278h] [rbp-2F0h] BYREF
  _D3DKMT_VIDSCH_ESCAPE v218; // [rsp+288h] [rbp-2E0h] BYREF
  _QWORD v219[10]; // [rsp+2A0h] [rbp-2C8h] BYREF
  _BYTE v220[64]; // [rsp+2F0h] [rbp-278h] BYREF
  _BYTE v221[512]; // [rsp+330h] [rbp-238h] BYREF

  v192 = (DXGADAPTER *)a1;
  v177 = -1;
  v2 = 0LL;
  v178 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v179 = 1;
    v177 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2016);
  }
  else
  {
    v179 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v177, 2016);
  Current = DXGPROCESS::GetCurrent();
  v4 = 0LL;
  v195 = 0LL;
  v5 = (int *)v221;
  Src = v221;
  v7 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v183 = v7;
  if ( !Current )
  {
    v61 = WdLogNewEntry5_WdError(v6);
    LODWORD(v36) = -1073741811;
    *(_QWORD *)(v61 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
    v62 = v179 == 0;
    goto LABEL_266;
  }
  v184 = 0LL;
  if ( a1->PrivateDriverDataSize > 0x200 )
  {
    v5 = (int *)operator new(a1->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    Src = v5;
    *(_QWORD *)&v184 = v5;
  }
  if ( v5 )
  {
    if ( v7 )
    {
      PrivateDriverDataSize = a1->PrivateDriverDataSize;
      pPrivateDriverData = (char *)a1->pPrivateDriverData;
      if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v5, pPrivateDriverData, PrivateDriverDataSize);
      hAdapter = a1->hAdapter;
      if ( (_DWORD)hAdapter )
      {
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
          (DXGADAPTERBYHANDLE *)v205,
          hAdapter,
          (struct _KTHREAD **)Current,
          &v199,
          1);
        if ( v199 )
        {
          if ( *((_BYTE *)v199 + 185) )
          {
            Type = a1->Type;
            if ( (Type & 0xFFFFFFF3) != 0 || Type == D3DKMT_ESCAPE_DEVICE )
            {
              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v205);
LABEL_129:
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
              if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_473:
                McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
              return 3221225659LL;
            }
          }
        }
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v205);
      }
    }
    else
    {
      memmove(v5, a1->pPrivateDriverData, a1->PrivateDriverDataSize);
    }
    Value = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
    if ( (*(_BYTE *)&Value & 0x40) != 0 && (a1->Type || !a1->hAdapter || (*(_BYTE *)&Value & 1) != 0) )
    {
      v123 = WdLogNewEntry5_WdWarning(v10, hAdapter, v11);
      *(_QWORD *)(v123 + 24) = 1137LL;
      goto LABEL_138;
    }
    v14 = (unsigned int)a1->Type;
    if ( (int)v14 < 1 )
    {
LABEL_17:
      v15 = 0LL;
      v194 = 0LL;
      v189 = 0LL;
      v192 = 0LL;
      if ( a1->Type != D3DKMT_ESCAPE_BDD_FALLBACK )
        goto LABEL_18;
      Global = DXGGLOBAL::GetGlobal(v14);
      v111 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v185);
      v192 = v111;
      if ( v111 )
      {
        *((_QWORD *)&v184 + 1) = v111;
LABEL_18:
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)v204,
          (struct _KTHREAD **)Current);
        v19 = a1->hAdapter;
        if ( !a1->hAdapter )
        {
LABEL_27:
          if ( v15 )
          {
            hDevice = a1->hDevice;
            if ( !(_DWORD)hDevice )
              goto LABEL_37;
            v24 = ((unsigned int)hDevice >> 6) & 0xFFFFFF;
            hDevice = (unsigned int)hDevice >> 30;
            if ( (unsigned int)v24 < *((_DWORD *)Current + 62) )
            {
              v18 = (unsigned int)v24;
              v25 = *((_QWORD *)Current + 29);
              v17 = *(unsigned int *)(v25 + 16 * v24 + 8);
              if ( (_DWORD)hDevice == ((*(_DWORD *)(v25 + 16 * v24 + 8) >> 5) & 3)
                && (v17 & 0x2000) == 0
                && (v17 & 0x1F) != 0 )
              {
                v18 = 2LL * (unsigned int)v24;
                v17 &= 0x1Fu;
                if ( (_BYTE)v17 == 3 )
                {
                  v4 = *(_QWORD *)(v25 + 16LL * (unsigned int)v24);
LABEL_35:
                  if ( !v4 || v15 != *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL) && v15 != *(DXGADAPTER **)(v4 + 1728) )
                  {
                    v121 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, hDevice, v18);
                    v121[3] = v15;
                    v121[4] = a1->hDevice;
LABEL_274:
                    WdLogEvent5_WdWarning(v121);
                    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v204);
                    goto LABEL_141;
                  }
LABEL_37:
                  hContext = a1->hContext;
                  if ( !hContext )
                  {
                    v27 = 0LL;
                    goto LABEL_39;
                  }
                  v56 = (hContext >> 6) & 0xFFFFFF;
                  v57 = hContext >> 30;
                  if ( (unsigned int)v56 < *((_DWORD *)Current + 62) )
                  {
                    v18 = (unsigned int)v56;
                    v58 = *((_QWORD *)Current + 29);
                    hDevice = *(unsigned int *)(v58 + 16 * v56 + 8);
                    if ( (_DWORD)v57 == ((*(_DWORD *)(v58 + 16 * v56 + 8) >> 5) & 3)
                      && (hDevice & 0x2000) == 0
                      && (hDevice & 0x1F) != 0 )
                    {
                      v18 = 2LL * (unsigned int)v56;
                      v59 = (__int64 *)(v58 + 16LL * (unsigned int)v56);
                      hDevice &= 0x1Fu;
                      if ( (_BYTE)hDevice == 7 )
                      {
                        v27 = *v59;
LABEL_96:
                        v195 = v27;
                        if ( !v27 || !v4 || v4 != *(_QWORD *)(v27 + 16) )
                        {
                          v121 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, hDevice, v18);
                          v121[3] = v15;
                          v121[4] = v4;
                          v121[5] = a1->hContext;
                          goto LABEL_274;
                        }
LABEL_39:
                        if ( v4 )
                        {
                          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 64));
                          v15 = *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL);
                          v194 = v15;
                        }
                        if ( v27 )
                          _InterlockedIncrement64((volatile signed __int64 *)(v27 + 32));
                        _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
                        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v204);
                        if ( *((_DWORD *)v15 + 428) >= 0x5023u )
                        {
                          v60 = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
                          if ( (*(_BYTE *)&v60 & 0x10) != 0 || *(unsigned int *)&v60 >= 0x100 )
                          {
                            v123 = WdLogNewEntry5_WdWarning(v29, v28, v30);
                            *(_QWORD *)(v123 + 24) = v15;
                            goto LABEL_138;
                          }
                          if ( (*(_BYTE *)&v60 & 0x20) != 0 )
                          {
                            v123 = WdLogNewEntry5_WdWarning(v29, v28, v30);
                            *(_QWORD *)(v123 + 24) = v15;
                            *(_QWORD *)(v123 + 32) = 1590LL;
LABEL_138:
                            WdLogEvent5_WdWarning(v123);
LABEL_141:
                            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
                            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
                            goto LABEL_142;
                          }
                        }
                        v188[0] = v15;
                        v188[1] = -1LL;
                        v182 = v4;
                        v181 = v27;
                        if ( (int)DxgkpGetPairingAdapters(v15, 0, &v189, &v202, 0LL, 0LL) >= 0 )
                          DXGADAPTER::ReleaseReference(v189);
                        if ( v189 && *((_BYTE *)v189 + 185) )
                        {
                          if ( (a1->Type & 0xFFFFFFF7) == 0 )
                            v15 = v189;
                          v194 = v15;
                        }
                        if ( a1->Type == D3DKMT_ESCAPE_DRT_TEST )
                        {
                          v124 = a1->PrivateDriverDataSize;
                          if ( v124 >= 0xC && v124 >= v5[1] && *v5 == 1484026436 )
                          {
                            v125 = v5[2];
                            if ( v125 <= 0x1E )
                            {
                              v126 = 1142964224;
                              if ( _bittest(&v126, v125) )
                              {
                                v69 = DxgkDrtTestEscape(v15, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
                                if ( v69 >= 0 )
                                {
                                  if ( v183 )
                                  {
                                    v127 = a1->PrivateDriverDataSize;
                                    v128 = (char *)a1->pPrivateDriverData;
                                    if ( (unsigned __int64)&v128[v127] > MmUserProbeAddress || &v128[v127] <= v128 )
                                      *(_BYTE *)MmUserProbeAddress = 0;
                                    memmove(v128, v5, v127);
                                  }
                                  else
                                  {
                                    memmove(a1->pPrivateDriverData, v5, a1->PrivateDriverDataSize);
                                  }
                                }
                                ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                                DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                                goto LABEL_205;
                              }
                            }
                          }
                        }
                        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v198, v15, 0LL);
                        COREACCESS::COREACCESS((COREACCESS *)v193, v192);
                        v31 = 0;
                        v197 = 0;
                        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                          (DXGADAPTERSTOPRESETLOCKSHARED *)v191,
                          v15,
                          0);
                        IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
                        v32 = a1->Type;
                        if ( v32 == D3DKMT_ESCAPE_BDD_FALLBACK )
                        {
                          COREACCESS::AcquireShared(v193);
                        }
                        else if ( (a1->Flags.Value & 1) != 0 )
                        {
                          if ( v32 == D3DKMT_ESCAPE_DRIVERPRIVATE
                            || v32 == D3DKMT_ESCAPE_VIDSCH && a1->PrivateDriverDataSize >= 0xC && *v5 == 3 )
                          {
                            LOBYTE(v31) = 1;
                          }
                          v129 = v31;
                          if ( DXGADAPTER::IsRenderAdapter(v15) )
                            v129 = 1;
                          LODWORD(v36) = COREADAPTERACCESS::AcquireExclusive(v198, (unsigned int)v129 + 2);
                          if ( (int)v36 < 0 )
                            goto LABEL_87;
                          if ( !v129 && DXGADAPTER::IsRenderAdapter(v15) )
                            ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v15 + 316), 2, 0xFFFFFFFF, 0);
                          v31 = 1;
                        }
                        else if ( v32 == D3DKMT_ESCAPE_DRIVERPRIVATE
                               && ((LODWORD(v33) = DXGADAPTER::GetAdapterType(v15), (*v33 & 0x10) != 0)
                                || *((_DWORD *)v15 + 428) >= 0x5023u && (a1->Flags.Value & 8) != 0) )
                        {
                          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                          if ( !DXGADAPTER::IsActive(v15) )
                          {
                            LODWORD(v36) = -1073741130;
                            goto LABEL_87;
                          }
                        }
                        else
                        {
                          LODWORD(v36) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v198);
                          if ( (int)v36 < 0 )
                            goto LABEL_87;
                          v31 = v197;
                        }
                        if ( a1->hDevice && *(_DWORD *)(v4 + 464) != 1 )
                        {
                          LODWORD(v36) = -1073741130;
                          goto LABEL_87;
                        }
                        v38 = a1->Type;
                        if ( v38 == D3DKMT_ESCAPE_DRIVERPRIVATE )
                        {
                          if ( (a1->Flags.Value & 0x40) == 0 )
                          {
                            if ( !*((_BYTE *)v15 + 185) )
                            {
                              if ( DXGADAPTER::IsEscapeEnabled(v15) )
                              {
                                if ( !a1->PrivateDriverDataSize || !a1->pPrivateDriverData )
                                {
                                  v175 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
                                  v175[3] = a1->PrivateDriverDataSize;
                                  v175[4] = a1->pPrivateDriverData;
                                  LODWORD(v36) = -1073741811;
                                  v175[5] = -1073741811LL;
                                  WdLogEvent5_WdWarning(v175);
                                  goto LABEL_87;
                                }
                                if ( v4 )
                                  v42 = *(void **)(v4 + 472);
                                else
                                  v42 = 0LL;
                                v203.hDevice = v42;
                                if ( v195 )
                                  v43 = *(void **)(v195 + 184);
                                else
                                  v43 = 0LL;
                                v203.hContext = v43;
                                v203.Flags.Value = a1->Flags.Value;
                                IsSoftGPU = DXGADAPTER::IsSoftGPU(v15);
                                v45 = (int *)Src;
                                if ( IsSoftGPU
                                  || *((_DWORD *)v15 + 71) != 4098
                                  || (unsigned int)IsAMDDriverEscapeAllowed(Src, a1->PrivateDriverDataSize) )
                                {
                                  v46 = CheckDriverCommonEscape(v15, a1, v45);
                                  v36 = v46;
                                  if ( v46 >= 0 )
                                  {
                                    v203.Flags.Value &= ~0x10u;
                                    if ( DXGPROCESS::IsVmProcessOrVmValidation(Current, v15)
                                      || (*((_BYTE *)Current + 324) & 1) != 0
                                      && DXGADAPTER::SessionIsolatedContainerRequiresEmulation(v15) )
                                    {
                                      LODWORD(v2) = 32;
                                    }
                                    v203.Flags.Value = (unsigned int)v2 | v203.Flags.Value & 0xFFFFFFDF;
                                    v203.PrivateDriverDataSize = a1->PrivateDriverDataSize;
                                    v203.pPrivateDriverData = v45;
                                    if ( DXGADAPTER::IsRenderAdapter(v15) )
                                    {
                                      v48 = *((_QWORD *)v15 + 316);
                                      if ( v48 )
                                      {
                                        v49 = v48 + 56;
                                        KeEnterCriticalRegion();
                                        ExAcquirePushLockSharedEx(v49, 0LL);
                                        v50 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v15 + 52));
                                        if ( v50 )
                                          v203.hKmdProcessHandle = *(HANDLE *)(v50 + 16);
                                        ExReleasePushLockSharedEx(v49, 0LL);
                                        KeLeaveCriticalRegion();
                                      }
                                    }
                                    v51 = &v203;
LABEL_79:
                                    DiagnosticsBuffer = DXGADAPTER::DdiEscape(v15, v51);
                                    goto LABEL_80;
                                  }
                                  goto LABEL_485;
                                }
                              }
                              else
                              {
                                v176 = WdLogNewEntry5_WdWarning(v40, v39, v41);
                                *(_QWORD *)(v176 + 24) = v15;
                                *(_QWORD *)(v176 + 32) = -1073741637LL;
                                WdLogEvent5_WdWarning(v176);
                              }
LABEL_493:
                              LODWORD(v36) = -1073741637;
                              goto LABEL_87;
                            }
                            if ( v195 )
                              IsRemoteConnection = *(_DWORD *)(v195 + 28);
                            else
                              IsRemoteConnection = 0;
                            if ( v4 )
                              LODWORD(v2) = *(_DWORD *)(v4 + 336);
                            v171 = *((_DWORD *)v15 + 1054);
                            HostProcess = DXGPROCESS::GetHostProcess(Current);
                            v45 = (int *)Src;
                            v173 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                     (DXGADAPTER *)((char *)v15 + 4152),
                                     HostProcess,
                                     v171,
                                     (unsigned int)v2,
                                     IsRemoteConnection,
                                     D3DKMT_ESCAPE_DRIVERPRIVATE,
                                     a1->Flags,
                                     a1->PrivateDriverDataSize,
                                     (unsigned __int8 *)Src);
                            v36 = v173;
                            if ( v173 >= 0 )
                            {
LABEL_81:
                              if ( (int)v36 >= 0 )
                              {
LABEL_82:
                                if ( v183 )
                                {
                                  v53 = a1->PrivateDriverDataSize;
                                  v54 = (char *)a1->pPrivateDriverData;
                                  if ( (unsigned __int64)&v54[v53] > MmUserProbeAddress || &v54[v53] <= v54 )
                                    *(_BYTE *)MmUserProbeAddress = 0;
                                  memmove(v54, v45, v53);
                                }
                                else
                                {
                                  memmove(a1->pPrivateDriverData, v45, a1->PrivateDriverDataSize);
                                }
                              }
LABEL_87:
                              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                              COREACCESS::~COREACCESS((COREACCESS *)v193);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
                              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
                              if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                                return (unsigned int)v36;
                              goto LABEL_495;
                            }
LABEL_485:
                            v174 = WdLogNewEntry5_WdError(v47);
                            *(_QWORD *)(v174 + 24) = v36;
                            WdLogEvent5_WdError(v174);
                            goto LABEL_81;
                          }
                          v45 = (int *)Src;
                          DiagnosticsBuffer = DxgkpDriverKnownEscape(Current, Src, a1->PrivateDriverDataSize);
LABEL_80:
                          LODWORD(v36) = DiagnosticsBuffer;
                          goto LABEL_81;
                        }
                        switch ( v38 )
                        {
                          case D3DKMT_ESCAPE_VIDMM:
                            if ( !InternalEscapeEnabled() )
                            {
                              v75 = WdLogNewEntry5_WdWarning(v134, v133, v135);
                              *(_QWORD *)(v75 + 24) = 1928LL;
                              WdLogEvent5_WdWarning(v75);
                              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                              COREACCESS::~COREACCESS((COREACCESS *)v193);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                              goto LABEL_165;
                            }
                            v130 = v189;
                            if ( !v189 )
                              goto LABEL_126;
                            if ( *((_BYTE *)v189 + 185) )
                              goto LABEL_128;
                            if ( v4 )
                              v2 = *(struct VIDMM_DEVICE **)(v4 + 648);
                            if ( a1->PrivateDriverDataSize < 0x440 )
                              goto LABEL_320;
                            v45 = (int *)Src;
                            DiagnosticsBuffer = VIDMM_EXPORT::VidMmEscape(
                                                  *(VIDMM_EXPORT **)(*((_QWORD *)v189 + 316) + 544LL),
                                                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v189 + 316) + 552LL),
                                                  v2,
                                                  (struct _D3DKMT_VIDMM_ESCAPE *)Src,
                                                  v31);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_TDRDBGCTRL:
                            if ( !a1->pPrivateDriverData )
                            {
                              DiagnosticsBuffer = TdrDbgCtrl(0LL);
                              v45 = (int *)Src;
                              goto LABEL_80;
                            }
                            v141 = a1->PrivateDriverDataSize;
                            if ( (unsigned int)v141 < 4 )
                              goto LABEL_320;
                            v45 = (int *)Src;
                            switch ( *(_DWORD *)Src )
                            {
                              case 0:
                                DiagnosticsBuffer = TdrDbgCtrl(0LL);
                                goto LABEL_80;
                              case 1:
                                DiagnosticsBuffer = TdrDbgCtrl(2LL);
                                goto LABEL_80;
                              case 2:
                                DiagnosticsBuffer = TdrDbgCtrl(1LL);
                                goto LABEL_80;
                              case 3:
                                DiagnosticsBuffer = TdrDbgCtrl(3LL);
                                goto LABEL_80;
                              case 4:
                              case 5:
                                if ( !v189 )
                                {
                                  v143 = WdLogNewEntry5_WdTrace(v35, v141, 0x1C0000000uLL, v37);
                                  *(_QWORD *)(v143 + 24) = v189;
                                  goto LABEL_493;
                                }
                                if ( *((_BYTE *)v189 + 185) )
                                  goto LABEL_493;
                                LODWORD(v36) = TdrDbgCtrl(4LL);
                                if ( (int)v36 >= 0 )
                                {
                                  v142 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v189 + 316) + 528LL);
                                  v218.Type = D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL;
                                  v218.PreemptionControl = *v45;
                                  DiagnosticsBuffer = VIDSCH_EXPORT::VidSchEscape(
                                                        *(VIDSCH_EXPORT **)(*((_QWORD *)v189 + 316) + 520LL),
                                                        v142,
                                                        &v218);
                                  goto LABEL_80;
                                }
                                goto LABEL_81;
                              case 6:
                                DiagnosticsBuffer = TdrDbgCtrl(5LL);
                                goto LABEL_80;
                              case 7:
                                DiagnosticsBuffer = TdrDbgCtrl(6LL);
                                goto LABEL_80;
                              case 8:
                                if ( (unsigned int)v141 < 8 )
                                {
                                  LODWORD(v36) = -1073741811;
                                  goto LABEL_87;
                                }
                                if ( !v189 )
                                {
                                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v141, 0x1C0000000uLL, v37) + 24) = v15;
                                  goto LABEL_493;
                                }
                                if ( *((_BYTE *)v189 + 185) )
                                  goto LABEL_493;
                                LODWORD(v36) = TdrDbgCtrl(4LL);
                                if ( (int)v36 >= 0 )
                                {
                                  v144 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v189 + 316) + 528LL);
                                  v217.Type = D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL;
                                  v217.4 = *(union _D3DKMT_VIDSCH_ESCAPE::$F07540163959E7F591B75ADEBC483023 *)v45;
                                  DiagnosticsBuffer = VIDSCH_EXPORT::VidSchEscape(
                                                        *(VIDSCH_EXPORT **)(*((_QWORD *)v189 + 316) + 520LL),
                                                        v144,
                                                        &v217);
                                  goto LABEL_80;
                                }
                                break;
                              default:
                                goto LABEL_320;
                            }
                            goto LABEL_81;
                          case D3DKMT_ESCAPE_VIDSCH:
                            if ( !InternalEscapeEnabled() )
                            {
                              v139 = WdLogNewEntry5_WdWarning(v137, v136, v138);
                              *(_QWORD *)(v139 + 24) = 1967LL;
                              WdLogEvent5_WdWarning(v139);
                              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                              COREACCESS::~COREACCESS((COREACCESS *)v193);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
                              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
                              if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                                return 3221225506LL;
                              goto LABEL_324;
                            }
                            v130 = v189;
                            if ( !v189 )
                              goto LABEL_126;
                            if ( *((_BYTE *)v189 + 185) )
                              goto LABEL_128;
                            if ( a1->PrivateDriverDataSize < 0xC )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            if ( *(_DWORD *)Src == 2 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            if ( *(_DWORD *)Src != 3 )
                            {
                              DiagnosticsBuffer = VIDSCH_EXPORT::VidSchEscape(
                                                    *(VIDSCH_EXPORT **)(*((_QWORD *)v189 + 316) + 520LL),
                                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v189 + 316) + 528LL),
                                                    (struct _D3DKMT_VIDSCH_ESCAPE *)Src);
                              goto LABEL_80;
                            }
                            if ( !v31 )
                            {
LABEL_320:
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v140 = 5000000;
                            if ( *((_DWORD *)Src + 1) < 0x4C4B40u )
                              v140 = *((_DWORD *)Src + 1);
                            Interval.QuadPart = -(__int64)v140;
                            KeDelayExecutionThread(0, 0, &Interval);
                            LODWORD(v36) = 0;
                            goto LABEL_82;
                          case D3DKMT_ESCAPE_DEVICE:
                            if ( a1->PrivateDriverDataSize < 0xC || !v4 )
                              goto LABEL_320;
                            DiagnosticsBuffer = DXGDEVICE::Escape((DXGDEVICE *)v4, (struct _D3DKMT_DEVICE_ESCAPE *)Src);
                            v45 = (int *)Src;
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_DMM:
                            if ( !DXGADAPTER::IsDisplayAdapter(v15) )
                              goto LABEL_126;
                            v131 = a1->PrivateDriverDataSize;
                            if ( (unsigned int)v131 < 0x80 )
                              goto LABEL_320;
                            v45 = (int *)Src;
                            v132 = *((_QWORD *)Src + 1);
                            if ( v132 > 0x19000 || v131 != v132 + 127 && v132 )
                              goto LABEL_320;
                            DiagnosticsBuffer = DmmEscape(v15, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)Src);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                            v145 = a1->PrivateDriverDataSize;
                            if ( v145 < 8 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            DiagnosticsBuffer = DxgDbgTakeSnapshot((char *)Src + 4, v145 - 4, (unsigned int *)Src);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_DRT_TEST:
                            v146 = a1->PrivateDriverDataSize;
                            if ( v146 < 0xC )
                              goto LABEL_320;
                            v45 = (int *)Src;
                            if ( v146 < *((_DWORD *)Src + 1) || *(_DWORD *)Src != 1484026436 )
                              goto LABEL_320;
                            DiagnosticsBuffer = DxgkDrtTestEscape(
                                                  v15,
                                                  (struct _D3DKMT_DRT_ESCAPE_HEAD *)Src,
                                                  (struct COREADAPTERACCESS *)v198);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_DIAGNOSTICS:
                            v45 = (int *)Src;
                            DiagnosticsBuffer = GetDiagnosticsBuffer(
                                                  (struct _D3DKMT_DXGK_DIAGNOSTICS *)Src,
                                                  a1->PrivateDriverDataSize,
                                                  1);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                            if ( !DXGADAPTER::IsDisplayAdapter(v15) )
                              goto LABEL_126;
                            v147 = a1->PrivateDriverDataSize;
                            if ( v147 < 0x18 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            if ( v147 != *(_DWORD *)Src )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            if ( IsRemoteConnection )
                              DiagnosticsBuffer = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)Src);
                            else
                              DiagnosticsBuffer = OutputDuplGetDebugInfo(v15, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)Src);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                            if ( !DXGADAPTER::IsDisplayAdapter(v15) )
                              goto LABEL_126;
                            v148 = a1->PrivateDriverDataSize;
                            if ( (unsigned int)v148 < 8 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            if ( v148 != *((unsigned int *)Src + 1) + 8LL )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            if ( IsRemoteConnection )
                              DiagnosticsBuffer = OutputDuplGetDiagnosticBuffer(
                                                    0LL,
                                                    (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)Src);
                            else
                              DiagnosticsBuffer = OutputDuplGetDiagnosticBuffer(
                                                    v15,
                                                    (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)Src);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_BDD_PNP:
                            if ( !DXGADAPTER::IsBddDevice(v15) || DXGADAPTER::IsBddFallbackDriver(v15) )
                            {
                              LODWORD(v36) = -1071775742;
                              goto LABEL_87;
                            }
                            v212 = 0LL;
                            v216 = 0LL;
                            v213 = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
                            v215 = a1->PrivateDriverDataSize;
                            v45 = (int *)Src;
                            v214 = Src;
                            v51 = (_DXGKARG_ESCAPE *)&v212;
                            goto LABEL_79;
                          case D3DKMT_ESCAPE_BDD_FALLBACK:
                            v15 = v192;
                            if ( !DXGADAPTER::IsBddFallbackDriver(v192) )
                            {
                              v150 = WdLogNewEntry5_WdAssertion(v149);
                              *(_QWORD *)(v150 + 24) = 2295LL;
                              WdLogEvent5_WdAssertion(v150);
                            }
                            v207 = 0LL;
                            v211 = 0LL;
                            v208 = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
                            v210 = a1->PrivateDriverDataSize;
                            v45 = (int *)Src;
                            v209 = Src;
                            v51 = (_DXGKARG_ESCAPE *)&v207;
                            goto LABEL_79;
                          case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                            if ( a1->PrivateDriverDataSize != 8 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            if ( !*(_DWORD *)Src )
                            {
                              v152 = *((_DWORD *)Src + 1);
                              *((_BYTE *)DXGGLOBAL::GetGlobal(v35) + 1008) = v152 != 0;
                              LODWORD(v36) = 0;
                              goto LABEL_82;
                            }
                            if ( *(_DWORD *)Src != 15 )
                            {
                              v151 = WdLogNewEntry5_WdAssertion(v35);
                              *(_QWORD *)(v151 + 24) = *v45;
                              WdLogEvent5_WdAssertion(v151);
                              LODWORD(v36) = -1073741811;
                              goto LABEL_81;
                            }
                            if ( !DXGADAPTER::IsDisplayAdapter(v15) )
                            {
LABEL_126:
                              v65 = WdLogNewEntry5_WdError(v130);
                              *(_QWORD *)(v65 + 24) = v15;
                              *(_QWORD *)(v65 + 32) = -1073741637LL;
                              goto LABEL_127;
                            }
                            DiagnosticsBuffer = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                                  *((ADAPTER_DISPLAY **)v15 + 315),
                                                  v45[1]);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                            if ( !DXGADAPTER::IsDisplayAdapter(v15) )
                              goto LABEL_126;
                            v153 = a1->PrivateDriverDataSize;
                            if ( (unsigned int)v153 < 8 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            if ( v153 < 44 * (unsigned __int64)*((unsigned int *)Src + 1) + 8 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            DiagnosticsBuffer = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                                  *((ADAPTER_DISPLAY **)v15 + 315),
                                                  (struct _D3DKMT_DISPLAYMODELIST *)Src);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_WHQL_INFO:
                            if ( a1->PrivateDriverDataSize < 4 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            *(_DWORD *)Src = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 24) + 64LL) + 2648LL);
                            LODWORD(v36) = 0;
                            goto LABEL_82;
                          case D3DKMT_ESCAPE_BRIGHTNESS:
                            if ( (a1->Flags.Value & 1) == 0 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            if ( a1->PrivateDriverDataSize < 0x60C )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13)
                                                                                         + 224LL))(
                                    0LL,
                                    0LL,
                                    0LL) )
                            {
                              v45 = (int *)Src;
                              DiagnosticsBuffer = DpiBrightnessEscape(
                                                    *((struct _DEVICE_OBJECT **)v15 + 24),
                                                    (struct _D3DKMT_BRIGHTNESS_INFO *)Src);
                              goto LABEL_80;
                            }
                            LODWORD(v36) = -1073741790;
                            v157 = WdLogNewEntry5_WdWarning(v155, v154, v156);
                            *(_QWORD *)(v157 + 24) = v15;
                            *(_QWORD *)(v157 + 32) = -1073741790LL;
LABEL_477:
                            WdLogEvent5_WdWarning(v157);
                            v45 = (int *)Src;
                            goto LABEL_81;
                          case D3DKMT_ESCAPE_EDID_CACHE:
                            v158 = a1->PrivateDriverDataSize;
                            if ( (unsigned int)v158 < 4 )
                              goto LABEL_320;
                            v45 = (int *)Src;
                            v159 = *(unsigned int *)Src + 4LL;
                            if ( v158 != v159 )
                              goto LABEL_320;
                            v160 = DXGGLOBAL::GetGlobal(v159);
                            DiagnosticsBuffer = DXGGLOBAL::GetEdidsFromCache(
                                                  v160,
                                                  (struct _D3DKMT_DXGK_DIAGNOSTICS *)v45);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO:
                            if ( a1->PrivateDriverDataSize < 0x10 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            *((_DWORD *)Src + 1) &= 7u;
                            DxgkGetAdapterBrightnessInfo(*((_QWORD *)v15 + 24), v45);
                            LODWORD(v36) = 0;
                            goto LABEL_82;
                          case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                            if ( a1->PrivateDriverDataSize < 8 || !v189 || !v4 )
                              goto LABEL_140;
                            v161 = 0;
                            if ( (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x61C8ED7) == 0 )
                              goto LABEL_437;
                            if ( (*(&DxgkControlGuid_Context + 3) & 0xFFFFFFFFF9E37128uLL) != 0 )
                              goto LABEL_437;
                            if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x4000) == 0 )
                              goto LABEL_437;
                            v162 = 0;
                            if ( !(unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v189) )
                              goto LABEL_437;
                            while ( !*(_QWORD *)(352LL * v162
                                               + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v189 + 316) + 16LL) + 2416LL)
                                               + 32) )
                            {
                              if ( ++v162 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v189) )
                                goto LABEL_437;
                            }
                            v161 = 1;
LABEL_437:
                            *(_BYTE *)(v4 + 1744) = v161;
                            v45 = (int *)Src;
                            *(_BYTE *)Src = v161;
                            v45[1] = 0;
                            LODWORD(v36) = 0;
                            goto LABEL_82;
                          case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                            if ( a1->PrivateDriverDataSize != 32 )
                            {
                              LODWORD(v36) = -1073741811;
                              goto LABEL_87;
                            }
                            v45 = (int *)Src;
                            DxgkGetAdapterMiracastInfo(*((_QWORD *)v15 + 24), Src);
                            LODWORD(v36) = 0;
                            goto LABEL_82;
                          case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                            if ( a1->PrivateDriverDataSize < 0x20 )
                              goto LABEL_140;
                            v45 = (int *)Src;
                            v163 = *((_DWORD *)Src + 3);
                            if ( v163 > 1 || *(_QWORD *)Src )
                              goto LABEL_140;
                            if ( !v163 )
                            {
                              *((_QWORD *)Src + 2) = 0LL;
                              *((_QWORD *)v45 + 3) = 0LL;
                            }
                            v164 = v45[2];
                            if ( (unsigned int)(v164 - 1000) > 1 )
                              goto LABEL_140;
                            if ( !v189 )
                            {
                              v65 = WdLogNewEntry5_WdError(0LL);
                              *(_QWORD *)(v65 + 24) = 2585LL;
                              goto LABEL_127;
                            }
                            if ( *((_BYTE *)v189 + 185) )
                              goto LABEL_128;
                            DiagnosticsBuffer = VIDMM_EXPORT::VidMmProcessVerifierOption(
                                                  *(VIDMM_EXPORT **)(*((_QWORD *)v189 + 316) + 544LL),
                                                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v189 + 316) + 552LL),
                                                  Current,
                                                  v45[3],
                                                  v164,
                                                  (union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *)v45 + 1);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                            if ( a1->PrivateDriverDataSize < 0x20 )
                              goto LABEL_140;
                            v45 = (int *)Src;
                            v165 = *((_DWORD *)Src + 1);
                            if ( v165 > 1 )
                              goto LABEL_140;
                            if ( !v165 )
                            {
                              *((_QWORD *)Src + 1) = 0LL;
                              *((_QWORD *)v45 + 2) = 0LL;
                              *((_QWORD *)v45 + 3) = 0LL;
                            }
                            if ( (unsigned int)(*v45 - 1000) > 1 )
                              goto LABEL_140;
                            if ( !v189 )
                            {
                              v65 = WdLogNewEntry5_WdError(0LL);
                              *(_QWORD *)(v65 + 24) = 2639LL;
                              goto LABEL_127;
                            }
                            if ( *((_BYTE *)v189 + 185) )
                              goto LABEL_128;
                            DiagnosticsBuffer = VIDMM_EXPORT::VidMmAdapterVerifierOption(
                                                  *(VIDMM_EXPORT **)(*((_QWORD *)v189 + 316) + 544LL),
                                                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v189 + 316) + 552LL),
                                                  v45[1],
                                                  *v45,
                                                  (union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *)(v45 + 2));
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                            if ( a1->PrivateDriverDataSize == 4 )
                            {
                              if ( DXGADAPTER::IsDisplayOnlyAdapter(v15) )
                              {
                                v45 = (int *)Src;
                                DiagnosticsBuffer = ADAPTER_DISPLAY::DodSetDirtyRectMode(
                                                      *((ADAPTER_DISPLAY **)v15 + 315),
                                                      *(_DWORD *)Src);
                                goto LABEL_80;
                              }
LABEL_139:
                              v66 = WdLogNewEntry5_WdWarning(v168, v167, v169);
                              *(_QWORD *)(v66 + 24) = v15;
                              WdLogEvent5_WdWarning(v66);
                            }
                            else
                            {
                              v166 = WdLogNewEntry5_WdError(v35);
                              *(_QWORD *)(v166 + 24) = a1->PrivateDriverDataSize;
                              WdLogEvent5_WdError(v166);
                            }
LABEL_140:
                            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                            COREACCESS::~COREACCESS((COREACCESS *)v193);
                            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                            goto LABEL_141;
                          case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
                            v45 = (int *)Src;
                            DiagnosticsBuffer = GetDiagnosticsBuffer(
                                                  (struct _D3DKMT_DXGK_DIAGNOSTICS *)Src,
                                                  a1->PrivateDriverDataSize,
                                                  0);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                            if ( !DXGADAPTER::IsFullWDDMAdapter(v15) )
                              goto LABEL_139;
                            v45 = (int *)Src;
                            DiagnosticsBuffer = ADAPTER_DISPLAY::ReportDisplayState(
                                                  *((ADAPTER_DISPLAY **)v15 + 315),
                                                  (struct _D3DKMT_DXGK_DIAGNOSTICS *)Src,
                                                  a1->PrivateDriverDataSize);
                            goto LABEL_80;
                          case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                            if ( !a1->PrivateDriverDataSize )
                            {
                              v170 = WdLogNewEntry5_WdError(v35);
                              *(_QWORD *)(v170 + 24) = a1->PrivateDriverDataSize;
                              WdLogEvent5_WdError(v170);
                              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                              COREACCESS::~COREACCESS((COREACCESS *)v193);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
                              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
                              if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                                goto LABEL_467;
                              goto LABEL_466;
                            }
                            if ( !v189 )
                            {
                              v65 = WdLogNewEntry5_WdError(0LL);
                              *(_QWORD *)(v65 + 24) = 2710LL;
LABEL_127:
                              WdLogEvent5_WdError(v65);
LABEL_128:
                              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                              COREACCESS::~COREACCESS((COREACCESS *)v193);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                              goto LABEL_129;
                            }
                            if ( !*((_BYTE *)v189 + 185) )
                            {
                              v45 = (int *)Src;
                              *(_BYTE *)Src = *(_BYTE *)(*((_QWORD *)v189 + 316) + 1512LL);
                              LODWORD(v36) = 0;
                              goto LABEL_82;
                            }
                            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v191);
                            COREACCESS::~COREACCESS((COREACCESS *)v193);
                            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v198);
                            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v181);
                            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v182);
                            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v188);
                            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
                            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
                            if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                              goto LABEL_473;
                            return 3221225659LL;
                          default:
                            LODWORD(v36) = -1073741811;
                            v157 = WdLogNewEntry5_WdWarning(v35, v34, 0x1C0000000uLL);
                            *(_QWORD *)(v157 + 24) = a1->Type;
                            goto LABEL_477;
                        }
                      }
                      v122 = WdLogNewEntry5_WdError(v57);
                      *(_QWORD *)(v122 + 24) = 316LL;
                      WdLogEvent5_WdError(v122);
                    }
                  }
                  v27 = 0LL;
                  goto LABEL_96;
                }
                v120 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v120 + 24) = 316LL;
                WdLogEvent5_WdError(v120);
              }
            }
            v4 = 0LL;
            goto LABEL_35;
          }
          v119 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          *(_QWORD *)(v119 + 24) = a1->hAdapter;
          LODWORD(v36) = -1073741811;
          *(_QWORD *)(v119 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v119);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v204);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
          v62 = v179 == 0;
LABEL_266:
          if ( v62 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
            return (unsigned int)v36;
LABEL_495:
          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
          return (unsigned int)v36;
        }
        v20 = (v19 >> 6) & 0xFFFFFF;
        v21 = v19 >> 30;
        if ( (*((_BYTE *)Current + 323) & 8) == 0 )
        {
          if ( v20 < *((_DWORD *)Current + 62) )
          {
            v16 = v20;
            v18 = *((_QWORD *)Current + 29);
            v17 = *(unsigned int *)(v18 + 16LL * v20 + 8);
            if ( v21 == ((*(_DWORD *)(v18 + 16LL * v20 + 8) >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
            {
              v16 = 2LL * v20;
              v22 = (DXGADAPTER **)(v18 + 16LL * v20);
              v17 &= 0x1Fu;
              if ( (_BYTE)v17 == 1 )
              {
                v15 = *v22;
LABEL_26:
                v194 = v15;
                goto LABEL_27;
              }
              v118 = WdLogNewEntry5_WdError(v17);
              *(_QWORD *)(v118 + 24) = 316LL;
              WdLogEvent5_WdError(v118);
            }
          }
          v15 = 0LL;
          goto LABEL_26;
        }
        v112 = *((_QWORD *)Current + 57);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v112 + 208));
        if ( v20 < *(_DWORD *)(v112 + 248) )
        {
          v113 = *(_QWORD *)(v112 + 232);
          v114 = *(_DWORD *)(v113 + 16LL * v20 + 8);
          if ( v21 == ((v114 >> 5) & 3) && (v114 & 0x2000) == 0 && (v114 & 0x1F) != 0 )
          {
            v115 = (DXGADAPTER **)(v113 + 16LL * v20);
            v116 = v114 & 0x1F;
            if ( (_BYTE)v116 == 1 )
            {
              v15 = *v115;
              goto LABEL_261;
            }
            v117 = WdLogNewEntry5_WdError(v116);
            *(_QWORD *)(v117 + 24) = 316LL;
            WdLogEvent5_WdError(v117);
          }
        }
        v15 = 0LL;
LABEL_261:
        ExReleasePushLockSharedEx(v112 + 208, 0LL);
        KeLeaveCriticalRegion();
        v5 = (int *)Src;
        goto LABEL_26;
      }
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
      if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221226021LL;
LABEL_251:
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
      return 3221226021LL;
    }
    if ( (int)v14 <= 24 )
    {
      if ( (_DWORD)v14 != 24 )
      {
        if ( (_DWORD)v14 != 1 )
        {
          if ( (_DWORD)v14 == 8 )
          {
            v67 = a1->PrivateDriverDataSize;
            if ( v67 < 0xC || v67 < v5[1] || *v5 != 1484026436 )
              goto LABEL_17;
            v68 = v5[2];
            if ( !v68 && !a1->hAdapter || v68 <= 0x1F && (v14 = 2470977536LL, _bittest((const int *)&v14, v68)) )
            {
              v69 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
              goto LABEL_205;
            }
            if ( v68 != 27 )
              goto LABEL_17;
            v69 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
            if ( v69 >= 0 )
            {
              if ( v7 )
              {
                v70 = a1->PrivateDriverDataSize;
                v71 = (char *)a1->pPrivateDriverData;
                if ( (unsigned __int64)&v71[v70] > MmUserProbeAddress || &v71[v70] <= v71 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                goto LABEL_159;
              }
              goto LABEL_202;
            }
LABEL_205:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
            if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
            return (unsigned int)v69;
          }
          if ( (_DWORD)v14 != 20 )
            goto LABEL_17;
LABEL_193:
          v62 = (_DWORD)v14 == 30;
          v81 = a1->PrivateDriverDataSize;
          if ( v62 )
            v82 = DxgkHandleIndirectEscape(v81, v5);
          else
            v82 = DxgkHandleMiracastEscape(v81, v5);
          v69 = v82;
          if ( v82 >= 0 )
          {
            if ( v7 )
            {
              v70 = a1->PrivateDriverDataSize;
              v71 = (char *)a1->pPrivateDriverData;
              if ( (unsigned __int64)&v71[v70] > MmUserProbeAddress || &v71[v70] <= v71 )
                *(_BYTE *)MmUserProbeAddress = 0;
LABEL_159:
              memmove(v71, v5, v70);
              goto LABEL_205;
            }
LABEL_202:
            memmove(a1->pPrivateDriverData, v5, a1->PrivateDriverDataSize);
            goto LABEL_205;
          }
          goto LABEL_205;
        }
        if ( !InternalEscapeEnabled() )
        {
          v74 = WdLogNewEntry5_WdWarning(v14, v72, v73);
          *(_QWORD *)(v74 + 24) = 1245LL;
LABEL_163:
          WdLogEvent5_WdWarning(v74);
          goto LABEL_165;
        }
        if ( a1->PrivateDriverDataSize < 0x440 )
          goto LABEL_17;
        v76 = *v5;
        if ( *v5 == 5 )
        {
          v69 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v5);
          goto LABEL_205;
        }
        if ( v76 == 6 )
        {
          v69 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v5);
          goto LABEL_205;
        }
        if ( v76 == 13 )
        {
          v69 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v5);
          goto LABEL_205;
        }
        if ( v76 != 9 )
        {
          if ( v76 != 10 )
            goto LABEL_17;
          v69 = DxgEscapeSuspendResumeProcess(a1->hAdapter, *((void **)v5 + 1), 0, 0);
          goto LABEL_205;
        }
        v77 = v5[4] == 0;
        if ( !v5[4] )
        {
          if ( !(unsigned __int8)DxgkpIsDrtEnabled() )
          {
            v74 = WdLogNewEntry5_WdWarning(v79, v78, v80);
            *(_QWORD *)(v74 + 24) = 1271LL;
            goto LABEL_163;
          }
          v77 = v5[4] == 0;
        }
        v69 = DxgEscapeSuspendResumeProcess(a1->hAdapter, *((void **)v5 + 1), 1, !v77);
        goto LABEL_205;
      }
      if ( !g_OSTestSigningEnabled )
      {
LABEL_165:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
        if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_324:
          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
        return 3221225506LL;
      }
      if ( a1->PrivateDriverDataSize != 1 )
        goto LABEL_141;
      byte_1C008E75B = *(_BYTE *)v5;
LABEL_185:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
      if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 0LL;
      goto LABEL_243;
    }
    if ( (int)v14 <= 32 )
    {
      if ( (_DWORD)v14 == 32 )
      {
        if ( a1->PrivateDriverDataSize != 16 )
          goto LABEL_141;
        v192 = 0LL;
        DxgkLogCodePointPacket(*v5, v5[1], v5[2], v5[3], 0LL);
        goto LABEL_185;
      }
      if ( (_DWORD)v14 != 25 )
      {
        if ( (_DWORD)v14 != 27 )
        {
          if ( (_DWORD)v14 != 30 )
            goto LABEL_17;
          goto LABEL_193;
        }
        if ( g_OSTestSigningEnabled )
        {
          if ( a1->PrivateDriverDataSize != 200 )
            goto LABEL_141;
          v83 = DXGPROCESS::GetCurrent();
          if ( !v83 )
          {
            v85 = WdLogNewEntry5_WdError(v84);
            *(_QWORD *)(v85 + 24) = 1445LL;
            WdLogEvent5_WdError(v85);
            goto LABEL_141;
          }
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v206, v83);
          DXGUSERCRIT::Acquire((DXGUSERCRIT *)v206, 1u);
          memset(v219, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v219[1]);
          v219[8] = MEMORY[0xFFFFF78000000014];
          LODWORD(v219[3]) = 46;
          LOBYTE(v219[6]) = -1;
          v69 = DxgkEnableDisableTargetAsHMD(
                  (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v5,
                  v5[48],
                  *((_BYTE *)v5 + 196),
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v219);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v206);
          goto LABEL_205;
        }
        goto LABEL_165;
      }
      v86 = a1->PrivateDriverDataSize;
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
      if ( v86 != 24 )
      {
LABEL_142:
        if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_466:
          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
LABEL_467:
        LODWORD(v36) = -1073741811;
        return (unsigned int)v36;
      }
LABEL_227:
      if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225473LL;
      goto LABEL_237;
    }
    if ( (_DWORD)v14 == 33 )
    {
      v109 = a1->PrivateDriverDataSize;
      if ( v109 < 0x30 || v109 < v5[1] )
        goto LABEL_141;
      v69 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
      goto LABEL_205;
    }
    if ( (_DWORD)v14 != 1029 )
      goto LABEL_17;
    v87 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v87 + 24) = 1292LL;
    WdLogEvent5_WdAssertion(v87);
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL)
      && (v89 = *((_QWORD *)DXGGLOBAL::GetGlobal(v88) + 80), v89 != *((_QWORD *)DXGGLOBAL::GetGlobal(v90) + 79))
      || *((_BYTE *)DXGGLOBAL::GetGlobal(v88) + 20266) )
    {
LABEL_226:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
      goto LABEL_227;
    }
    v92 = *((_QWORD *)DXGGLOBAL::GetGlobal(v91) + 80);
    if ( v92 != *((_QWORD *)DXGGLOBAL::GetGlobal(v93) + 78) )
    {
      v95 = DXGGLOBAL::GetGlobal(v94);
      v97 = DXGGLOBAL::ReferenceWarpAdapter(v95, &v200);
      if ( !v97 )
        goto LABEL_230;
      v186 = 0;
      v98 = DXGGLOBAL::GetGlobal(v96);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)v98,
        (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
        (__int64)&v186,
        3);
      DXGADAPTER::ReleaseReference(v97);
      if ( !HIBYTE(v186) )
        goto LABEL_226;
    }
    v99 = DXGGLOBAL::GetGlobal(v94);
    v101 = DXGGLOBAL::ReferenceBddFallbackAdapter(v99, &v201);
    if ( v101 )
    {
      v187 = 1;
      v102 = DXGGLOBAL::GetGlobal(v100);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)v102,
        (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
        (__int64)&v187,
        4);
      DXGADAPTER::ReleaseReference(v101);
      if ( HIBYTE(v187) )
      {
        memset(v220, 0, sizeof(v220));
        DxgkDiagInitializeCodePointPacket((__int64)v220, 76, 0, 0, 0);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v220);
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
        v107 = LiveDumpWithWdLogs;
        if ( LiveDumpWithWdLogs < 0 )
        {
          v108 = WdLogNewEntry5_WdWarning(v105, v104, v106);
          *(_QWORD *)(v108 + 24) = v107;
          WdLogEvent5_WdWarning(v108);
        }
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
        if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 0LL;
LABEL_243:
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
        return 0LL;
      }
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
      if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225473LL;
LABEL_237:
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
      return 3221225473LL;
    }
LABEL_230:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
    if ( !v179 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221226021LL;
    goto LABEL_251;
  }
  v63 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v63 + 24) = a1->PrivateDriverDataSize;
  *(_QWORD *)(v63 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v63);
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v177);
  if ( v179 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v177);
  return 3221225495LL;
}
