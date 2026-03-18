/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D6BE8
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D4FC0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C02577F0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0003644 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00D4CCC (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00D5038 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00FA9EC (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C013B518 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0142120 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0149F2C (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01F21B8 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C02563E0 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3,
        int a4)
{
  struct DXGADAPTER *v4; // r13
  int v5; // ebx
  __int64 v7; // rdx
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  SESSION_VIEW *v12; // rdi
  struct _LUID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rdi
  __int64 v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v22; // eax
  __int64 v23; // r14
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  SESSION_VIEW *v28; // r15
  __int64 v29; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v31; // rdi
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // r15
  bool v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  MONITOR_MGR *v52; // rcx
  int MonitorInstance; // eax
  int v54; // ebx
  struct _LUID v55; // r15
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v57; // rcx
  bool v58; // r15
  bool v59; // r15
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct _DXGKARG_SETPOINTERSHAPE *v64; // r15
  UINT Width; // r11d
  int v66; // r9d
  int v67; // r8d
  int v68; // r10d
  __int128 v69; // xmm0
  int v70; // ebx
  int v71; // edx
  bool v72; // zf
  signed int v73; // ebx
  signed int v74; // r13d
  INT X; // eax
  int v76; // r9d
  int v77; // eax
  __int64 v78; // rdx
  int v79; // r10d
  INT v80; // r8d
  int v81; // r9d
  INT v82; // edx
  int v83; // r10d
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rcx
  const GUID *v89; // r8
  __int64 v91; // rax
  _QWORD *v92; // rcx
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rcx
  _QWORD *v108; // rcx
  const void *pPixels; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  INT v117; // eax
  __int64 v118; // rax
  int v119; // r8d
  int v120; // edx
  __int64 v121; // rdx
  __int64 v122; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  __int64 v124; // r8
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rbx
  _QWORD *v129; // rax
  int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  _QWORD *v134; // rax
  __int64 v135; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v137; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v138; // [rsp+28h] [rbp-D8h]
  __int64 v139; // [rsp+30h] [rbp-D0h]
  __int64 v140; // [rsp+38h] [rbp-C8h]
  bool v141; // [rsp+41h] [rbp-BFh] BYREF
  bool v142; // [rsp+42h] [rbp-BEh]
  int v143; // [rsp+44h] [rbp-BCh]
  int v144; // [rsp+48h] [rbp-B8h]
  int v145; // [rsp+4Ch] [rbp-B4h]
  int v146; // [rsp+50h] [rbp-B0h]
  struct _LUID v147; // [rsp+58h] [rbp-A8h] BYREF
  INT v148; // [rsp+60h] [rbp-A0h]
  INT v149; // [rsp+64h] [rbp-9Ch]
  SESSION_VIEW *v150; // [rsp+68h] [rbp-98h] BYREF
  char v151[8]; // [rsp+70h] [rbp-90h] BYREF
  char v152; // [rsp+78h] [rbp-88h]
  int v153; // [rsp+80h] [rbp-80h]
  __int64 v154; // [rsp+88h] [rbp-78h]
  struct DXGADAPTER *v155; // [rsp+90h] [rbp-70h]
  int v156; // [rsp+98h] [rbp-68h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-60h]
  char v158; // [rsp+A8h] [rbp-58h]
  __int128 v159; // [rsp+B0h] [rbp-50h]
  _QWORD v160[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v161; // [rsp+D0h] [rbp-30h]
  _DXGKARG_SETPOINTERPOSITION v162; // [rsp+D8h] [rbp-28h] BYREF
  char v163[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v164[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v165[72]; // [rsp+138h] [rbp+38h] BYREF

  v156 = -1;
  v4 = a1;
  v155 = a1;
  v153 = a4;
  v5 = (int)a3;
  v157 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v158 = 1;
    v156 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(2LL, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v158 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v156, 3011LL);
  *(_QWORD *)&v162.VidPnSourceId = 0LL;
  *(_QWORD *)&v162.Y = 0LL;
  v160[0] = 0LL;
  v160[1] = 0LL;
  v161 = 0LL;
  if ( !a2 )
  {
    LODWORD(v23) = -1073741811;
    goto LABEL_81;
  }
  if ( v5 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
    goto LABEL_80;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v4, a2->VidPnSourceId, 0LL, 0LL, &v150, (unsigned __int64 *)&v147, 0);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v94 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v94[3] = v4;
    v94[4] = a2->VidPnSourceId;
    v94[5] = v11;
    WdLogEvent5_WdEvent(v94);
    LODWORD(v23) = v11;
    goto LABEL_81;
  }
  v12 = v150;
  if ( !v150 )
  {
    v95 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v95 + 24) = 1790LL;
    WdLogEvent5_WdAssertion(v95);
  }
  if ( !*((_QWORD *)v12 + 319) )
  {
    v96 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v96 + 24) = 1791LL;
    WdLogEvent5_WdAssertion(v96);
  }
  v13 = *(struct _LUID *)((char *)v12 + 276);
  v147 = v13;
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 74);
  if ( v18 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v97 = WdLogNewEntry5_WdError(v17, v16, v19);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v97 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v99, v98);
    *(_QWORD *)(v97 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v97);
    goto LABEL_81;
  }
  v141 = 0;
  v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v141, 0);
  v23 = v22;
  if ( v22 < 0 )
  {
    v100 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v100 + 24) = v23;
    WdLogEvent5_WdEvent(v100);
    goto LABEL_134;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v147,
                            a2->VidPnSourceId);
  v150 = SessionViewFromSource;
  v28 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
    v101[3] = a2->VidPnSourceId;
    v101[4] = v147.HighPart;
    v101[5] = v13.LowPart;
    LODWORD(v23) = -1073741811;
    v101[6] = (unsigned int)PsGetCurrentProcessSessionId(v103, v102);
    v101[7] = -1073741811LL;
    WdLogEvent5_WdError(v101);
    goto LABEL_134;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_78:
    if ( v141 )
      DxgkReleaseSessionModeChangeLock();
LABEL_80:
    LODWORD(v23) = 0;
    goto LABEL_81;
  }
  LODWORD(v23) = -1073741811;
  v142 = v141;
  while ( 1 )
  {
    v31 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v31 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v29, v7);
      *(_QWORD *)(v104 + 24) = 1839LL;
      WdLogEvent5_WdAssertion(v104);
    }
    if ( !*(_QWORD *)(v31 + 2552) )
    {
      v105 = WdLogNewEntry5_WdAssertion(v29, v7);
      *(_QWORD *)(v105 + 24) = 1840LL;
      WdLogEvent5_WdAssertion(v105);
    }
    v162 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v163, (struct DXGADAPTER *const)v31, 0LL);
    v33 = COREADAPTERACCESS::AcquireShared((__int64)v163, 0xFFFFFFFFLL, v32);
    v37 = v33;
    if ( v33 >= 0 )
      break;
    v106 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
    v106[3] = *(int *)(v31 + 280);
    v106[4] = *(unsigned int *)(v31 + 276);
    v106[5] = v37;
    WdLogEvent5_WdError(v106);
LABEL_77:
    COREACCESS::~COREACCESS((COREACCESS *)v165);
    COREACCESS::~COREACCESS((COREACCESS *)v164);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v28, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_78;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v151, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v31 + 2552) + 384LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v151);
  if ( v153 )
  {
    v107 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v107 = (unsigned int)(a2->X + v107), (int)v107 < *((_DWORD *)v28 + 6))
      || (int)v107 >= *((_DWORD *)v28 + 8)
      || (v38 = (unsigned int)(*((_DWORD *)PrimaryDisplaySource + 938) + a2->Y), (int)v38 < *((_DWORD *)v28 + 7))
      || (int)v38 >= *((_DWORD *)v28 + 9) )
    {
      v108 = (_QWORD *)WdLogNewEntry5_WdError(v107, v38, v39);
      v108[3] = *(int *)(v31 + 280);
      v108[4] = *(unsigned int *)(v31 + 276);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_131;
    }
  }
  if ( (*(_DWORD *)(v31 + 308) & 0x100) == 0 && (**(_DWORD **)(v31 + 2456) & 8) != 0 )
  {
LABEL_75:
    if ( v152 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v151);
    goto LABEL_77;
  }
  v162.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v31 + 2552), *((_DWORD *)PrimaryDisplaySource + 4)) )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40);
    v92[3] = -1073741823LL;
    v92[4] = v162.VidPnSourceId;
    v93 = *(_BYTE *)&v162.Flags.0 & 1;
    v92[6] = v4;
    v92[5] = v93;
LABEL_73:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v31 + 2552),
      v162.VidPnSourceId,
      *(_BYTE *)&v162.Flags.0 & 1,
      v162.X,
      v162.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v28) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v151);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v163);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        (struct DXGADAPTER *)v31,
        v86,
        a2->VidPnSourceId,
        v87,
        (__int64)a2,
        (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_);
    }
    goto LABEL_75;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v140) = v162.Flags.0;
    LODWORD(v139) = v162.Y;
    LODWORD(v138) = v162.X;
    LODWORD(v137) = v162.VidPnSourceId;
    McTemplateK0pqtqq(v41, &EventSetPointerPosition, v42, v4, v137, v138, v139, v140);
  }
  v43 = *((unsigned int *)PrimaryDisplaySource + 267);
  v44 = 1;
  if ( (_DWORD)v43 == -1 )
  {
    v54 = -1073741811;
    goto LABEL_110;
  }
  DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v31);
  v154 = *(_QWORD *)(v31 + 2552);
  if ( v154 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v31);
    v51 = *(_QWORD *)(v31 + 2552);
    if ( !v51 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v49, v48);
      WdLogEvent5_WdAssertion(v112);
      v51 = *(_QWORD *)(v31 + 2552);
    }
    v52 = *(MONITOR_MGR **)(v51 + 96);
    if ( !v52 )
    {
      v113 = WdLogNewEntry5_WdError(0LL, v48, v50);
      *(_QWORD *)(v113 + 24) = v31;
      WdLogEvent5_WdError(v113);
      v54 = -1073741811;
      goto LABEL_105;
    }
    v147 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v52, v43, 1u, (struct DXGMONITOR **)&v147);
    v54 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v91 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v91 + 24) = v43;
      *(_QWORD *)(v91 + 32) = v31;
      WdLogEvent5_WdDmmEvent(v91);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v55 = v147;
        if ( !*(_QWORD *)&v147 || *(_DWORD *)(*(_QWORD *)&v147 + 432LL) != 1 )
        {
          v115 = WdLogNewEntry5_WdAssertion(v41, v40);
          WdLogEvent5_WdAssertion(v115);
        }
        if ( !*(_QWORD *)&v55 )
        {
          v116 = WdLogNewEntry5_WdAssertion(v41, v40);
          WdLogEvent5_WdAssertion(v116);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v55 + 296LL), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(*(DXGMONITOR **)&v55);
        v57 = (struct _ERESOURCE *)(*(_QWORD *)&v55 + 296LL);
        v142 = IsVirtualModeSuportDisabled;
        v58 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v57);
        KeLeaveCriticalRegion();
        v54 = 0;
        goto LABEL_44;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v58 = v142;
LABEL_43:
        if ( v54 >= 0 )
        {
LABEL_44:
          if ( !v58 )
          {
            v59 = *(_BYTE *)(v154 + 234) == 0;
            v44 = *(_BYTE *)(v154 + 233) == 0;
            goto LABEL_46;
          }
          v44 = 1;
LABEL_110:
          v59 = 1;
LABEL_46:
          if ( v54 >= 0 )
            goto LABEL_47;
          goto LABEL_103;
        }
LABEL_105:
        v114 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v114 + 24) = v54;
        WdLogEvent5_WdAssertion(v114);
        goto LABEL_110;
      }
    }
    v58 = 0;
    v142 = 0;
    v54 = 0;
    goto LABEL_43;
  }
  v110 = WdLogNewEntry5_WdError(v46, v45, v47);
  *(_QWORD *)(v110 + 24) = 8960LL;
  WdLogEvent5_WdError(v110);
  v59 = 1;
  v54 = -1073741811;
LABEL_103:
  v111 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
  v111[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v111[4] = *(int *)(v31 + 280);
  v111[5] = *(unsigned int *)(v31 + 276);
  v111[6] = v54;
  WdLogEvent5_WdError(v111);
LABEL_47:
  if ( v44 && v59 || (*(_BYTE *)&v162.Flags.0 & 1) == 0 )
  {
LABEL_70:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v31 + 2552), &v162, v42) < 0 )
    {
      v135 = WdLogNewEntry5_WdAssertion(v85, v84);
      *(_QWORD *)(v135 + 24) = 2018LL;
      WdLogEvent5_WdAssertion(v135);
    }
    v4 = v155;
    v28 = v150;
    goto LABEL_73;
  }
  LODWORD(v154) = ADAPTER_DISPLAY::GetCurrentOrientation(
                    *((_QWORD *)PrimaryDisplaySource + 1),
                    *((unsigned int *)PrimaryDisplaySource + 4),
                    v44);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v64 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v31 + 1872) && SavedCursor->Height <= *(_DWORD *)(v31 + 1876) )
    {
      v66 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v67 = *((_DWORD *)v150 + 8) - *((_DWORD *)v150 + 6);
      v68 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v69 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v70 = *((_DWORD *)PrimaryDisplaySource + 168);
      v148 = *((_DWORD *)PrimaryDisplaySource + 169);
      v147.LowPart = v44;
      v71 = *((_DWORD *)v150 + 9) - *((_DWORD *)v150 + 7);
      v149 = v70;
      v72 = *((_BYTE *)PrimaryDisplaySource + 668) == 0;
      v159 = v69;
      v143 = v66;
      v144 = v68;
      v145 = v67;
      v146 = v71;
      if ( v72 )
      {
        v73 = DWORD1(v159);
        v74 = v159;
        v148 = HIDWORD(v159);
        v149 = DWORD2(v159);
      }
      else
      {
        v68 = v148;
        v74 = 0;
        v66 = v70;
        v143 = v70;
        v73 = 0;
        v144 = v148;
      }
      X = a2->X;
      if ( (((_DWORD)v154 - 1) & 0xFFFFFFFD) != 0 )
      {
        v76 = v68 * X / v145;
        v77 = v143 * a2->Y;
      }
      else
      {
        v76 = v66 * X / v145;
        v77 = v68 * a2->Y;
      }
      v78 = (unsigned int)(v77 >> 31);
      v145 = v76;
      LODWORD(v78) = v77 % v146;
      v79 = v77 / v146;
      v146 = v77 / v146;
      if ( v147.LowPart )
      {
        v162.X = v76 + v74;
        v117 = v79 + v73;
        goto LABEL_119;
      }
      switch ( (_DWORD)v154 )
      {
        case 2:
          v80 = v79 + v74;
          v120 = v73 - v76;
          break;
        case 3:
          v80 = v143 + v74 - v76 - Width;
          v120 = v73 - v79;
          break;
        case 4:
          v82 = v76 + v73;
          v81 = v144;
          v119 = v74 - v79;
          v83 = v143;
          v80 = v143 + v119 - Width;
          v162.X = v80;
LABEL_64:
          v162.Y = v82;
          if ( (signed int)(v80 + v64->Width) >= v74
            && v80 <= v149
            && (signed int)(v82 + v64->Height) >= v73
            && v82 <= v148 )
          {
LABEL_68:
            FillClipParams(v64, PrimaryDisplaySource, &v162, (struct CURSOR_CLIP_PARAMS *)v160);
            if ( HIDWORD(v161) )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v31 + 1872)
                || ClippedCursor->Height > *(_DWORD *)(v31 + 1876) )
              {
                v108 = (_QWORD *)WdLogNewEntry5_WdError(v122, v121, v124);
                v108[3] = ClippedCursor->Width;
                v108[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_131;
              }
              ClipCurrentCursor(v64, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v160);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v125 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v31 + 2552), ClippedCursor);
              v128 = v125;
              if ( v125 < 0 )
              {
                v129 = (_QWORD *)WdLogNewEntry5_WdError(v127, v126, v42);
                v129[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v129[4] = *(int *)(v31 + 280);
                v129[5] = *(unsigned int *)(v31 + 276);
                v129[6] = v128;
                WdLogEvent5_WdError(v129);
              }
              *((_BYTE *)PrimaryDisplaySource + 725) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 725) )
            {
              v130 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v31 + 2552), v64);
              v133 = v130;
              if ( v130 < 0 )
              {
                v134 = (_QWORD *)WdLogNewEntry5_WdError(v132, v131, v42);
                v134[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v134[4] = *(int *)(v31 + 280);
                v134[5] = *(unsigned int *)(v31 + 276);
                v134[6] = v133;
                WdLogEvent5_WdError(v134);
              }
              *((_BYTE *)PrimaryDisplaySource + 725) = 0;
            }
            goto LABEL_70;
          }
          v162.X = v74 + v83 / 2;
          v117 = v73 + v81 / 2;
LABEL_119:
          v162.Y = v117;
          goto LABEL_68;
        default:
          if ( (_DWORD)v154 != 1 )
          {
            v118 = WdLogNewEntry5_WdAssertion((unsigned int)(v154 - 3), v78);
            *(_QWORD *)(v118 + 24) = 686LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v80 = v74 + v145;
          v81 = v144;
          v82 = v73 + v146;
          v162.X = v74 + v145;
LABEL_63:
          v83 = v143;
          goto LABEL_64;
      }
      v81 = v144;
      v162.X = v80;
      v82 = v144 + v120 - v64->Height;
      goto LABEL_63;
    }
  }
  v108 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61, v63);
  v108[3] = v64->Width;
  v108[4] = v64->Height;
  pPixels = v64->pPixels;
LABEL_131:
  v108[5] = pPixels;
  WdLogEvent5_WdError(v108);
  if ( v152 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v151);
  COREACCESS::~COREACCESS((COREACCESS *)v165);
  COREACCESS::~COREACCESS((COREACCESS *)v164);
LABEL_134:
  if ( v141 )
    DxgkReleaseSessionModeChangeLock();
LABEL_81:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v156, v7);
  if ( v158 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v88, &EventProfilerExit, v89, v156);
  return (unsigned int)v23;
}
