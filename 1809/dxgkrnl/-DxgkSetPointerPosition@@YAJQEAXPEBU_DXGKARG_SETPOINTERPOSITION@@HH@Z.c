/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00C4C40 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C02230D0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C00107A4 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00C5374 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00EDAC4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00EDDB4 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0130430 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0131974 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0132070 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0133FC0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0221D68 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3,
        int a4)
{
  struct DXGADAPTER *v4; // r13
  int v5; // ebx
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _LUID v10; // rbx
  struct _LUID v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  int v16; // eax
  __int64 v17; // r14
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v19; // rcx
  SESSION_VIEW *v20; // r15
  __int64 v21; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  bool v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  MONITOR_MGR *v36; // rcx
  int MonitorInstance; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ebx
  struct DXGMONITOR *v42; // r15
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v44; // rcx
  bool v45; // r15
  bool v46; // r15
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v48; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v49; // r15
  UINT Width; // r11d
  int v51; // r9d
  int v52; // r8d
  int v53; // r10d
  __int128 v54; // xmm0
  int v55; // ebx
  int v56; // edx
  bool v57; // zf
  signed int v58; // ebx
  signed int v59; // r13d
  INT X; // eax
  int v61; // r9d
  int v62; // eax
  int v63; // r10d
  INT v64; // r8d
  int v65; // r9d
  INT v66; // edx
  int v67; // r10d
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  const GUID *v71; // r8
  __int64 v73; // rax
  _QWORD *v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rax
  _QWORD *v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rcx
  int v88; // edx
  _QWORD *v89; // rcx
  const void *pPixels; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  INT v98; // eax
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  __int64 v102; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rbx
  _QWORD *v107; // rax
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rbx
  _QWORD *v111; // rax
  __int64 v112; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v114; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v115; // [rsp+28h] [rbp-D8h]
  __int64 v116; // [rsp+30h] [rbp-D0h]
  __int64 v117; // [rsp+38h] [rbp-C8h]
  bool v118; // [rsp+41h] [rbp-BFh] BYREF
  bool v119; // [rsp+42h] [rbp-BEh]
  int v120; // [rsp+44h] [rbp-BCh]
  int v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+4Ch] [rbp-B4h]
  int v123; // [rsp+50h] [rbp-B0h]
  INT v124; // [rsp+54h] [rbp-ACh]
  struct _LUID v125; // [rsp+58h] [rbp-A8h] BYREF
  INT v126; // [rsp+60h] [rbp-A0h]
  struct DXGMONITOR *v127; // [rsp+68h] [rbp-98h] BYREF
  char v128[8]; // [rsp+70h] [rbp-90h] BYREF
  char v129; // [rsp+78h] [rbp-88h]
  int v130; // [rsp+80h] [rbp-80h]
  __int64 v131; // [rsp+88h] [rbp-78h]
  struct DXGADAPTER *v132; // [rsp+90h] [rbp-70h]
  int v133; // [rsp+98h] [rbp-68h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-60h]
  char v135; // [rsp+A8h] [rbp-58h]
  __int128 v136; // [rsp+B0h] [rbp-50h]
  _BYTE v137[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v138; // [rsp+D4h] [rbp-2Ch]
  char v139[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v140[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v141[40]; // [rsp+108h] [rbp+8h] BYREF
  _DXGKARG_SETPOINTERPOSITION v142; // [rsp+130h] [rbp+30h] BYREF

  v133 = -1;
  v4 = a1;
  v134 = 0LL;
  v5 = (int)a3;
  v132 = a1;
  v130 = a4;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v135 = 1;
    v133 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(2LL, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v135 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v133, 3011);
  if ( !a2 )
  {
    LODWORD(v17) = -1073741811;
    goto LABEL_78;
  }
  if ( v5 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
    goto LABEL_77;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      v4,
                      a2->VidPnSourceId,
                      0LL,
                      0LL,
                      (struct DXGADAPTER **)&v125,
                      (unsigned __int64 *)&v127);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v76[3] = v4;
    v76[4] = a2->VidPnSourceId;
    v76[5] = v9;
    WdLogEvent5_WdEvent(v76);
    LODWORD(v17) = v9;
    goto LABEL_78;
  }
  v10 = v125;
  if ( !*(_QWORD *)&v125 )
  {
    v77 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v77 + 24) = 1770LL;
    WdLogEvent5_WdAssertion(v77);
  }
  if ( !*(_QWORD *)(*(_QWORD *)&v10 + 2520LL) )
  {
    v78 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v78 + 24) = 1771LL;
    WdLogEvent5_WdAssertion(v78);
  }
  v125 = *(struct _LUID *)(*(_QWORD *)&v10 + 276LL);
  v11 = v125;
  DXGADAPTER::ReleaseReference(*(DXGADAPTER **)&v10);
  SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 77);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v79 = WdLogNewEntry5_WdError(v13);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v79 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v80);
    *(_QWORD *)(v79 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v79);
    goto LABEL_78;
  }
  v118 = 0;
  v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v118, 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    v81 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v81 + 24) = v17;
    WdLogEvent5_WdEvent(v81);
    goto LABEL_134;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v125,
                            a2->VidPnSourceId);
  v125 = (struct _LUID)SessionViewFromSource;
  v20 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v82[3] = a2->VidPnSourceId;
    v82[4] = v11.HighPart;
    v82[5] = v11.LowPart;
    LODWORD(v17) = -1073741811;
    v82[6] = (unsigned int)PsGetCurrentProcessSessionId(v83);
    v82[7] = -1073741811LL;
    WdLogEvent5_WdError(v82);
    goto LABEL_134;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_75:
    if ( v118 )
      DxgkReleaseSessionModeChangeLock();
LABEL_77:
    LODWORD(v17) = 0;
    goto LABEL_78;
  }
  LODWORD(v17) = -1073741811;
  v119 = v118;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v23 )
    {
      v84 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v84 + 24) = 1819LL;
      WdLogEvent5_WdAssertion(v84);
    }
    if ( !*(_QWORD *)(v23 + 2520) )
    {
      v85 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v85 + 24) = 1820LL;
      WdLogEvent5_WdAssertion(v85);
    }
    v142 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v139, (struct DXGADAPTER *const)v23, 0LL);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v139);
    v26 = v24;
    if ( v24 >= 0 )
      break;
    v86 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v86[3] = *(int *)(v23 + 280);
    v86[4] = *(unsigned int *)(v23 + 276);
    v86[5] = v26;
    WdLogEvent5_WdError(v86);
LABEL_74:
    COREACCESS::~COREACCESS((COREACCESS *)v141);
    COREACCESS::~COREACCESS((COREACCESS *)v140);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v20, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_75;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v128, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v23 + 2520) + 280LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v128);
  if ( v130 )
  {
    v87 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v87 = (unsigned int)(a2->X + v87), (int)v87 < *((_DWORD *)v20 + 6))
      || (int)v87 >= *((_DWORD *)v20 + 8)
      || (v88 = *((_DWORD *)PrimaryDisplaySource + 938) + a2->Y, v88 < *((_DWORD *)v20 + 7))
      || v88 >= *((_DWORD *)v20 + 9) )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v89[3] = *(int *)(v23 + 280);
      v89[4] = *(unsigned int *)(v23 + 276);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_131;
    }
  }
  if ( (*(_DWORD *)(v23 + 308) & 0x100) == 0 && (**(_DWORD **)(v23 + 4112) & 8) != 0 )
  {
LABEL_72:
    if ( v129 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v128);
    goto LABEL_74;
  }
  v142.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v23 + 2520), *((_DWORD *)PrimaryDisplaySource + 4)) )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
    v74[3] = -1073741823LL;
    v74[4] = v142.VidPnSourceId;
    v75 = *(_BYTE *)&v142.Flags.0 & 1;
    v74[6] = v4;
    v74[5] = v75;
LABEL_70:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v23 + 2520),
      v142.VidPnSourceId,
      *(_BYTE *)&v142.Flags.0 & 1,
      v142.X,
      v142.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v20) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v128);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v139);
      v115 = (unsigned __int64 *)lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_;
      HIDWORD(v114) = HIDWORD(a2);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        v23,
        v69,
        a2->VidPnSourceId);
    }
    goto LABEL_72;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v117) = v142.Flags.0;
    LODWORD(v116) = v142.Y;
    LODWORD(v115) = v142.X;
    LODWORD(v114) = v142.VidPnSourceId;
    McTemplateK0pqqqq(v28, &EventSetPointerPosition, v29, v4, v114, v115, v116, v117);
  }
  v31 = *((unsigned int *)PrimaryDisplaySource + 267);
  v32 = 1;
  if ( (_DWORD)v31 == -1 )
  {
    v41 = -1073741811;
    goto LABEL_110;
  }
  DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v23);
  v131 = *(_QWORD *)(v23 + 2520);
  if ( v131 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v23);
    v35 = *(_QWORD *)(v23 + 2520);
    if ( !v35 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v93);
      v35 = *(_QWORD *)(v23 + 2520);
    }
    v36 = *(MONITOR_MGR **)(v35 + 96);
    if ( !v36 )
    {
      v94 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v94 + 24) = v23;
      WdLogEvent5_WdError(v94);
      v41 = -1073741811;
      goto LABEL_104;
    }
    v127 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v36, v31, 1u, &v127);
    v41 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v73 = WdLogNewEntry5_WdDmmEvent(v28, v38, v39, v40);
      *(_QWORD *)(v73 + 24) = v31;
      *(_QWORD *)(v73 + 32) = v23;
      WdLogEvent5_WdDmmEvent(v73);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v42 = v127;
        if ( !v127 || *((_DWORD *)v127 + 108) != 1 )
        {
          v96 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v96);
        }
        if ( !v42 )
        {
          v97 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v97);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v42 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v42);
        v44 = (struct _ERESOURCE *)((char *)v42 + 296);
        v119 = IsVirtualModeSuportDisabled;
        v45 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v44);
        KeLeaveCriticalRegion();
        v41 = 0;
        goto LABEL_41;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v45 = v119;
LABEL_82:
        if ( v41 >= 0 )
        {
LABEL_41:
          if ( !v45 )
          {
            v46 = *(_BYTE *)(v131 + 133) == 0;
            v32 = *(_BYTE *)(v131 + 132) == 0;
            goto LABEL_43;
          }
          v32 = 1;
LABEL_110:
          v46 = 1;
LABEL_43:
          if ( v41 >= 0 )
            goto LABEL_44;
          goto LABEL_102;
        }
LABEL_104:
        v95 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v95 + 24) = v41;
        WdLogEvent5_WdAssertion(v95);
        goto LABEL_110;
      }
    }
    v45 = 0;
    v119 = 0;
    v41 = 0;
    goto LABEL_82;
  }
  v91 = WdLogNewEntry5_WdError(v33);
  *(_QWORD *)(v91 + 24) = 8248LL;
  WdLogEvent5_WdError(v91);
  v46 = 1;
  v41 = -1073741811;
LABEL_102:
  v92 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v92[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v92[4] = *(int *)(v23 + 280);
  v92[5] = *(unsigned int *)(v23 + 276);
  v92[6] = v41;
  WdLogEvent5_WdError(v92);
LABEL_44:
  if ( v32 && v46 || (*(_BYTE *)&v142.Flags.0 & 1) == 0 )
  {
LABEL_67:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v23 + 2520), &v142) < 0 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v68);
      *(_QWORD *)(v112 + 24) = 1998LL;
      WdLogEvent5_WdAssertion(v112);
    }
    v4 = v132;
    v20 = (SESSION_VIEW *)v125;
    goto LABEL_70;
  }
  LODWORD(v131) = ADAPTER_DISPLAY::GetCurrentOrientation(
                    *((_QWORD *)PrimaryDisplaySource + 1),
                    *((unsigned int *)PrimaryDisplaySource + 4),
                    v32);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v49 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v23 + 1848) && SavedCursor->Height <= *(_DWORD *)(v23 + 1852) )
    {
      v51 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v52 = *(_DWORD *)(*(_QWORD *)&v125 + 32LL) - *(_DWORD *)(*(_QWORD *)&v125 + 24LL);
      v53 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v54 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v55 = *((_DWORD *)PrimaryDisplaySource + 168);
      v124 = *((_DWORD *)PrimaryDisplaySource + 169);
      LODWORD(v127) = v32;
      v56 = *(_DWORD *)(*(_QWORD *)&v125 + 36LL) - *(_DWORD *)(*(_QWORD *)&v125 + 28LL);
      v126 = v55;
      v57 = *((_BYTE *)PrimaryDisplaySource + 668) == 0;
      v136 = v54;
      v120 = v51;
      v121 = v53;
      v122 = v52;
      v123 = v56;
      if ( v57 )
      {
        v58 = DWORD1(v136);
        v59 = v136;
        v124 = HIDWORD(v136);
        v126 = DWORD2(v136);
      }
      else
      {
        v53 = v124;
        v59 = 0;
        v51 = v55;
        v120 = v55;
        v58 = 0;
        v121 = v124;
      }
      X = a2->X;
      if ( (((_DWORD)v131 - 1) & 0xFFFFFFFD) != 0 )
      {
        v61 = v53 * X / v122;
        v62 = v120 * a2->Y;
      }
      else
      {
        v61 = v51 * X / v122;
        v62 = v53 * a2->Y;
      }
      v122 = v61;
      v63 = v62 / v123;
      v123 = v62 / v123;
      if ( (_DWORD)v127 )
      {
        v142.X = v61 + v59;
        v98 = v63 + v58;
        goto LABEL_119;
      }
      switch ( (_DWORD)v131 )
      {
        case 2:
          v64 = v63 + v59;
          v101 = v58 - v61;
          break;
        case 3:
          v64 = v120 + v59 - v61 - Width;
          v101 = v58 - v63;
          break;
        case 4:
          v66 = v61 + v58;
          v65 = v121;
          v100 = v59 - v63;
          v67 = v120;
          v64 = v120 + v100 - Width;
          v142.X = v64;
LABEL_61:
          v142.Y = v66;
          if ( (signed int)(v64 + v49->Width) >= v59
            && v64 <= v126
            && (signed int)(v66 + v49->Height) >= v58
            && v66 <= v124 )
          {
LABEL_65:
            FillClipParams(v49, PrimaryDisplaySource, &v142, (struct CURSOR_CLIP_PARAMS *)v137);
            if ( v138 )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v23 + 1848)
                || ClippedCursor->Height > *(_DWORD *)(v23 + 1852) )
              {
                v89 = (_QWORD *)WdLogNewEntry5_WdError(v102);
                v89[3] = ClippedCursor->Width;
                v89[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_131;
              }
              ClipCurrentCursor(v49, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v137);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v104 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v23 + 2520), ClippedCursor);
              v106 = v104;
              if ( v104 < 0 )
              {
                v107 = (_QWORD *)WdLogNewEntry5_WdError(v105);
                v107[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v107[4] = *(int *)(v23 + 280);
                v107[5] = *(unsigned int *)(v23 + 276);
                v107[6] = v106;
                WdLogEvent5_WdError(v107);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 726) )
            {
              v108 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v23 + 2520), v49);
              v110 = v108;
              if ( v108 < 0 )
              {
                v111 = (_QWORD *)WdLogNewEntry5_WdError(v109);
                v111[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v111[4] = *(int *)(v23 + 280);
                v111[5] = *(unsigned int *)(v23 + 276);
                v111[6] = v110;
                WdLogEvent5_WdError(v111);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 0;
            }
            goto LABEL_67;
          }
          v142.X = v59 + v67 / 2;
          v98 = v58 + v65 / 2;
LABEL_119:
          v142.Y = v98;
          goto LABEL_65;
        default:
          if ( (_DWORD)v131 != 1 )
          {
            v99 = WdLogNewEntry5_WdAssertion((unsigned int)(v131 - 3));
            *(_QWORD *)(v99 + 24) = 666LL;
            WdLogEvent5_WdAssertion(v99);
          }
          v64 = v59 + v122;
          v65 = v121;
          v66 = v58 + v123;
          v142.X = v59 + v122;
LABEL_60:
          v67 = v120;
          goto LABEL_61;
      }
      v65 = v121;
      v142.X = v64;
      v66 = v121 + v101 - v49->Height;
      goto LABEL_60;
    }
  }
  v89 = (_QWORD *)WdLogNewEntry5_WdError(v48);
  v89[3] = v49->Width;
  v89[4] = v49->Height;
  pPixels = v49->pPixels;
LABEL_131:
  v89[5] = pPixels;
  WdLogEvent5_WdError(v89);
  if ( v129 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v128);
  COREACCESS::~COREACCESS((COREACCESS *)v141);
  COREACCESS::~COREACCESS((COREACCESS *)v140);
LABEL_134:
  if ( v118 )
    DxgkReleaseSessionModeChangeLock();
LABEL_78:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
  if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v70, &EventProfilerExit, v71, v133);
  return (unsigned int)v17;
}
