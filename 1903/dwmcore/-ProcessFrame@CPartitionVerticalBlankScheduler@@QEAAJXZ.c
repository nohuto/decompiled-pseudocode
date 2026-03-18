/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800213B4 (-SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180027C98 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180029C34 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800922F8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800923D4 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x180092730 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092A20 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$insert_unchecked@AEBQEAVCOverlayContext@@@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@AEBQEAVCOverlayContext@@@Z @ 0x18009330C (--$insert_unchecked@AEBQEAVCOverlayContext@@@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180093970 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800940C4 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180095E98 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180096A64 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180098680 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800A4FB8 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     QpcToMilliseconds @ 0x1800A51D0 (QpcToMilliseconds.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BA4C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ @ 0x1800C23EC (-SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C7464 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CA8F0 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800D6AE0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_N@Z @ 0x18015B368 (-TriggerFailFastOnNextFailure@@YAX_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     McTemplateU0qqqq @ 0x180166350 (McTemplateU0qqqq.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8 @ 0x180178E58 (McTemplateU0qQR0qQR2qQR4qQR6qQR8.c)
 *     McTemplateU0t @ 0x1801798B0 (McTemplateU0t.c)
 *     McTemplateU0xqqq @ 0x180179918 (McTemplateU0xqqq.c)
 *     McTemplateU0xxxxq @ 0x180179A80 (McTemplateU0xxxxq.c)
 *     McTemplateU0xxxxx @ 0x180179B38 (McTemplateU0xxxxx.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18017B514 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801830B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ?NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ @ 0x180189054 (-NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180189278 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18018D27C (-NeedsPresent@CFrameInfo@@QEBA_NXZ.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18018D298 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     McTemplateU0qN16 @ 0x1801933B8 (McTemplateU0qN16.c)
 *     McTemplateU0qNR0 @ 0x18019343C (McTemplateU0qNR0.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180193678 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801C95FC (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801CDE14 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18021B8A0 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rbx
  int v4; // r12d
  int v5; // edi
  CPartitionVerticalBlankScheduler *v6; // r15
  LONG v7; // esi
  void *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // r14d
  volatile struct IUnknown *volatile v14; // rsi
  int v15; // r13d
  unsigned __int8 v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int v23; // r9d
  unsigned int v24; // esi
  char *v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // r9
  int *v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  char v31; // al
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  char v34; // al
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // rsi
  char v38; // cl
  char v39; // r13
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // r14d
  __int64 v43; // rax
  int v44; // edi
  unsigned int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  CDirtyRegion *v49; // rcx
  unsigned __int64 v50; // rdx
  CDirtyRegion *v51; // rax
  __int64 v52; // r13
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // ecx
  _BYTE *v58; // rdx
  __int64 v59; // rax
  void *v60; // rcx
  CVisualGroup *v61; // rcx
  unsigned int j; // r13d
  struct ID2D1Bitmap *v63; // rax
  CVisualGroup *v64; // rcx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  __int64 v68; // r8
  bool v69; // r14
  int v70; // eax
  struct CVisual *v71; // rdx
  unsigned int v72; // ecx
  int v73; // eax
  int v74; // r14d
  char v75; // r14
  char v76; // al
  __int64 v77; // rax
  __int64 v78; // rax
  _BOOL8 v79; // r8
  unsigned __int64 *v80; // rsi
  _QWORD *v81; // r13
  __int64 v82; // rcx
  __int64 v83; // rdi
  struct ID3D11Texture2DVtbl *v84; // r14
  void *v85; // rcx
  __int64 v86; // rdx
  int v87; // eax
  unsigned int v88; // eax
  struct ID3D11Texture2D *v89; // rsi
  char v90; // al
  char v91; // al
  CComposition *v92; // rcx
  int v93; // eax
  unsigned int v94; // ecx
  CDirtyRegion *v95; // rax
  CRenderTargetManager *v96; // rcx
  int LastPresentCount; // eax
  int v98; // edx
  unsigned int v99; // ecx
  int v100; // r9d
  unsigned int v101; // ecx
  __int64 v102; // rsi
  __int64 v103; // r8
  unsigned int k; // esi
  void *v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // r14
  __int64 v109; // rcx
  struct ID3D11Texture2D *v110; // rsi
  CTelemetryFrameStatistics *v111; // r8
  int v112; // r9d
  int v113; // r10d
  __int64 v114; // r11
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  double v117; // xmm1_8
  unsigned int m; // esi
  int v119; // ecx
  __int64 v120; // rax
  char v121; // al
  CProcessAttributionReporter *v122; // r12
  CProcessResourceAttributionReporter *v123; // rsi
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v125; // rsi
  ULONGLONG v126; // rax
  unsigned __int64 v127; // rdx
  void *v128; // rcx
  __int64 v130; // rsi
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rax
  unsigned __int64 v134; // rcx
  __int64 v135; // r14
  __int64 v136; // r13
  __int64 v137; // rax
  CDirtyRegion *v138; // rax
  int v139; // eax
  unsigned int v140; // ecx
  __int64 v141; // r13
  __int64 v142; // rbx
  __int64 v143; // rax
  CDirtyRegion *v144; // rax
  int v145; // eax
  unsigned int v146; // ecx
  char *Thread; // rax
  HANDLE *v148; // r14
  signed int LastError; // eax
  __int64 v150; // r8
  signed int v151; // eax
  __int64 v152; // r8
  unsigned int v153; // r8d
  int v154; // ecx
  unsigned int v155; // ecx
  struct ID2D1Bitmap *v156; // rcx
  __int64 v157; // r11
  unsigned __int64 v158; // rdi
  __int64 v159; // rax
  unsigned int v160; // r10d
  __m128i v161; // xmm1
  unsigned __int64 v162; // rax
  unsigned __int64 v163; // xmm1_8
  int v164; // eax
  unsigned int v165; // ecx
  unsigned int v166; // eax
  int v167; // eax
  unsigned int v168; // ecx
  __int64 v169; // r14
  unsigned int v170; // eax
  __int64 v171; // rcx
  CDirtyRegion *v172; // rcx
  __int64 v173; // rax
  struct ID3D11Texture2DVtbl *v174; // rcx
  __int64 v175; // r14
  __int64 v176; // rdx
  unsigned __int64 v177; // rtt
  __int64 v178; // rcx
  int FrameStart; // eax
  unsigned int v180; // ecx
  struct ID3D11Texture2DVtbl *lpVtbl; // r9
  unsigned __int64 v182; // r10
  unsigned __int64 v183; // rtt
  unsigned __int64 v184; // rtt
  unsigned __int64 v185; // r10
  unsigned __int64 v186; // rtt
  signed int v187; // eax
  __int64 v188; // r8
  unsigned int lpArgToCompletionRoutine; // [rsp+20h] [rbp-548h]
  int lpArgToCompletionRoutinea; // [rsp+20h] [rbp-548h]
  int v191; // [rsp+30h] [rbp-538h]
  char v192; // [rsp+110h] [rbp-458h]
  char v193; // [rsp+111h] [rbp-457h]
  char v194; // [rsp+112h] [rbp-456h]
  bool v195; // [rsp+113h] [rbp-455h] BYREF
  char v196[4]; // [rsp+114h] [rbp-454h] BYREF
  __int64 v197; // [rsp+118h] [rbp-450h] BYREF
  struct ID2D1Bitmap *v198; // [rsp+120h] [rbp-448h] BYREF
  char v199; // [rsp+128h] [rbp-440h]
  struct ID3D11Texture2D *v200; // [rsp+130h] [rbp-438h] BYREF
  CDirtyRegion *v201; // [rsp+138h] [rbp-430h] BYREF
  unsigned int v202[2]; // [rsp+140h] [rbp-428h] BYREF
  int i; // [rsp+148h] [rbp-420h]
  __int64 v204; // [rsp+150h] [rbp-418h]
  unsigned __int64 v205; // [rsp+158h] [rbp-410h] BYREF
  _QWORD v206[2]; // [rsp+160h] [rbp-408h] BYREF
  int v207; // [rsp+170h] [rbp-3F8h]
  char v208; // [rsp+174h] [rbp-3F4h]
  char v209; // [rsp+175h] [rbp-3F3h]
  void *v210[2]; // [rsp+178h] [rbp-3F0h]
  __int64 v211; // [rsp+188h] [rbp-3E0h]
  unsigned int v212; // [rsp+190h] [rbp-3D8h]
  _QWORD v213[2]; // [rsp+198h] [rbp-3D0h] BYREF
  int v214; // [rsp+1A8h] [rbp-3C0h]
  char v215; // [rsp+1ACh] [rbp-3BCh]
  char v216; // [rsp+1ADh] [rbp-3BBh]
  void *v217[2]; // [rsp+1B0h] [rbp-3B8h] BYREF
  __int64 v218; // [rsp+1C0h] [rbp-3A8h]
  unsigned int v219; // [rsp+1C8h] [rbp-3A0h]
  LARGE_INTEGER DueTime; // [rsp+1D0h] [rbp-398h] BYREF
  CPartitionVerticalBlankScheduler *v221; // [rsp+1D8h] [rbp-390h]
  signed __int64 v222[2]; // [rsp+1E0h] [rbp-388h] BYREF
  _BYTE v223[20]; // [rsp+1F0h] [rbp-378h] BYREF
  __int64 v224; // [rsp+204h] [rbp-364h]
  int v225; // [rsp+210h] [rbp-358h] BYREF
  __int64 v226; // [rsp+214h] [rbp-354h]
  __int64 v227; // [rsp+21Ch] [rbp-34Ch]
  __int64 v228; // [rsp+224h] [rbp-344h]
  __int64 v229[5]; // [rsp+230h] [rbp-338h] BYREF
  void *lpMem; // [rsp+258h] [rbp-310h] BYREF
  CDirtyRegion *v231; // [rsp+260h] [rbp-308h]
  struct _EXCEPTION_RECORD *v232; // [rsp+268h] [rbp-300h]
  _BYTE v233[128]; // [rsp+270h] [rbp-2F8h] BYREF
  struct _EXCEPTION_RECORD v234; // [rsp+2F0h] [rbp-278h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+390h] [rbp-1D8h] BYREF
  _BYTE v236[4]; // [rsp+430h] [rbp-138h] BYREF
  char v237; // [rsp+434h] [rbp-134h] BYREF
  void *retaddr; // [rsp+568h] [rbp+0h]

  v3 = (char *)this + 72;
  *((_DWORD *)this + 29) = CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds;
  v4 = 0;
  v221 = this;
  _InterlockedExchange((volatile __int32 *)this + 28, 0);
  v5 = *((_DWORD *)this + 29);
  v6 = this;
  v7 = *((_DWORD *)this + 31);
  if ( *((_DWORD *)this + 30) < v5 )
    v5 = *((_DWORD *)this + 30);
  if ( !*((_BYTE *)this + 98) )
  {
    *((_BYTE *)this + 98) = 1;
    Thread = (char *)CreateThread(0LL, 0LL, CWatchdogTimer::ThreadEntryPoint, (char *)this + 72, 4u, 0LL);
    v148 = (HANDLE *)(v3 + 8);
    if ( v3 + 8 == (char *)&v205 )
    {
      if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(Thread);
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v3 + 8,
        Thread);
      v205 = 0LL;
    }
    if ( !SetThreadPriority(*v148, 15) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v150);
    }
    ResumeThread(*v148);
  }
  if ( v3[24] )
    ModuleFailFastForHRESULT(2147500037LL, retaddr, a3);
  DueTime.QuadPart = -10000LL * v5;
  v8 = (void *)*((_QWORD *)v3 + 2);
  v3[24] = 1;
  if ( !SetWaitableTimer(v8, &DueTime, v7, 0LL, 0LL, 0) )
  {
    v151 = GetLastError();
    if ( v151 > 0 )
      v151 = (unsigned __int16)v151 | 0x80070000;
    if ( v151 >= 0 )
      v151 = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)v151, retaddr, v152);
  }
  v11 = *((_DWORD *)v6 + 7725);
  v12 = 0;
  v13 = 1;
  LODWORD(v197) = 0;
  if ( *((_DWORD *)v6 + 7724) <= v11 )
  {
    LODWORD(v10) = 1;
    v192 = 1;
    goto LABEL_8;
  }
  v133 = *((_QWORD *)v6 + 3237);
  LOBYTE(v10) = 0;
  v192 = 0;
  if ( !*(_BYTE *)(v133 + 1176) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      McTemplateU0t(v10, v9, *(unsigned __int8 *)(v133 + 1201));
    if ( *((_BYTE *)v6 + 30944) )
    {
      if ( *((_DWORD *)v6 + 8770) == -1 )
        *((_QWORD *)v6 + 4385) = 0LL;
      *((_QWORD *)v6 + *((unsigned int *)v6 + 8771) + 4386) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v6 + 30920));
      v153 = *((_DWORD *)v6 + 8771) + 1;
      LODWORD(v9) = v153 / 0x3C;
      v153 %= 0x3Cu;
      v154 = *((_DWORD *)v6 + 8770);
      *((_DWORD *)v6 + 8771) = v153;
      if ( v154 == v153 )
      {
        v155 = v154 + 1;
        LODWORD(v9) = v155 / 0x3C;
        *((_DWORD *)v6 + 8770) = v155 % 0x3C;
      }
    }
    LODWORD(v10) = CCommonRegistryData::m_parallelModePolicy;
    if ( CCommonRegistryData::m_parallelModePolicy == 2
      || (LODWORD(v10) = CCommonRegistryData::m_parallelModePolicy - 1, CCommonRegistryData::m_parallelModePolicy == 1)
      || (LODWORD(v10) = CCommonRegistryData::m_parallelModePolicy - 3, CCommonRegistryData::m_parallelModePolicy == 3) )
    {
      if ( !*((_DWORD *)v6 + 7725) )
      {
        LODWORD(v10) = 1;
        *((_DWORD *)v6 + 7725) = 1;
        v192 = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Start);
          LODWORD(v10) = 1;
        }
        goto LABEL_8;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0x(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT,
          *(_QWORD *)(*((_QWORD *)v6 + 3237) + 16LL));
    }
    LOBYTE(v10) = 0;
  }
LABEL_8:
  *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1176LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0xqqq(
      v10,
      v9,
      *((_QWORD *)v6 + 3237),
      (unsigned __int8)v10,
      *((_DWORD *)v6 + 7724),
      *((_DWORD *)v6 + 7725));
  v14 = g_pDebugInspectSurface;
  v15 = *((_DWORD *)v6 + 7724);
  for ( i = v15; g_pDebugInspectSurface; v14 = g_pDebugInspectSurface )
  {
    v200 = 0LL;
    v198 = 0LL;
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v200);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))v14->lpVtbl->QueryInterface)(
           v14,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v200) < 0 )
    {
      v156 = v198;
      v198 = 0LL;
      if ( v156 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v156 + 16LL))(v156);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v14->lpVtbl->QueryInterface)(
             v14,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v198) >= 0 )
        DebugInspectBitmap(v198);
    }
    else
    {
      DebugInspectTexture(v200, 0);
    }
    g_pDebugInspectSurface = 0LL;
    __debugbreak();
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v198);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v200);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)v6 + 3237) + 312LL));
  v16 = v192;
  if ( !v192 )
    goto LABEL_175;
  if ( v15 )
    CRenderTargetManager::SyncLockForParallelMode(*(CRenderTargetManager **)(*((_QWORD *)v6 + 8) + 64LL));
  v17 = (_QWORD *)*((_QWORD *)v6 + 3237);
  v18 = v17[148];
  v17[1] = v17[2] + 1LL;
  **((_QWORD **)v6 + 3237) = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 8LL);
  *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 304LL)
                                               + *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1464LL);
  if ( *((_DWORD *)v6 + 7724) || *((_BYTE *)v6 + 35620) )
  {
    *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) += *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1464LL);
    *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1192LL) = 1;
    v19 = *((_QWORD *)v6 + 3237);
    if ( !*(_BYTE *)(v19 + 1060) )
      goto LABEL_21;
    v20 = *(_DWORD *)(v19 + 108) + 2;
    goto LABEL_20;
  }
  v19 = *((_QWORD *)v6 + 3237);
  if ( *(_BYTE *)(v19 + 1060) )
  {
    v20 = *(_DWORD *)(v19 + 108) + 1;
LABEL_20:
    *(_DWORD *)(v19 + 172) = v20;
  }
LABEL_21:
  v21 = *((_QWORD *)v6 + 3237);
  v22 = v21;
  if ( *(_BYTE *)(v21 + 1060) )
  {
    v23 = 1;
    if ( *(_DWORD *)(v21 + 472) > 1u )
    {
      do
      {
        v157 = v23;
        v158 = *(_QWORD *)(v21 + 8LL * v23 + 1208);
        v159 = 32 * (v23 + 15LL);
        v160 = *(_DWORD *)(v159 + v21 + 16);
        v198 = (struct ID2D1Bitmap *)v160;
        *(_OWORD *)v223 = *(_OWORD *)(v159 + v21);
        if ( v158 )
        {
          v161 = *(__m128i *)(v159 + v21 + 16);
          v162 = *(_QWORD *)(v21 + 1184);
          v163 = _mm_srli_si128(v161, 8).m128i_u64[0];
          if ( v162 > v163 )
          {
            v198 = (struct ID2D1Bitmap *)((char *)v198 + (v162 - v163) / v158);
            v160 = (unsigned int)v198;
          }
        }
        if ( (v158 + (*(_QWORD *)(v21 + 1208) >> 1)) / *(_QWORD *)(v21 + 1208) < 2 )
          *(_DWORD *)(v21 + 4LL * v23 + 172) = v160;
        else
          *(_DWORD *)(v21 + 4LL * v23 + 172) = v160 + 1;
        ++v23;
        *(_DWORD *)(*((_QWORD *)v6 + 3237) + 4 * v157 + 108) = v160 + 1;
        v22 = *((_QWORD *)v6 + 3237);
        v21 = v22;
      }
      while ( v23 < *(_DWORD *)(v22 + 472) );
    }
  }
  v24 = *(_DWORD *)(v22 + 96);
  memset_0(v236, 0, 0x100uLL);
  v26 = 0;
  if ( v24 )
  {
    v27 = (__int64 *)(v22 + 1208);
    v28 = (int *)(v22 + 172);
    v25 = &v237;
    do
    {
      if ( v26 >= 0x10 )
        break;
      ++v26;
      *((_DWORD *)v25 - 1) = *(v28 - 16);
      v29 = *v28++;
      *(_DWORD *)v25 = v29;
      v30 = *v27++;
      *(_QWORD *)(v25 + 4) = v30;
      v25 += 16;
    }
    while ( v26 < v24 );
  }
  v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0((_DWORD)v25, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v24, 16, (__int64)v236);
    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v32 = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL);
  v33 = *(_QWORD *)(*((_QWORD *)v6 + 3238) + 1184LL);
  if ( v32 < v33 )
  {
    if ( v32 >= v18 )
    {
      if ( (v31 & 0x10) == 0 )
        goto LABEL_210;
LABEL_280:
      McTemplateU0x(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES,
        v33 - v32);
      goto LABEL_210;
    }
  }
  else if ( v32 >= v18 )
  {
    goto LABEL_31;
  }
  if ( (v31 & 0x10) != 0 )
  {
    v33 = v18;
    goto LABEL_280;
  }
LABEL_210:
  v134 = *(_QWORD *)(*((_QWORD *)v6 + 3238) + 1184LL);
  if ( v134 <= v18 )
    v134 = v18;
  *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) = v134;
LABEL_31:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v6);
  v34 = *((_BYTE *)v6 + 26236);
  v35 = *((_QWORD *)v6 + 3237);
  v211 = 0LL;
  v212 = 0;
  *(_OWORD *)v210 = 0LL;
  if ( v34 )
  {
    *(_DWORD *)(v35 + 96) = 0;
    v34 = *((_BYTE *)v6 + 26236);
  }
  v208 = v34;
  v36 = *((_BYTE *)v6 + 26238);
  v206[0] = v35;
  *((_BYTE *)v6 + 26238) = 0;
  v207 = 1;
  v206[1] = (char *)v6 + 25920;
  v209 = v36;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Start);
  v37 = *((_QWORD *)v6 + 8);
  v38 = *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1056LL);
  *(_QWORD *)(v37 + 376) = v206;
  v199 = v38;
  *(_DWORD *)(v37 + 1104) = 0;
  if ( *(_DWORD *)(v37 + 368) == 1 )
    v208 = 1;
  v195 = 0;
  v39 = 0;
  *(_BYTE *)(v37 + 1272) = 0;
  CComposition::UpdateDisplaySet((CComposition *)v37);
  if ( CComposition::s_cRenderFailures > 0xA )
  {
    v193 = 1;
    TriggerFailFastOnNextFailure(1);
  }
  else
  {
    v193 = 0;
  }
  v40 = CComposition::PreRender((CComposition *)v37, &v195);
  v42 = v40;
  if ( v40 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_1802920EC, 1u, v40, 0x2D0u, 0LL);
  if ( !*(_BYTE *)(v37 + 1272) && v42 != -2003304442 && v42 != -2003304291 )
  {
    v39 = 0;
    v43 = 0LL;
    v44 = 0;
    LODWORD(v197) = 0;
    if ( *(_DWORD *)(v37 + 688) )
    {
      while ( 1 )
      {
        v164 = CCachedVisualImage::PerformDelayedSnapshot(*(CCachedVisualImage **)(*(_QWORD *)(v37 + 664) + 8 * v43));
        v44 = v164;
        if ( v164 < 0 )
          break;
        v43 = (unsigned int)(v197 + 1);
        LODWORD(v197) = v43;
        if ( (unsigned int)v43 >= *(_DWORD *)(v37 + 688) )
          goto LABEL_45;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v165, 0LL, 0, v164, 0xA12u, 0LL);
    }
LABEL_45:
    *(_DWORD *)(v37 + 688) = 0;
    DynArrayImpl<0>::ShrinkToSize(v37 + 664, 8LL);
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_1802C0180, 2u, v44, 0x3DAu, 0LL);
    }
    else
    {
      v44 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_1802C0180, 2u, v42, 0x3DDu, 0LL);
      }
      else if ( v195 )
      {
        if ( !v42 )
          v44 = 142213121;
      }
      else
      {
        v48 = *(_QWORD *)(v37 + 64);
        LOBYTE(v45) = 0;
        v194 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
          McTemplateU0qqqq(
            v45,
            (unsigned int)&EVTDESC_RENDERTARGET_COUNTS,
            *(_DWORD *)(v48 + 96),
            *(_DWORD *)(v48 + 100),
            *(_DWORD *)(v48 + 104),
            *(_DWORD *)(v48 + 108));
        v232 = &v234;
        v49 = (CDirtyRegion *)v233;
        v50 = *(unsigned int *)(v48 + 48);
        v51 = (CDirtyRegion *)v233;
        lpMem = v233;
        v231 = (CDirtyRegion *)v233;
        if ( (_DWORD)v50 )
        {
          v52 = 0LL;
          v53 = (unsigned int)v50;
          do
          {
            v54 = *(_QWORD *)(*(_QWORD *)(v48 + 24) + v52);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 48LL))(v54, 80LL) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v54 + 248LL))(v54) )
              {
                v197 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 264LL))(v54);
                if ( v197 )
                {
                  v201 = v231;
                  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert_unchecked<COverlayContext * const &>(
                    (char *)&lpMem,
                    v229,
                    &v201,
                    (char *)&v197);
                }
              }
            }
            v52 += 8LL;
            --v53;
          }
          while ( v53 );
          v51 = v231;
          v3 = (char *)v6 + 72;
          v49 = (CDirtyRegion *)lpMem;
        }
        v55 = (v51 - v49) >> 3;
        if ( v55 < 0 )
        {
          gsl::details::throw_exception<gsl::narrowing_error>(v49, v50, v46);
          JUMPOUT(0x180095E8FLL);
        }
        v222[0] = v55;
        v222[1] = (signed __int64)v49;
        if ( !v49 && v55 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v56 = COverlayContext::ComputeOverlayConfiguration(v222, v50, v46, v47);
        v44 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x13Au, 0LL);
        v58 = lpMem;
        v59 = (v231 - (CDirtyRegion *)lpMem) >> 3;
        if ( v59 )
          v231 = (CDirtyRegion *)((char *)v231 - 8 * v59);
        lpMem = 0LL;
        v60 = 0LL;
        if ( v58 != v233 )
          v60 = v58;
        operator delete(v60);
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v61, &dword_1802C0180, 2u, v44, 0xE8u, 0LL);
        }
        else
        {
          for ( j = 0; j < *(_DWORD *)(v48 + 48); ++j )
          {
            v63 = *(struct ID2D1Bitmap **)(*(_QWORD *)(v48 + 24) + 8LL * j);
            v196[0] = 0;
            v198 = v63;
            v64 = (CVisualGroup *)*((_QWORD *)v63 + 16);
            if ( v64 )
            {
              CVisualGroup::SetExcludeSubtree(v64, 1);
              v63 = v198;
            }
            v65 = (*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)v63 + 8) + 56LL))((__int64)v63 + 64, v196);
            LODWORD(v197) = v65;
            if ( v65 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v66, &dword_1802C0180, 2u, v65, 0xF1u, 0LL);
              v65 = v197;
            }
            v61 = (CVisualGroup *)*((_QWORD *)v198 + 16);
            if ( v61 )
            {
              CVisualGroup::SetExcludeSubtree(v61, 0);
              v65 = v197;
            }
            if ( v65 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v61, &dword_1802C0180, 2u, v65, 0xF9u, 0LL);
              v65 = v197;
            }
            else if ( v196[0] )
            {
              v194 = 1;
            }
            if ( !v44 || v44 >= 0 && v65 < 0 )
              v44 = v65;
          }
        }
        if ( !*(_DWORD *)(v48 + 96) )
          *(_BYTE *)(v48 + 113) = 0;
        if ( v44 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v61, &dword_1802C0180, 2u, v44, 0x3E2u, 0LL);
        v39 = v194;
      }
    }
    CComposition::ProcessRenderingStatus((CComposition *)v37, v44);
    if ( v44 < 0 )
    {
      if ( CComposition::s_cRenderFailures > 0xA )
        ModuleFailFastForHRESULT((unsigned int)v44, retaddr, v68);
      v166 = CComposition::s_cRenderFailures + 2;
    }
    else
    {
      if ( !CComposition::s_cRenderFailures )
        goto LABEL_87;
      v166 = CComposition::s_cRenderFailures - 1;
    }
    CComposition::s_cRenderFailures = v166;
LABEL_87:
    if ( v44 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v67, &dword_1802920EC, 1u, v44, 0x2E1u, 0LL);
    if ( v193 )
      g_dwFailFastForThreadId = 0;
    v69 = v195;
    v70 = CComposition::PostRender((CComposition *)v37, v195);
    LODWORD(v197) = v70;
    v12 = v70;
    if ( v70 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v72, &dword_1802920EC, 1u, v70, 0x2E6u, 0LL);
    }
    else if ( v69 )
    {
      v12 = 142213121;
      LODWORD(v197) = 142213121;
    }
    if ( v39 )
      goto LABEL_99;
    goto LABEL_95;
  }
  v167 = CRenderTargetManager::NotifyInvalidDisplaySet(*(CRenderTargetManager **)(v37 + 64));
  LODWORD(v197) = v167;
  v12 = v167;
  if ( v167 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v168, &dword_1802920EC, 1u, v167, 0x2D7u, 0LL);
    if ( v193 )
LABEL_305:
      g_dwFailFastForThreadId = 0;
  }
  else if ( v193 )
  {
    goto LABEL_305;
  }
LABEL_95:
  v73 = CComposition::ProcessPostPresent((CComposition *)v37, 1);
  v74 = v73;
  if ( v73 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v72, &dword_1802920EC, 1u, v73, 0x2F8u, 0LL);
  if ( !v12 )
    goto LABEL_98;
  if ( v12 < 0 )
    goto LABEL_306;
  if ( v74 < 0 )
  {
LABEL_98:
    v12 = v74;
    LODWORD(v197) = v74;
  }
LABEL_99:
  if ( v12 < 0 )
  {
LABEL_306:
    MilInstrumentationCheckHR_MaybeFailFast(v72, &dword_1802C0180, 2u, v12, 0x38Au, 0LL);
    v75 = v199;
    goto LABEL_102;
  }
  if ( CDebugVisualRenderer::s_fEnableDebug )
  {
    if ( !CDebugVisualRenderer::s_pVisual )
    {
      v169 = *(_QWORD *)(v37 + 64);
      v170 = 0;
      v171 = 0LL;
      v202[0] = 0;
      if ( *(_DWORD *)(v169 + 80) )
      {
        while ( 1 )
        {
          v172 = (CDirtyRegion *)v170;
          v173 = *(_QWORD *)(v169 + 56);
          v201 = v172;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v173 + 8LL * (_QWORD)v172) + 264LL))(*(_QWORD *)(v173 + 8LL * (_QWORD)v172)) )
            break;
          v170 = v202[0] + 1;
          v202[0] = v170;
          if ( v170 >= *(_DWORD *)(v169 + 80) )
          {
            v171 = 0LL;
            goto LABEL_313;
          }
        }
        v171 = *(_QWORD *)(*(_QWORD *)(v169 + 56) + 8LL * (_QWORD)v201);
      }
LABEL_313:
      CDebugVisualRenderer::s_pVisual = *(CVisual **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v171 + 288LL))(v171)
                                                    + 24);
    }
    CDebugVisualRenderer::RenderVisual((struct CComposition *)v37, v71);
  }
  v75 = v39;
LABEL_102:
  *(_QWORD *)(v37 + 376) = 0LL;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v12, 0x459u, 0LL);
  }
  else if ( v12 != 142213121 )
  {
    v12 = 0;
    LODWORD(v197) = 0;
  }
  *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1056LL) = v75;
  v76 = *((_BYTE *)v6 + 26236) | v208;
  *((_BYTE *)v6 + 26236) = v76;
  if ( v12 == 142213121 )
  {
    v12 = 0;
    LODWORD(v197) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
      v76 = *((_BYTE *)v6 + 26236);
    }
  }
  if ( v76 )
    *((_BYTE *)v6 + 26237) = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 8) + 24LL))(*((_QWORD *)v6 + 8)) == 0;
  if ( v12 < 0 )
  {
    lpArgToCompletionRoutine = 980;
LABEL_327:
    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v12, lpArgToCompletionRoutine, 0LL);
    goto LABEL_148;
  }
  v77 = *((_QWORD *)v6 + 3237);
  if ( !*(_BYTE *)(v77 + 1056) || *(_BYTE *)(v77 + 1057) )
  {
    v130 = *((_QWORD *)v6 + 8);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v130 + 72) + 56LL))(*(_QWORD *)(v130 + 72)) )
    {
      if ( *(_DWORD *)(v130 + 424) )
      {
        v135 = 0LL;
        v136 = *(unsigned int *)(v130 + 424);
        do
        {
          v137 = *(_QWORD *)(v130 + 400);
          v225 = 1;
          v226 = 0LL;
          v227 = 0LL;
          v138 = *(CDirtyRegion **)(v135 + v137);
          v228 = 0LL;
          v201 = v138;
          v139 = CChannelContext::PostMessageToChannel(v138, (const struct MIL_MESSAGE *)&v225, v131);
          if ( v139 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, v139, 0x71u, 0LL);
          CDirtyRegion::Release(v201);
          v135 += 8LL;
          --v136;
        }
        while ( v136 );
      }
      *(_DWORD *)(v130 + 424) = 0;
      DynArrayImpl<1>::ShrinkToSize(v130 + 400, 8u);
    }
  }
  v78 = *((_QWORD *)v6 + 3237);
  v79 = *(_BYTE *)(v78 + 1056) && !*(_BYTE *)(v78 + 1057);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v79);
  v80 = (unsigned __int64 *)((char *)v6 + 35656);
  v81 = (_QWORD *)((char *)v6 + 35640);
  v82 = *((_QWORD *)v6 + 4455);
  v83 = ((unsigned __int64)v6 + 35656) | (((_QWORD)v6 + 35656) << 32);
  if ( (v83 ^ v82) != *((_QWORD *)v6 + 4457) )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    v174 = (struct ID3D11Texture2DVtbl *)*v81;
    v175 = *v80 ^ ((unsigned __int64)v80 | (((_QWORD)v6 + 35656) << 32));
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(*v81);
    pExceptionRecord.ExceptionInformation[1] = (unsigned int)v174;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v175);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v175;
    pExceptionRecord.ExceptionCode = -2003304320;
    pExceptionRecord.NumberParameters = 4;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v82 = *((_QWORD *)v6 + 4455);
  }
  *((_QWORD *)v6 + 4456) = v82;
  QueryPerformanceCounter((LARGE_INTEGER *)v6 + 4455);
  v84 = (struct ID3D11Texture2DVtbl *)*v81;
  if ( *v81 < *((_QWORD *)v6 + 4456) )
  {
    memset_0(&v234, 0, sizeof(v234));
    v176 = *((_QWORD *)v6 + 4456);
    v234.ExceptionInformation[0] = SHIDWORD(v84);
    v234.ExceptionInformation[1] = (unsigned int)v84;
    v234.ExceptionInformation[2] = SHIDWORD(v176);
    v234.ExceptionInformation[3] = (unsigned int)v176;
    v234.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    v234.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    v234.ExceptionCode = -2003304293;
    v177 = 1000 * (v176 - (_QWORD)v84);
    v234.NumberParameters = 8;
    v234.ExceptionInformation[6] = (int)((v177 / g_qpcFrequency.QuadPart) >> 32);
    v234.ExceptionInformation[7] = (unsigned int)(v177 / g_qpcFrequency.QuadPart);
    RaiseFailFastException(&v234, 0LL, 0);
    v84 = (struct ID3D11Texture2DVtbl *)*((_QWORD *)v6 + 4455);
  }
  *v80 = (unsigned __int64)v84 ^ v83;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xxxxx(
      *((_QWORD *)v6 + 4456),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      10000000 * ((unsigned __int64)v84 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
    + 10000000 * ((unsigned __int64)v84 / g_qpcFrequency.QuadPart),
      10000000 * (((unsigned __int64)v84 - *((_QWORD *)v6 + 4454)) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
    + 10000000 * (((unsigned __int64)v84 - *((_QWORD *)v6 + 4454)) / g_qpcFrequency.QuadPart),
      (char)v84,
      *((_QWORD *)v6 + 4456),
      *((_QWORD *)v6 + 4453));
    v84 = (struct ID3D11Texture2DVtbl *)*((_QWORD *)v6 + 4455);
  }
  *(_QWORD *)(*((_QWORD *)v6 + 3237) + 320LL) = v84;
  if ( !*((_BYTE *)v6 + 35620)
    || !CFrameInfo::NeedsPresent(*((CFrameInfo **)v6 + 3237))
    || (*(_BYTE *)(v178 + 1201) = 1,
        (int)CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(
               *(CRenderTargetManager **)(*((_QWORD *)v6 + 8) + 64LL),
               *(_DWORD *)(v178 + 496) + 1) >= 0) )
  {
LABEL_123:
    v85 = v210[0];
    v12 = 0;
    v86 = *((_QWORD *)v6 + 3237) + 1080LL;
    LODWORD(v197) = 0;
    v210[0] = *(void **)v86;
    v87 = *(_DWORD *)(v86 + 20);
    *(_QWORD *)v86 = v85;
    LODWORD(v85) = HIDWORD(v211);
    HIDWORD(v211) = v87;
    v88 = *(_DWORD *)(v86 + 24);
    *(_DWORD *)(v86 + 20) = (_DWORD)v85;
    v72 = v212;
    v212 = v88;
    *(_DWORD *)(v86 + 24) = v72;
    v89 = (struct ID3D11Texture2D *)*((_QWORD *)v6 + 3237);
    LODWORD(v198) = *((_DWORD *)v6 + 6470);
    v200 = v89;
    if ( LOBYTE(v89[132].lpVtbl) && !BYTE1(v89[132].lpVtbl) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        lpVtbl = v89[148].lpVtbl;
        v89 = v200;
        McTemplateU0xxxxq(
          v200[2].lpVtbl,
          (unsigned __int64)(10000000 * (*v81 % g_qpcFrequency.QuadPart)) % g_qpcFrequency.QuadPart,
          10000000 * (*v81 / g_qpcFrequency.QuadPart)
        + (unsigned __int64)(10000000 * (*v81 % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart,
          10000000
        * ((unsigned __int64)lpVtbl / g_qpcFrequency.QuadPart
         - (unsigned __int64)v200[183].lpVtbl / g_qpcFrequency.QuadPart)
        + 10000000 * ((unsigned __int64)lpVtbl % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        - 10000000 * ((unsigned __int64)v200[183].lpVtbl % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart,
          (char)v200[2].lpVtbl,
          LOBYTE(v200[1].lpVtbl) - 1);
      }
      v90 = *((_BYTE *)v6 + 26236);
      v218 = 0LL;
      v219 = 0;
      *(_OWORD *)v217 = 0LL;
      if ( v90 )
      {
        LODWORD(v89[12].lpVtbl) = 0;
        v90 = *((_BYTE *)v6 + 26236);
      }
      v215 = v90;
      v91 = *((_BYTE *)v6 + 26238);
      v213[1] = (char *)v6 + 25920;
      v92 = (CComposition *)*((_QWORD *)v6 + 8);
      v213[0] = v89;
      v214 = 1;
      v216 = v91;
      v93 = CComposition::Present(v92, (struct FRAME_TIME_INFO *)v213);
      LODWORD(v197) = v93;
      v12 = v93;
      if ( v93 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v93, 0x2D1u, 0LL);
      *((_BYTE *)v6 + 26236) |= v215;
      if ( v12 >= 0 )
      {
        BYTE1(v89[132].lpVtbl) = 1;
        ++*((_DWORD *)v6 + 7724);
        if ( BYTE1(v89[132].lpVtbl) )
        {
          v95 = (CDirtyRegion *)*((_QWORD *)v6 + 8);
          v201 = v95;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
            v95 = v201;
          }
          v96 = (CRenderTargetManager *)*((_QWORD *)v95 + 8);
          v202[0] = 16;
          LastPresentCount = CRenderTargetManager::GetLastPresentCount(v96, v202, (unsigned int *)&v89[4]);
          LODWORD(v200) = LastPresentCount;
          if ( LastPresentCount < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v99, &dword_1802920EC, 1u, LastPresentCount, 0xB92u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v101, &dword_1802920EC, 1u, (int)v200, 0x75u, 0LL);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qN16(v99, v98, v202[0], v100, (__int64)&v89[4]);
        }
        *((_DWORD *)v6 + 6472) = (_DWORD)v198;
        v89[41].lpVtbl = *(struct ID3D11Texture2DVtbl **)v81;
        v102 = *((_QWORD *)v6 + 8);
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v102 + 72) + 56LL))(*(_QWORD *)(v102 + 72)) )
        {
          if ( *(_DWORD *)(v102 + 424) )
          {
            v141 = 0LL;
            v142 = *(unsigned int *)(v102 + 424);
            do
            {
              v143 = *(_QWORD *)(v102 + 400);
              *(_DWORD *)v223 = 1;
              *(_QWORD *)&v223[4] = 0LL;
              *(_QWORD *)&v223[12] = 0LL;
              v144 = *(CDirtyRegion **)(v143 + v141);
              v224 = 0LL;
              v201 = v144;
              v145 = CChannelContext::PostMessageToChannel(v144, (const struct MIL_MESSAGE *)v223, v103);
              if ( v145 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v146, 0LL, 0, v145, 0x71u, 0LL);
              CDirtyRegion::Release(v201);
              v141 += 8LL;
              --v142;
            }
            while ( v142 );
            v3 = (char *)v6 + 72;
          }
          *(_DWORD *)(v102 + 424) = 0;
          DynArrayImpl<1>::ShrinkToSize(v102 + 400, 8u);
        }
        ++*((_QWORD *)v6 + 4453);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Stop);
      }
      for ( k = 0; k < v219; ++k )
        operator delete(*((void **)v217[0] + k));
      v219 = 0;
      DynArrayImpl<0>::ShrinkToSize(v217, 8LL);
      v72 = (unsigned int)v217[0];
      if ( v217[0] != v217[1] )
        operator delete(v217[0]);
    }
    if ( v12 >= 0 )
      goto LABEL_148;
    lpArgToCompletionRoutine = 1029;
    goto LABEL_327;
  }
  CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(v6, 1);
  LODWORD(v197) = FrameStart;
  v12 = FrameStart;
  if ( FrameStart >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
    goto LABEL_123;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v180, 0LL, 0, FrameStart, 0x3F8u, 0LL);
LABEL_148:
  v105 = *(void **)(*((_QWORD *)v6 + 7) + 48LL);
  if ( v105 )
    PulseEvent(v105);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v105, 0LL, 0, v12, 0x40Fu, 0LL);
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v206);
    LOBYTE(v15) = i;
    v119 = 0;
    goto LABEL_179;
  }
  v106 = *((_QWORD *)v6 + 3237);
  if ( *(_BYTE *)(v106 + 1056) && !*(_BYTE *)(v106 + 1057) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v6, 0LL, 2LL);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v6);
  v107 = *((_QWORD *)v6 + 3238);
  v108 = *((_QWORD *)v6 + 3237);
  v204 = v108;
  v109 = *(_QWORD *)(v107 + 304);
  if ( v109 )
    v110 = (struct ID3D11Texture2D *)(*(_QWORD *)(v108 + 304) - v109);
  else
    v110 = *(struct ID3D11Texture2D **)(v108 + 1464);
  v200 = v110;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v182 = *(_QWORD *)(v108 + 304);
    v183 = *(_QWORD *)(v108 + 320);
    v205 = (unsigned __int64)(10000000 * (*(_QWORD *)(v108 + 312) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
         + 10000000 * (*(_QWORD *)(v108 + 312) / g_qpcFrequency.QuadPart);
    *(_QWORD *)v202 = 10000000 * (v183 / g_qpcFrequency.QuadPart)
                    + 10000000 * (v183 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v184 = v182;
    v185 = *(_QWORD *)(v108 + 1184);
    v198 = (struct ID2D1Bitmap *)(10000000 * (v184 / g_qpcFrequency.QuadPart)
                                + 10000000 * (v184 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
    v186 = *(_QWORD *)(v108 + 1464);
    v201 = (CDirtyRegion *)(10000000 * (v185 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
                          + 10000000 * (v185 / g_qpcFrequency.QuadPart));
    v6 = v221;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      v202[0] - v205,
      (_DWORD)v198
    + 10000000 * (v186 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
    + 10000000 * (v186 / g_qpcFrequency.QuadPart)
    - v205,
      *((_DWORD *)v221 + 6470),
      *(_QWORD *)v204,
      *(_DWORD *)(v204 + 32),
      (char)v201,
      *(_QWORD *)(v204 + 1184),
      *(_DWORD *)(v204 + 172));
    v108 = *((_QWORD *)v6 + 3237);
    v12 = v197;
  }
  v111 = (CPartitionVerticalBlankScheduler *)((char *)v6 + 30832);
  v112 = *(_DWORD *)(v108 + 104);
  v113 = *(_DWORD *)(v108 + 100);
  v114 = *(_QWORD *)(v108 + 1208);
  v115 = *(_QWORD *)(v108 + 328);
  v116 = *(_QWORD *)(v108 + 312);
  if ( *(_BYTE *)(v108 + 1057) )
  {
    ++*((_DWORD *)v6 + 7716);
    *((_DWORD *)v6 + 7714) = 0;
    *((_QWORD *)v6 + 3860) += v115 - v116;
    if ( v115 - v116 > *((_QWORD *)v6 + 3861) )
      *((_QWORD *)v6 + 3861) = v115 - v116;
    if ( v115 - *((_QWORD *)v6 + 3856) > 4 * v114 )
      ++*((_DWORD *)v6 + 7717);
    *((_QWORD *)v6 + 3856) = v115;
    if ( v113 )
      ++*((_DWORD *)v6 + 7718);
    if ( v112 )
      ++*((_DWORD *)v6 + 7719);
    v117 = (double)((int)v115 - *(_DWORD *)v111);
    if ( (__int64)(v115 - *(_QWORD *)v111) < 0 )
      v117 = v117 + 1.844674407370955e19;
    if ( v117 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) >= 60000.0 )
      CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
        (CPartitionVerticalBlankScheduler *)((char *)v6 + 30832),
        v115);
  }
  else if ( ++*((_DWORD *)v6 + 7714) > 0x3Cu )
  {
    v132 = *((_QWORD *)v6 + 3855);
    if ( !v132 || QpcToMilliseconds(v116 - v132) > 600000.0 )
      CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(v111, v116);
  }
  for ( m = 0; m < v212; ++m )
    operator delete(*((void **)v210[0] + m));
  v212 = 0;
  if ( v210[0] != v210[1] )
  {
    operator delete(v210[0]);
    v210[0] = v210[1];
    HIDWORD(v211) = v211;
  }
  LOBYTE(v15) = i;
  v13 = 1;
  v16 = v192;
LABEL_175:
  v119 = v16;
  v120 = *((_QWORD *)v6 + 3238);
  if ( !*(_BYTE *)(v120 + 1056) || *(_BYTE *)(v120 + 1057) )
    v13 = 0;
  v4 = v13;
LABEL_179:
  v121 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v119, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v119, v4, v15, *((_DWORD *)v6 + 7725));
    v121 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v121 & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  v122 = qword_18033CC60;
  CProcessAttributionManager::EnumerateChangedProcessAttributions(
    *(CProcessAttributionManager **)(*((_QWORD *)qword_18033CC60 + 15) + 8LL),
    *((struct CProcessAttributionObserver **)qword_18033CC60 + 15),
    qword_18033CC60,
    (void (__high *)(void *, unsigned int, unsigned __int64, const unsigned __int16 *, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_7073ea3a1159c22cf152f2e0fb8a80e9_::_lambda_invoker_cdecl_);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v191 = (__int64)(*((_QWORD *)v122 + 7) - *((_QWORD *)v122 + 6)) >> 2;
    lpArgToCompletionRoutinea = (__int64)(*((_QWORD *)v122 + 4) - *((_QWORD *)v122 + 3)) >> 2;
    McTemplateU0qQR0qQR2qQR4qQR6qQR8(
      lpArgToCompletionRoutinea,
      v191,
      (__int64)(*((_QWORD *)v122 + 1) - *(_QWORD *)v122) >> 2,
      *(_QWORD *)v122,
      lpArgToCompletionRoutinea,
      *((_QWORD *)v122 + 3),
      v191,
      *((_QWORD *)v122 + 6),
      (__int64)(*((_QWORD *)v122 + 10) - *((_QWORD *)v122 + 9)) >> 2,
      *((_QWORD *)v122 + 9),
      (__int64)(*((_QWORD *)v122 + 13) - *((_QWORD *)v122 + 12)) >> 2,
      *((_QWORD *)v122 + 12));
    v12 = v197;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      *((_QWORD *)v122 + 1) = *(_QWORD *)v122;
      *((_QWORD *)v122 + 4) = *((_QWORD *)v122 + 3);
      *((_QWORD *)v122 + 7) = *((_QWORD *)v122 + 6);
      *((_QWORD *)v122 + 10) = *((_QWORD *)v122 + 9);
      *((_QWORD *)v122 + 13) = *((_QWORD *)v122 + 12);
    }
  }
  v123 = qword_18033CC68;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - *(_QWORD *)v123 >= 0x3E8 )
  {
    *(_QWORD *)v123 = TickCount64;
    CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v123);
  }
  v125 = qword_18033CC58;
  v126 = GetTickCount64();
  v127 = v126 - *(_QWORD *)v125;
  if ( v127 >= 0x3E8 )
  {
    *(_QWORD *)v125 = v126;
    *((_DWORD *)v125 + 2) = v127;
    CEnergyReporter::SendReportToE3(v125);
  }
  *((_BYTE *)v6 + 35620) = 0;
  if ( v3 )
  {
    v128 = (void *)*((_QWORD *)v3 + 2);
    v3[24] = 0;
    if ( !CancelWaitableTimer(v128) )
    {
      v187 = GetLastError();
      if ( v187 > 0 )
        v187 = (unsigned __int16)v187 | 0x80070000;
      if ( v187 >= 0 )
        v187 = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)v187, retaddr, v188);
    }
  }
  return (unsigned int)v12;
}
