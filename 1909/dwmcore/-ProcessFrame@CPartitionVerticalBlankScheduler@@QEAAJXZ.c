/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x18001F464 (-SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800302D0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x18006F6A4 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006F790 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??$insert_unchecked@AEBQEAVCOverlayContext@@@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@AEBQEAVCOverlayContext@@@Z @ 0x18007007C (--$insert_unchecked@AEBQEAVCOverlayContext@@@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180070190 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180071034 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180073718 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180073950 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180075570 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180077538 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180077614 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800AAA84 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800B3084 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     QpcToMilliseconds @ 0x1800B329C (QpcToMilliseconds.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BC1C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ @ 0x1800C1F3C (-SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C72C4 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CBBA8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800D6ED0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DFAE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_7073ea3a1159c22cf152f2e0fb8a80e9__void_ @ 0x1800EBB60 (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_con_ea_1800EBB60.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EC7A0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_N@Z @ 0x180159C88 (-TriggerFailFastOnNextFailure@@YAX_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     McTemplateU0qqqq @ 0x180164C60 (McTemplateU0qqqq.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8 @ 0x1801776E8 (McTemplateU0qQR0qQR2qQR4qQR6qQR8.c)
 *     McTemplateU0t @ 0x1801781B0 (McTemplateU0t.c)
 *     McTemplateU0xqqq @ 0x180178218 (McTemplateU0xqqq.c)
 *     McTemplateU0xxxxq @ 0x180178380 (McTemplateU0xxxxq.c)
 *     McTemplateU0xxxxx @ 0x180178438 (McTemplateU0xxxxx.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180179E14 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801819B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ?NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ @ 0x180187974 (-NotifyInvalidDisplaySet@CRenderTargetManager@@QEAAJXZ.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180187B98 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18018BB9C (-NeedsPresent@CFrameInfo@@QEBA_NXZ.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18018BBB8 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     McTemplateU0qN16 @ 0x180191C78 (McTemplateU0qN16.c)
 *     McTemplateU0qNR0 @ 0x180191CFC (McTemplateU0qNR0.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180191F38 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801C7E5C (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801CC674 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18021A1B0 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021A79C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rbx
  int v4; // r12d
  int v5; // esi
  CPartitionVerticalBlankScheduler *v6; // r15
  LONG v7; // r14d
  char *Thread; // rax
  HANDLE *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // r8d
  int v17; // ecx
  unsigned int v18; // ecx
  volatile struct IUnknown *volatile v19; // rdi
  int v20; // esi
  struct ID2D1Bitmap *v21; // rcx
  unsigned __int64 v22; // rdx
  CTelemetryFrameStatistics *v23; // r8
  unsigned __int8 v24; // al
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdi
  unsigned int v31; // r11d
  __int64 v32; // r10
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // r9d
  __m128i v36; // xmm1
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // xmm1_8
  unsigned int v39; // esi
  char *v40; // rcx
  unsigned int v41; // edx
  __int64 *v42; // r9
  int *v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  char v46; // al
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  char v50; // al
  __int64 v51; // rcx
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // r14
  char v55; // cl
  bool v56; // zf
  char v57; // al
  char v58; // si
  int v59; // eax
  unsigned int v60; // ecx
  int v61; // r13d
  int v62; // edi
  unsigned int v63; // esi
  int v64; // eax
  unsigned int v65; // ecx
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  bool v69; // si
  __int64 v70; // r13
  _BYTE *v71; // rsi
  unsigned int v72; // eax
  _BYTE *v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // r15
  __int64 v76; // rdi
  __int64 v77; // rdi
  int v78; // eax
  unsigned int v79; // ecx
  _BYTE *v80; // rcx
  __int64 v81; // rax
  CVisualGroup *v82; // rcx
  unsigned int v83; // r15d
  unsigned __int64 v84; // rsi
  CVisualGroup *v85; // rcx
  int v86; // eax
  unsigned int v87; // ecx
  int v88; // esi
  unsigned int v89; // ecx
  __int64 v90; // r8
  unsigned int v91; // eax
  unsigned int v92; // eax
  int v93; // eax
  struct CVisual *v94; // rdx
  unsigned int v95; // ecx
  int v96; // eax
  unsigned int v97; // ecx
  int v98; // eax
  int v99; // esi
  char v100; // di
  __int64 v101; // rsi
  __int64 v102; // rcx
  unsigned int v103; // edi
  __int64 v104; // rax
  char v105; // al
  __int64 v106; // rax
  struct ID2D1Bitmap *v107; // rdi
  unsigned int v108; // eax
  struct ID2D1Bitmap *v109; // r15
  __int64 v110; // rdi
  __int64 v111; // r14
  __int64 v112; // rax
  CChannelContext *v113; // rsi
  int v114; // eax
  unsigned int v115; // ecx
  __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // r14
  unsigned __int64 *v119; // r13
  __int64 v120; // rsi
  __int64 v121; // rdi
  unsigned __int64 v122; // rdi
  unsigned __int64 v123; // r14
  unsigned __int64 v124; // rcx
  __int64 v125; // rcx
  int FrameStart; // eax
  unsigned int v127; // ecx
  void *v128; // rcx
  __int64 v129; // rdx
  int v130; // eax
  unsigned int v131; // eax
  unsigned int v132; // ecx
  unsigned __int64 v133; // rdi
  unsigned __int64 v134; // r9
  unsigned __int64 v135; // r8
  char v136; // al
  char v137; // al
  CComposition *v138; // rcx
  int v139; // eax
  unsigned int v140; // ecx
  __int64 v141; // r14
  CRenderTargetManager *v142; // rcx
  int LastPresentCount; // eax
  int v144; // edx
  unsigned int v145; // ecx
  int v146; // r9d
  int v147; // r14d
  unsigned int v148; // ecx
  struct ID2D1Bitmap *v149; // rdi
  unsigned int v150; // eax
  struct ID2D1Bitmap *v151; // r15
  __int64 v152; // rdi
  __int64 v153; // r14
  __int64 v154; // rax
  CChannelContext *v155; // rsi
  int v156; // eax
  unsigned int v157; // ecx
  unsigned int j; // edi
  void *v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // r14
  __int64 v163; // rcx
  __int64 v164; // rdi
  unsigned __int64 v165; // r10
  unsigned __int64 v166; // rtt
  unsigned __int64 v167; // rtt
  unsigned __int64 v168; // r10
  unsigned __int64 v169; // rtt
  int v170; // edi
  int v171; // r11d
  __int64 v172; // r10
  __int64 v173; // r9
  __int64 v174; // rax
  double v175; // xmm1_8
  unsigned int k; // edi
  int v177; // ecx
  __int64 v178; // rax
  char v179; // al
  CProcessAttributionReporter *v180; // r12
  __int64 v181; // rax
  __int64 v182; // r9
  CProcessResourceAttributionReporter *v183; // rdi
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v185; // rdi
  ULONGLONG v186; // rax
  unsigned __int64 v187; // rcx
  void *v188; // rcx
  signed int v190; // eax
  __int64 v191; // r8
  bool v192; // sf
  signed int LastError; // eax
  __int64 v194; // r8
  bool v195; // sf
  signed int v196; // eax
  __int64 v197; // r8
  bool v198; // sf
  int dwCreationFlags; // [rsp+20h] [rbp-588h]
  LPDWORD lpThreadId; // [rsp+28h] [rbp-580h]
  int v201; // [rsp+30h] [rbp-578h]
  char v202; // [rsp+110h] [rbp-498h]
  char v203; // [rsp+111h] [rbp-497h]
  bool v204; // [rsp+112h] [rbp-496h] BYREF
  char v205; // [rsp+113h] [rbp-495h] BYREF
  char v206; // [rsp+114h] [rbp-494h]
  struct ID2D1Bitmap *v207; // [rsp+118h] [rbp-490h] BYREF
  struct ID3D11Texture2D *v208; // [rsp+120h] [rbp-488h] BYREF
  char v209; // [rsp+128h] [rbp-480h]
  unsigned __int64 v210; // [rsp+130h] [rbp-478h] BYREF
  unsigned int v211[2]; // [rsp+138h] [rbp-470h] BYREF
  __int64 v212; // [rsp+140h] [rbp-468h]
  CPartitionVerticalBlankScheduler *v213; // [rsp+148h] [rbp-460h]
  LARGE_INTEGER DueTime; // [rsp+150h] [rbp-458h] BYREF
  unsigned __int64 v215; // [rsp+158h] [rbp-450h] BYREF
  _QWORD v216[2]; // [rsp+160h] [rbp-448h] BYREF
  int v217; // [rsp+170h] [rbp-438h]
  char v218; // [rsp+174h] [rbp-434h]
  char v219; // [rsp+175h] [rbp-433h]
  void *v220[2]; // [rsp+178h] [rbp-430h]
  __int64 v221; // [rsp+188h] [rbp-420h]
  unsigned int v222; // [rsp+190h] [rbp-418h]
  int i; // [rsp+198h] [rbp-410h]
  _QWORD v224[2]; // [rsp+1A0h] [rbp-408h] BYREF
  int v225; // [rsp+1B0h] [rbp-3F8h]
  char v226; // [rsp+1B4h] [rbp-3F4h]
  char v227; // [rsp+1B5h] [rbp-3F3h]
  void *lpMem[2]; // [rsp+1B8h] [rbp-3F0h] BYREF
  __int64 v229; // [rsp+1C8h] [rbp-3E0h]
  unsigned int v230; // [rsp+1D0h] [rbp-3D8h]
  __int64 v231; // [rsp+1D8h] [rbp-3D0h] BYREF
  signed __int64 v232[2]; // [rsp+1E0h] [rbp-3C8h] BYREF
  _BYTE v233[20]; // [rsp+1F0h] [rbp-3B8h] BYREF
  __int64 v234; // [rsp+204h] [rbp-3A4h]
  int v235; // [rsp+210h] [rbp-398h] BYREF
  __int64 v236; // [rsp+214h] [rbp-394h]
  __int64 v237; // [rsp+21Ch] [rbp-38Ch]
  __int64 v238; // [rsp+224h] [rbp-384h]
  __int64 v239[5]; // [rsp+230h] [rbp-378h] BYREF
  char v240[64]; // [rsp+258h] [rbp-350h] BYREF
  _BYTE *v241; // [rsp+298h] [rbp-310h] BYREF
  _BYTE *v242; // [rsp+2A0h] [rbp-308h]
  struct _EXCEPTION_RECORD *v243; // [rsp+2A8h] [rbp-300h]
  _BYTE v244[128]; // [rsp+2B0h] [rbp-2F8h] BYREF
  struct _EXCEPTION_RECORD v245; // [rsp+330h] [rbp-278h] BYREF
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+3D0h] [rbp-1D8h] BYREF
  _BYTE v247[4]; // [rsp+470h] [rbp-138h] BYREF
  char v248; // [rsp+474h] [rbp-134h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+0h]

  v3 = (char *)this + 72;
  *((_DWORD *)this + 29) = CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds;
  v4 = 0;
  v213 = this;
  _InterlockedExchange((volatile __int32 *)this + 28, 0);
  v5 = *((_DWORD *)this + 30);
  v6 = this;
  v7 = *((_DWORD *)this + 31);
  if ( v5 >= *((_DWORD *)this + 29) )
    v5 = *((_DWORD *)this + 29);
  if ( !*((_BYTE *)this + 98) )
  {
    *((_BYTE *)this + 98) = 1;
    Thread = (char *)CreateThread(0LL, 0LL, CWatchdogTimer::ThreadEntryPoint, (char *)this + 72, 4u, 0LL);
    v9 = (HANDLE *)(v3 + 8);
    if ( v3 + 8 == (char *)&v215 )
    {
      if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(Thread);
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v3 + 8,
        Thread);
      v215 = 0LL;
    }
    if ( !SetThreadPriority(*v9, 15) )
    {
      LastError = GetLastError();
      v195 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v195 = LastError < 0;
      }
      if ( !v195 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v194);
    }
    ResumeThread(*v9);
  }
  if ( v3[24] )
    ModuleFailFastForHRESULT(2147500037LL, retaddr, a3);
  DueTime.QuadPart = -10000LL * v5;
  v10 = (void *)*((_QWORD *)v3 + 2);
  v3[24] = 1;
  if ( !SetWaitableTimer(v10, &DueTime, v7, 0LL, 0LL, 0) )
  {
    v196 = GetLastError();
    v198 = v196 < 0;
    if ( v196 > 0 )
    {
      v196 = (unsigned __int16)v196 | 0x80070000;
      v198 = v196 < 0;
    }
    if ( !v198 )
      v196 = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)v196, retaddr, v197);
  }
  v13 = 0;
  v14 = 1;
  if ( *((_DWORD *)v6 + 7724) <= *((_DWORD *)v6 + 7725) )
  {
    LODWORD(v12) = 1;
    v202 = 1;
    goto LABEL_31;
  }
  v15 = *((_QWORD *)v6 + 3237);
  LOBYTE(v12) = 0;
  v202 = 0;
  if ( !*(_BYTE *)(v15 + 1176) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      McTemplateU0t(v12, v11, *(unsigned __int8 *)(v15 + 1201));
    if ( *((_BYTE *)v6 + 30944) )
    {
      if ( *((_DWORD *)v6 + 8770) == -1 )
        *((_QWORD *)v6 + 4385) = 0LL;
      *((_QWORD *)v6 + *((unsigned int *)v6 + 8771) + 4386) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v6 + 30920));
      v16 = *((_DWORD *)v6 + 8771) + 1;
      LODWORD(v11) = v16 / 0x3C;
      v16 %= 0x3Cu;
      v17 = *((_DWORD *)v6 + 8770);
      *((_DWORD *)v6 + 8771) = v16;
      if ( v17 == v16 )
      {
        v18 = v17 + 1;
        LODWORD(v11) = v18 / 0x3C;
        *((_DWORD *)v6 + 8770) = v18 % 0x3C;
      }
    }
    LODWORD(v12) = CCommonRegistryData::m_parallelModePolicy;
    if ( CCommonRegistryData::m_parallelModePolicy == 2
      || (LODWORD(v12) = CCommonRegistryData::m_parallelModePolicy - 1, CCommonRegistryData::m_parallelModePolicy == 1)
      || (LODWORD(v12) = CCommonRegistryData::m_parallelModePolicy - 3, CCommonRegistryData::m_parallelModePolicy == 3) )
    {
      if ( !*((_DWORD *)v6 + 7725) )
      {
        LODWORD(v12) = 1;
        *((_DWORD *)v6 + 7725) = 1;
        v202 = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Start);
          LODWORD(v12) = 1;
        }
        goto LABEL_31;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0x(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT,
          *(_QWORD *)(*((_QWORD *)v6 + 3237) + 16LL));
    }
    LOBYTE(v12) = 0;
  }
LABEL_31:
  *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1176LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0xqqq(
      v12,
      v11,
      *((_QWORD *)v6 + 3237),
      (unsigned __int8)v12,
      *((_DWORD *)v6 + 7724),
      *((_DWORD *)v6 + 7725));
  v19 = g_pDebugInspectSurface;
  v20 = *((_DWORD *)v6 + 7724);
  for ( i = v20; g_pDebugInspectSurface; v19 = g_pDebugInspectSurface )
  {
    v208 = 0LL;
    v207 = 0LL;
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v208);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))v19->lpVtbl->QueryInterface)(
           v19,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v208) < 0 )
    {
      v21 = v207;
      v207 = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v19->lpVtbl->QueryInterface)(
             v19,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v207) >= 0 )
        DebugInspectBitmap(v207);
    }
    else
    {
      DebugInspectTexture(v208, 0);
    }
    g_pDebugInspectSurface = 0LL;
    __debugbreak();
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v207);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v208);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)v6 + 3237) + 312LL));
  v24 = v202;
  if ( !v202 )
    goto LABEL_296;
  if ( v20 )
    CRenderTargetManager::SyncLockForParallelMode(*(CRenderTargetManager **)(*((_QWORD *)v6 + 8) + 64LL));
  v25 = (_QWORD *)*((_QWORD *)v6 + 3237);
  v26 = v25[148];
  v25[1] = v25[2] + 1LL;
  **((_QWORD **)v6 + 3237) = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 8LL);
  *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 304LL)
                                               + *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1464LL);
  if ( *((_DWORD *)v6 + 7724) || *((_BYTE *)v6 + 35620) )
  {
    *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) += *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1464LL);
    *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1192LL) = 1;
    v27 = *((_QWORD *)v6 + 3237);
    if ( *(_BYTE *)(v27 + 1060) )
    {
      v28 = *(_DWORD *)(v27 + 108) + 2;
      goto LABEL_52;
    }
  }
  else
  {
    v27 = *((_QWORD *)v6 + 3237);
    if ( *(_BYTE *)(v27 + 1060) )
    {
      v28 = *(_DWORD *)(v27 + 108) + 1;
LABEL_52:
      *(_DWORD *)(v27 + 172) = v28;
    }
  }
  v29 = *((_QWORD *)v6 + 3237);
  v30 = v29;
  if ( *(_BYTE *)(v29 + 1060) )
  {
    v31 = 1;
    if ( *(_DWORD *)(v29 + 472) > 1u )
    {
      do
      {
        v32 = v31;
        v33 = *(_QWORD *)(v29 + 8LL * v31 + 1208);
        v34 = 32 * (v31 + 15LL);
        v35 = *(_DWORD *)(v34 + v29 + 16);
        v207 = (struct ID2D1Bitmap *)v35;
        *(_OWORD *)v233 = *(_OWORD *)(v34 + v29);
        if ( v33 )
        {
          v36 = *(__m128i *)(v34 + v29 + 16);
          v37 = *(_QWORD *)(v29 + 1184);
          v38 = _mm_srli_si128(v36, 8).m128i_u64[0];
          if ( v37 > v38 )
          {
            v207 = (struct ID2D1Bitmap *)((char *)v207 + (v37 - v38) / v33);
            v35 = (unsigned int)v207;
          }
        }
        if ( (v33 + (*(_QWORD *)(v29 + 1208) >> 1)) / *(_QWORD *)(v29 + 1208) < 2 )
          *(_DWORD *)(v29 + 4LL * v31 + 172) = v35;
        else
          *(_DWORD *)(v29 + 4LL * v31 + 172) = v35 + 1;
        ++v31;
        *(_DWORD *)(*((_QWORD *)v6 + 3237) + 4 * v32 + 108) = v35 + 1;
        v30 = *((_QWORD *)v6 + 3237);
        v29 = v30;
      }
      while ( v31 < *(_DWORD *)(v30 + 472) );
    }
  }
  v39 = *(_DWORD *)(v30 + 96);
  memset_0(v247, 0, 0x100uLL);
  v41 = 0;
  if ( v39 )
  {
    v42 = (__int64 *)(v30 + 1208);
    v43 = (int *)(v30 + 172);
    v40 = &v248;
    do
    {
      if ( v41 >= 0x10 )
        break;
      ++v41;
      *((_DWORD *)v40 - 1) = *(v43 - 16);
      v44 = *v43++;
      *(_DWORD *)v40 = v44;
      v45 = *v42++;
      *(_QWORD *)(v40 + 4) = v45;
      v40 += 16;
    }
    while ( v41 < v39 );
  }
  v46 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0((_DWORD)v40, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v39, 16, (__int64)v247);
    v46 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v47 = *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL);
  v48 = *(_QWORD *)(*((_QWORD *)v6 + 3238) + 1184LL);
  if ( v47 < v48 )
  {
    if ( v47 >= v26 )
    {
      if ( (v46 & 0x10) != 0 )
        goto LABEL_75;
      goto LABEL_76;
    }
  }
  else if ( v47 >= v26 )
  {
    goto LABEL_79;
  }
  if ( (v46 & 0x10) != 0 )
  {
    v48 = v26;
LABEL_75:
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v48 - v47);
  }
LABEL_76:
  v49 = *(_QWORD *)(*((_QWORD *)v6 + 3238) + 1184LL);
  if ( v49 <= v26 )
    v49 = v26;
  *(_QWORD *)(*((_QWORD *)v6 + 3237) + 1184LL) = v49;
LABEL_79:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v6);
  v50 = *((_BYTE *)v6 + 26236);
  v51 = *((_QWORD *)v6 + 3237);
  v221 = 0LL;
  v222 = 0;
  *(_OWORD *)v220 = 0LL;
  if ( v50 )
  {
    *(_DWORD *)(v51 + 96) = 0;
    v50 = *((_BYTE *)v6 + 26236);
  }
  v218 = v50;
  v52 = *((_BYTE *)v6 + 26238);
  v216[0] = v51;
  *((_BYTE *)v6 + 26238) = 0;
  v217 = 1;
  v216[1] = (char *)v6 + 25920;
  v219 = v52;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Start);
  v53 = *((_QWORD *)v6 + 3237);
  v54 = *((_QWORD *)v6 + 8);
  v204 = 0;
  v203 = 0;
  v55 = *(_BYTE *)(v53 + 1056);
  v56 = *(_DWORD *)(v54 + 368) == 1;
  *(_QWORD *)(v54 + 376) = v216;
  *(_DWORD *)(v54 + 1104) = 0;
  v57 = v218;
  if ( v56 )
    v57 = 1;
  v209 = v55;
  v218 = v57;
  *(_BYTE *)(v54 + 1272) = 0;
  CComposition::UpdateDisplaySet((CRenderTargetManager **)v54);
  if ( CComposition::s_cRenderFailures <= 0xA )
  {
    v58 = 0;
    v206 = 0;
  }
  else
  {
    v206 = 1;
    v58 = 1;
    TriggerFailFastOnNextFailure(1);
  }
  v59 = CComposition::PreRender((CComposition *)v54, &v204);
  v61 = v59;
  if ( v59 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v60, &dword_180280CA0, 1u, v59, 0x2D0u, 0LL);
  if ( !*(_BYTE *)(v54 + 1272) && v61 != -2003304442 && v61 != -2003304291 )
  {
    v62 = 0;
    v203 = 0;
    v63 = 0;
    if ( *(_DWORD *)(v54 + 688) )
    {
      while ( 1 )
      {
        v64 = CCachedVisualImage::PerformDelayedSnapshot(*(CCachedVisualImage **)(*(_QWORD *)(v54 + 664) + 8LL * v63));
        v62 = v64;
        if ( v64 < 0 )
          break;
        if ( ++v63 >= *(_DWORD *)(v54 + 688) )
          goto LABEL_98;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0xA12u, 0LL);
    }
LABEL_98:
    *(_DWORD *)(v54 + 688) = 0;
    DynArrayImpl<0>::ShrinkToSize(v54 + 664, 8LL);
    v69 = v204;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v67, &dword_1802BE2C0, 2u, v62, 0x3DAu, 0LL);
    }
    else
    {
      v62 = v61;
      if ( v61 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v67, &dword_1802BE2C0, 2u, v61, 0x3DDu, 0LL);
      }
      else if ( v204 )
      {
        if ( !v61 )
          v62 = 142213121;
      }
      else
      {
        v70 = *(_QWORD *)(v54 + 64);
        v203 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
          McTemplateU0qqqq(
            v67,
            (unsigned int)&EVTDESC_RENDERTARGET_COUNTS,
            *(_DWORD *)(v70 + 96),
            *(_DWORD *)(v70 + 100),
            *(_DWORD *)(v70 + 104),
            *(_DWORD *)(v70 + 108));
        v243 = &v245;
        v71 = v244;
        v72 = *(_DWORD *)(v70 + 48);
        v73 = v244;
        v241 = v244;
        v242 = v244;
        if ( v72 )
        {
          v74 = 0LL;
          v75 = v72;
          do
          {
            v76 = *(_QWORD *)(v74 + *(_QWORD *)(v70 + 24));
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 48LL))(v76, 80LL) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v76 + 248LL))(v76) )
              {
                v231 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 264LL))(v76);
                if ( v231 )
                {
                  v210 = (unsigned __int64)v242;
                  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert_unchecked<COverlayContext * const &>(
                    (char *)&v241,
                    v239,
                    &v210,
                    &v231);
                }
              }
            }
            v74 += 8LL;
            --v75;
          }
          while ( v75 );
          v73 = v242;
          v71 = v241;
          v6 = v213;
        }
        v77 = (v73 - v71) >> 3;
        if ( v77 < 0 )
        {
          gsl::details::throw_exception<gsl::narrowing_error>(v67, v66, v68);
          __debugbreak();
        }
        v232[0] = v77;
        v232[1] = (signed __int64)v71;
        if ( !v71 && v77 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v78 = COverlayContext::ComputeOverlayConfiguration(v232, v66);
        v62 = v78;
        if ( v78 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x13Au, 0LL);
        v80 = v241;
        v81 = (v242 - v241) >> 3;
        if ( v81 )
          v242 -= 8 * v81;
        v241 = 0LL;
        if ( v80 == v244 )
          v80 = 0LL;
        operator delete(v80);
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v82, &dword_1802BE2C0, 2u, v62, 0xE8u, 0LL);
        }
        else if ( *(_DWORD *)(v70 + 48) )
        {
          v83 = 0;
          do
          {
            v84 = *(_QWORD *)(*(_QWORD *)(v70 + 24) + 8LL * v83);
            v205 = 0;
            v210 = v84;
            v85 = *(CVisualGroup **)(v84 + 128);
            if ( v85 )
              CVisualGroup::SetExcludeSubtree(v85, 1);
            v86 = (*(__int64 (__fastcall **)(unsigned __int64, char *))(*(_QWORD *)(v84 + 64) + 56LL))(v84 + 64, &v205);
            v88 = v86;
            if ( v86 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v87, &dword_1802BE2C0, 2u, v86, 0xF1u, 0LL);
            v82 = *(CVisualGroup **)(v210 + 128);
            if ( v82 )
              CVisualGroup::SetExcludeSubtree(v82, 0);
            if ( v88 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v82, &dword_1802BE2C0, 2u, v88, 0xF9u, 0LL);
            }
            else if ( v205 )
            {
              v203 = 1;
            }
            if ( !v62 || v62 >= 0 && v88 < 0 )
              v62 = v88;
            ++v83;
          }
          while ( v83 < *(_DWORD *)(v70 + 48) );
          v6 = v213;
        }
        if ( !*(_DWORD *)(v70 + 96) )
          *(_BYTE *)(v70 + 113) = 0;
        if ( v62 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v82, &dword_1802BE2C0, 2u, v62, 0x3E2u, 0LL);
        v69 = v204;
      }
    }
    CComposition::ProcessRenderingStatus((CComposition *)v54, v62);
    if ( v62 < 0 )
    {
      if ( CComposition::s_cRenderFailures > 0xA )
        ModuleFailFastForHRESULT((unsigned int)v62, retaddr, v90);
      v91 = CComposition::s_cRenderFailures + 2;
    }
    else
    {
      if ( !CComposition::s_cRenderFailures )
        goto LABEL_156;
      v91 = CComposition::s_cRenderFailures - 1;
    }
    CComposition::s_cRenderFailures = v91;
LABEL_156:
    if ( v62 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v89, &dword_180280CA0, 1u, v62, 0x2E1u, 0LL);
    v92 = g_dwFailFastForThreadId;
    if ( v206 )
      v92 = 0;
    g_dwFailFastForThreadId = v92;
    v93 = CComposition::PostRender((CComposition *)v54, v69);
    LODWORD(v208) = v93;
    v13 = v93;
    if ( v93 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v95, &dword_180280CA0, 1u, v93, 0x2E6u, 0LL);
    }
    else if ( v69 )
    {
      v13 = 142213121;
      LODWORD(v208) = 142213121;
    }
    if ( v203 )
      goto LABEL_176;
    goto LABEL_170;
  }
  v96 = CRenderTargetManager::NotifyInvalidDisplaySet(*(CRenderTargetManager **)(v54 + 64));
  LODWORD(v208) = v96;
  v13 = v96;
  if ( v96 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v97, &dword_180280CA0, 1u, v96, 0x2D7u, 0LL);
  if ( v58 )
    g_dwFailFastForThreadId = 0;
LABEL_170:
  v98 = CComposition::ProcessPostPresent((CComposition *)v54, 1);
  v99 = v98;
  if ( v98 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v95, &dword_180280CA0, 1u, v98, 0x2F8u, 0LL);
  if ( !v13 )
    goto LABEL_175;
  if ( v13 < 0 )
  {
LABEL_177:
    MilInstrumentationCheckHR_MaybeFailFast(v95, &dword_1802BE2C0, 2u, v13, 0x38Au, 0LL);
    v100 = v209;
    goto LABEL_188;
  }
  if ( v99 < 0 )
  {
LABEL_175:
    v13 = v99;
    LODWORD(v208) = v99;
  }
LABEL_176:
  if ( v13 < 0 )
    goto LABEL_177;
  if ( CDebugVisualRenderer::s_fEnableDebug )
  {
    if ( !CDebugVisualRenderer::s_pVisual )
    {
      v101 = *(_QWORD *)(v54 + 64);
      v102 = 0LL;
      v103 = 0;
      if ( *(_DWORD *)(v101 + 80) )
      {
        while ( 1 )
        {
          v104 = *(_QWORD *)(v101 + 56);
          v210 = v103;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v104 + 8LL * v103) + 264LL))(*(_QWORD *)(v104 + 8LL * v103)) )
            break;
          if ( ++v103 >= *(_DWORD *)(v101 + 80) )
          {
            v102 = 0LL;
            goto LABEL_185;
          }
        }
        v102 = *(_QWORD *)(*(_QWORD *)(v101 + 56) + 8 * v210);
      }
LABEL_185:
      CDebugVisualRenderer::s_pVisual = *(CVisual **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 288LL))(v102)
                                                    + 24);
    }
    CDebugVisualRenderer::RenderVisual((struct CComposition *)v54, v94);
  }
  v100 = v203;
LABEL_188:
  *(_QWORD *)(v54 + 376) = 0LL;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v13, 0x459u, 0LL);
  }
  else
  {
    if ( v13 != 142213121 )
      v13 = 0;
    LODWORD(v208) = v13;
  }
  *(_BYTE *)(*((_QWORD *)v6 + 3237) + 1056LL) = v100;
  v105 = *((_BYTE *)v6 + 26236) | v218;
  *((_BYTE *)v6 + 26236) = v105;
  if ( v13 == 142213121 )
  {
    v13 = 0;
    LODWORD(v208) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
      v105 = *((_BYTE *)v6 + 26236);
    }
  }
  if ( v105 )
    *((_BYTE *)v6 + 26237) = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 8) + 24LL))(*((_QWORD *)v6 + 8)) == 0;
  if ( v13 < 0 )
    goto LABEL_262;
  v106 = *((_QWORD *)v6 + 3237);
  if ( !*(_BYTE *)(v106 + 1056) || *(_BYTE *)(v106 + 1057) )
  {
    v107 = (struct ID2D1Bitmap *)*((_QWORD *)v6 + 8);
    v207 = v107;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v107 + 9) + 56LL))(*((_QWORD *)v107 + 9)) )
    {
      v108 = *((_DWORD *)v107 + 106);
      if ( v108 )
      {
        v109 = v207;
        v110 = 0LL;
        v111 = v108;
        do
        {
          v112 = *((_QWORD *)v109 + 50);
          v235 = 1;
          v113 = *(CChannelContext **)(v110 + v112);
          v236 = 0LL;
          v237 = 0LL;
          v238 = 0LL;
          v114 = CChannelContext::PostMessageToChannel(v113, (const struct MIL_MESSAGE *)&v235);
          if ( v114 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v114, 0x71u, 0LL);
          CDirtyRegion::Release(v113);
          v110 += 8LL;
          --v111;
        }
        while ( v111 );
        v6 = v213;
        v13 = (int)v208;
        v107 = v207;
      }
      *((_DWORD *)v107 + 106) = 0;
      DynArrayImpl<1>::ShrinkToSize((__int64)v107 + 400, 8u);
    }
  }
  v116 = *((_QWORD *)v6 + 3237);
  if ( !*(_BYTE *)(v116 + 1056) || (v117 = 1LL, *(_BYTE *)(v116 + 1057)) )
    v117 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v117);
  if ( v13 < 0 )
  {
LABEL_262:
    MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v13, 0x3D4u, 0LL);
  }
  else
  {
    v118 = *((_QWORD *)v6 + 4455);
    v119 = (unsigned __int64 *)((char *)v6 + 35656);
    v120 = ((unsigned __int64)v6 + 35656) | (((_QWORD)v6 + 35656) << 32);
    if ( (v120 ^ v118) != *((_QWORD *)v6 + 4457) )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      v121 = *v119 ^ ((unsigned __int64)v119 | (((_QWORD)v6 + 35656) << 32));
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v118);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v118;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v121);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v121;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v118 = *((_QWORD *)v6 + 4455);
    }
    *((_QWORD *)v6 + 4456) = v118;
    QueryPerformanceCounter((LARGE_INTEGER *)v6 + 4455);
    v122 = *((_QWORD *)v6 + 4455);
    v123 = *((_QWORD *)v6 + 4456);
    if ( v122 < v123 )
    {
      memset_0(&v245, 0, sizeof(v245));
      v245.ExceptionCode = -2003304293;
      v245.ExceptionInformation[0] = SHIDWORD(v122);
      v245.ExceptionInformation[1] = (unsigned int)v122;
      v245.ExceptionInformation[2] = SHIDWORD(v123);
      v245.ExceptionInformation[3] = (unsigned int)v123;
      v245.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      v245.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      v245.NumberParameters = 8;
      v124 = 1000 * (v123 - v122) / g_qpcFrequency.QuadPart;
      v245.ExceptionInformation[6] = SHIDWORD(v124);
      v245.ExceptionInformation[7] = (unsigned int)v124;
      RaiseFailFastException(&v245, 0LL, 0);
      v122 = *((_QWORD *)v6 + 4455);
    }
    *v119 = v122 ^ v120;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xxxxx(
        *((_QWORD *)v6 + 4456),
        (unsigned int)&EVTDESC_SCHEDULE_TIME,
        10000000 * (v122 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
      + 10000000 * (v122 / g_qpcFrequency.QuadPart),
        10000000 * ((v122 - *((_QWORD *)v6 + 4454)) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
      + 10000000 * ((v122 - *((_QWORD *)v6 + 4454)) / g_qpcFrequency.QuadPart),
        v122,
        *((_QWORD *)v6 + 4456),
        *((_QWORD *)v6 + 4453));
      v122 = *((_QWORD *)v6 + 4455);
    }
    *(_QWORD *)(*((_QWORD *)v6 + 3237) + 320LL) = v122;
    if ( !*((_BYTE *)v6 + 35620) )
      goto LABEL_229;
    if ( !CFrameInfo::NeedsPresent(*((CFrameInfo **)v6 + 3237)) )
      goto LABEL_229;
    *(_BYTE *)(v125 + 1201) = 1;
    if ( (int)CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(
                *(CRenderTargetManager **)(*((_QWORD *)v6 + 8) + 64LL),
                *(_DWORD *)(v125 + 496) + 1) >= 0 )
      goto LABEL_229;
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(v6, 1);
    LODWORD(v208) = FrameStart;
    v13 = FrameStart;
    if ( FrameStart >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
LABEL_229:
      v128 = v220[0];
      v13 = 0;
      v129 = *((_QWORD *)v6 + 3237) + 1080LL;
      LODWORD(v208) = 0;
      v220[0] = *(void **)v129;
      v130 = *(_DWORD *)(v129 + 20);
      *(_QWORD *)v129 = v128;
      LODWORD(v128) = HIDWORD(v221);
      HIDWORD(v221) = v130;
      v131 = *(_DWORD *)(v129 + 24);
      *(_DWORD *)(v129 + 20) = (_DWORD)v128;
      v132 = v222;
      v222 = v131;
      *(_DWORD *)(v129 + 24) = v132;
      v133 = *((_QWORD *)v6 + 3237);
      LODWORD(v207) = *((_DWORD *)v6 + 6470);
      v210 = v133;
      if ( *(_BYTE *)(v133 + 1056) && !*(_BYTE *)(v133 + 1057) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v134 = *(_QWORD *)(v133 + 1184);
          v135 = *(_QWORD *)(v133 + 1464);
          lpThreadId = (LPDWORD)(*(_QWORD *)(v133 + 8) - 1LL);
          v133 = v210;
          McTemplateU0xxxxq(
            *(_QWORD *)(v210 + 16),
            (unsigned __int64)(10000000 * (*((_QWORD *)v6 + 4455) % g_qpcFrequency.QuadPart)) % g_qpcFrequency.QuadPart,
            10000000 * (*((_QWORD *)v6 + 4455) / g_qpcFrequency.QuadPart)
          + (unsigned __int64)(10000000 * (*((_QWORD *)v6 + 4455) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart,
            10000000 * (v134 / g_qpcFrequency.QuadPart - v135 / g_qpcFrequency.QuadPart)
          + 10000000 * (v134 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
          - 10000000 * (v135 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart,
            *(_QWORD *)(v210 + 16),
            (char)lpThreadId);
        }
        v136 = *((_BYTE *)v6 + 26236);
        v229 = 0LL;
        v230 = 0;
        *(_OWORD *)lpMem = 0LL;
        if ( v136 )
        {
          *(_DWORD *)(v133 + 96) = 0;
          v136 = *((_BYTE *)v6 + 26236);
        }
        v226 = v136;
        v137 = *((_BYTE *)v6 + 26238);
        v224[1] = (char *)v6 + 25920;
        v138 = (CComposition *)*((_QWORD *)v6 + 8);
        v224[0] = v133;
        v225 = 1;
        v227 = v137;
        v139 = CComposition::Present(v138, (struct FRAME_TIME_INFO *)v224);
        LODWORD(v208) = v139;
        v13 = v139;
        if ( v139 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, v139, 0x2D1u, 0LL);
        *((_BYTE *)v6 + 26236) |= v226;
        if ( v13 >= 0 )
        {
          *(_BYTE *)(v133 + 1057) = 1;
          ++*((_DWORD *)v6 + 7724);
          if ( *(_BYTE *)(v133 + 1057) )
          {
            v141 = *((_QWORD *)v6 + 8);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
            v142 = *(CRenderTargetManager **)(v141 + 64);
            v211[0] = 16;
            LastPresentCount = CRenderTargetManager::GetLastPresentCount(v142, v211, (unsigned int *)(v133 + 32));
            v147 = LastPresentCount;
            if ( LastPresentCount < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v145, &dword_180280CA0, 1u, LastPresentCount, 0xB92u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v148, &dword_180280CA0, 1u, v147, 0x75u, 0LL);
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0qN16(v145, v144, v211[0], v146, v133 + 32);
          }
          *((_DWORD *)v6 + 6472) = (_DWORD)v207;
          *(_QWORD *)(v133 + 328) = *((_QWORD *)v6 + 4455);
          v149 = (struct ID2D1Bitmap *)*((_QWORD *)v6 + 8);
          v207 = v149;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v149 + 9) + 56LL))(*((_QWORD *)v149 + 9)) )
          {
            v150 = *((_DWORD *)v149 + 106);
            if ( v150 )
            {
              v151 = v207;
              v152 = 0LL;
              v153 = v150;
              do
              {
                v154 = *((_QWORD *)v151 + 50);
                *(_DWORD *)v233 = 1;
                v155 = *(CChannelContext **)(v152 + v154);
                *(_QWORD *)&v233[4] = 0LL;
                *(_QWORD *)&v233[12] = 0LL;
                v234 = 0LL;
                v156 = CChannelContext::PostMessageToChannel(v155, (const struct MIL_MESSAGE *)v233);
                if ( v156 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0, v156, 0x71u, 0LL);
                CDirtyRegion::Release(v155);
                v152 += 8LL;
                --v153;
              }
              while ( v153 );
              v6 = v213;
              v13 = (int)v208;
              v149 = v207;
            }
            *((_DWORD *)v149 + 106) = 0;
            DynArrayImpl<1>::ShrinkToSize((__int64)v149 + 400, 8u);
          }
          ++*((_QWORD *)v6 + 4453);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Stop);
        }
        for ( j = 0; j < v230; ++j )
          operator delete(*((void **)lpMem[0] + j));
        v230 = 0;
        DynArrayImpl<0>::ShrinkToSize(lpMem, 8LL);
        v132 = (unsigned int)lpMem[0];
        if ( lpMem[0] != lpMem[1] )
          operator delete(lpMem[0]);
      }
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v13, 0x405u, 0LL);
      goto LABEL_263;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, FrameStart, 0x3F8u, 0LL);
  }
LABEL_263:
  v159 = *(void **)(*((_QWORD *)v6 + 7) + 48LL);
  if ( v159 )
    PulseEvent(v159);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v159, 0LL, 0, v13, 0x40Fu, 0LL);
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v216);
    v177 = 0;
    goto LABEL_300;
  }
  v160 = *((_QWORD *)v6 + 3237);
  if ( *(_BYTE *)(v160 + 1056) && !*(_BYTE *)(v160 + 1057) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v6, 0LL, 2LL);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(v6);
  v161 = *((_QWORD *)v6 + 3238);
  v162 = *((_QWORD *)v6 + 3237);
  v212 = v162;
  v163 = *(_QWORD *)(v161 + 304);
  if ( v163 )
    v164 = *(_QWORD *)(v162 + 304) - v163;
  else
    v164 = *(_QWORD *)(v162 + 1464);
  *(_QWORD *)v211 = v164;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v165 = *(_QWORD *)(v162 + 304);
    v166 = *(_QWORD *)(v162 + 320);
    v215 = (unsigned __int64)(10000000 * (*(_QWORD *)(v162 + 312) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
         + 10000000 * (*(_QWORD *)(v162 + 312) / g_qpcFrequency.QuadPart);
    DueTime.QuadPart = 10000000 * (v166 / g_qpcFrequency.QuadPart)
                     + 10000000 * (v166 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v167 = v165;
    v168 = *(_QWORD *)(v162 + 1184);
    v207 = (struct ID2D1Bitmap *)(10000000 * (v167 / g_qpcFrequency.QuadPart)
                                + 10000000 * (v167 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
    v169 = *(_QWORD *)(v162 + 1464);
    v210 = 10000000 * (v168 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
         + 10000000 * (v168 / g_qpcFrequency.QuadPart);
    v6 = v213;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      DueTime.LowPart - v215,
      (_DWORD)v207
    + 10000000 * (v169 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
    + 10000000 * (v169 / g_qpcFrequency.QuadPart)
    - v215,
      *((_DWORD *)v213 + 6470),
      *(_QWORD *)v212,
      *(_DWORD *)(v212 + 32),
      v210,
      *(_QWORD *)(v212 + 1184),
      *(_DWORD *)(v212 + 172));
    v162 = *((_QWORD *)v6 + 3237);
    v13 = (int)v208;
  }
  v23 = (CPartitionVerticalBlankScheduler *)((char *)v6 + 30832);
  v170 = *(_DWORD *)(v162 + 104);
  v171 = *(_DWORD *)(v162 + 100);
  v172 = *(_QWORD *)(v162 + 1208);
  v22 = *(_QWORD *)(v162 + 328);
  v173 = *(_QWORD *)(v162 + 312);
  if ( *(_BYTE *)(v162 + 1057) )
  {
    ++*((_DWORD *)v6 + 7716);
    *((_DWORD *)v6 + 7714) = 0;
    *((_QWORD *)v6 + 3860) += v22 - v173;
    if ( v22 - v173 > *((_QWORD *)v6 + 3861) )
      *((_QWORD *)v6 + 3861) = v22 - v173;
    if ( v22 - *((_QWORD *)v6 + 3856) > 4 * v172 )
      ++*((_DWORD *)v6 + 7717);
    *((_QWORD *)v6 + 3856) = v22;
    if ( v171 )
      ++*((_DWORD *)v6 + 7718);
    if ( v170 )
      ++*((_DWORD *)v6 + 7719);
    v175 = (double)((int)v22 - *(_DWORD *)v23);
    if ( (__int64)(v22 - *(_QWORD *)v23) < 0 )
      v175 = v175 + 1.844674407370955e19;
    if ( v175 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) >= 60000.0 )
      CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
        (CPartitionVerticalBlankScheduler *)((char *)v6 + 30832),
        v22);
  }
  else if ( ++*((_DWORD *)v6 + 7714) > 0x3Cu )
  {
    v174 = *((_QWORD *)v6 + 3855);
    if ( !v174 || QpcToMilliseconds(v173 - v174, v22, v23) > 600000.0 )
      CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(v23, v173);
  }
  for ( k = 0; k < v222; ++k )
    operator delete(*((void **)v220[0] + k));
  v222 = 0;
  if ( v220[0] != v220[1] )
  {
    operator delete(v220[0]);
    v220[0] = v220[1];
    HIDWORD(v221) = v221;
  }
  v24 = v202;
  v14 = 1;
LABEL_296:
  v177 = v24;
  v178 = *((_QWORD *)v6 + 3238);
  if ( !*(_BYTE *)(v178 + 1056) || *(_BYTE *)(v178 + 1057) )
    v14 = 0;
  v4 = v14;
LABEL_300:
  v179 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq(v177, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v177, v4, i, *((_DWORD *)v6 + 7725));
    v179 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v179 & 8) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  v180 = qword_180339D50;
  v181 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_7073ea3a1159c22cf152f2e0fb8a80e9__void_(
           v240,
           v22,
           v23,
           *((_QWORD *)qword_180339D50 + 15));
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v182, v180, v181);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v201 = (__int64)(*((_QWORD *)v180 + 7) - *((_QWORD *)v180 + 6)) >> 2;
    dwCreationFlags = (__int64)(*((_QWORD *)v180 + 4) - *((_QWORD *)v180 + 3)) >> 2;
    McTemplateU0qQR0qQR2qQR4qQR6qQR8(
      dwCreationFlags,
      v201,
      (__int64)(*((_QWORD *)v180 + 1) - *(_QWORD *)v180) >> 2,
      *(_QWORD *)v180,
      dwCreationFlags,
      *((_QWORD *)v180 + 3),
      v201,
      *((_QWORD *)v180 + 6),
      (__int64)(*((_QWORD *)v180 + 10) - *((_QWORD *)v180 + 9)) >> 2,
      *((_QWORD *)v180 + 9),
      (__int64)(*((_QWORD *)v180 + 13) - *((_QWORD *)v180 + 12)) >> 2,
      *((_QWORD *)v180 + 12));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      *((_QWORD *)v180 + 1) = *(_QWORD *)v180;
      *((_QWORD *)v180 + 4) = *((_QWORD *)v180 + 3);
      *((_QWORD *)v180 + 7) = *((_QWORD *)v180 + 6);
      *((_QWORD *)v180 + 10) = *((_QWORD *)v180 + 9);
      *((_QWORD *)v180 + 13) = *((_QWORD *)v180 + 12);
    }
  }
  v183 = qword_180339D58;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - *(_QWORD *)v183 >= 0x3E8 )
  {
    *(_QWORD *)v183 = TickCount64;
    CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v183);
  }
  v185 = qword_180339D48;
  v186 = GetTickCount64();
  v187 = v186 - *(_QWORD *)v185;
  if ( v187 >= 0x3E8 )
  {
    *((_DWORD *)v185 + 2) = v187;
    *(_QWORD *)v185 = v186;
    CEnergyReporter::SendReportToE3(v185);
  }
  *((_BYTE *)v6 + 35620) = 0;
  if ( v3 )
  {
    v188 = (void *)*((_QWORD *)v3 + 2);
    v3[24] = 0;
    if ( !CancelWaitableTimer(v188) )
    {
      v190 = GetLastError();
      v192 = v190 < 0;
      if ( v190 > 0 )
      {
        v190 = (unsigned __int16)v190 | 0x80070000;
        v192 = v190 < 0;
      }
      if ( !v192 )
        v190 = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)v190, retaddr, v191);
    }
  }
  return (unsigned int)v13;
}
