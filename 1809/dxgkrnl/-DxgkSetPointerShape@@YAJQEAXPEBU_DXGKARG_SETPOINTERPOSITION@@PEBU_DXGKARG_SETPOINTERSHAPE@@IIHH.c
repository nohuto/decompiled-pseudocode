/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ECD5C
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00ECCE0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C0223230 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00ED0A0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00EDAC4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C02414E8 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        void *const a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v11; // rcx
  __int64 v12; // rsi
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  struct _LUID v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v26; // rcx
  struct SESSION_VIEW *v27; // r12
  __int64 v28; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  void *v30; // r15
  bool v31; // al
  __int64 v32; // rcx
  const GUID *v33; // r8
  struct DISPLAY_SOURCE *i; // rdi
  __int64 v36; // rcx
  ADAPTER_DISPLAY **v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r15
  bool v41; // zf
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v52; // eax
  _QWORD *v53; // rax
  char v54; // [rsp+50h] [rbp-B0h] BYREF
  bool v55; // [rsp+51h] [rbp-AFh]
  struct _LUID v56; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h]
  char v60; // [rsp+78h] [rbp-88h]
  unsigned __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  char v62; // [rsp+88h] [rbp-78h]
  void *v63; // [rsp+90h] [rbp-70h]
  _BYTE v64[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v65[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v66[40]; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v67; // [rsp+F0h] [rbp-10h] BYREF

  v58 = -1;
  v59 = 0LL;
  v57 = a4;
  v63 = a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v60 = 1;
    v58 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3012);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 3012);
  LODWORD(v12) = 0;
  if ( !a3 || !a2 )
    goto LABEL_40;
  v67 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, (struct _DXGKARG_SETPOINTERSHAPE *)a3, a4, a5);
    goto LABEL_23;
  }
  if ( a3->Data1 >= 8 )
  {
    v42 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v42 + 24) = a3->Data1;
    *(_QWORD *)(v42 + 32) = a1;
    WdLogEvent5_WdError(v42);
LABEL_40:
    LODWORD(v12) = -1073741811;
    goto LABEL_23;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      (struct DXGADAPTER *)a1,
                      a3[1].Data1,
                      0LL,
                      0LL,
                      (struct DXGADAPTER **)&v56,
                      &v61);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
    v43[3] = a1;
    v43[4] = a3[1].Data1;
    v43[5] = v12;
    WdLogEvent5_WdEvent(v43);
  }
  else
  {
    v16 = (_QWORD *)v56;
    if ( !*(_QWORD *)&v56 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v44 + 24) = 1437LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( !v16[315] )
    {
      v45 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v45 + 24) = 1438LL;
      WdLogEvent5_WdAssertion(v45);
    }
    v17 = *(struct _LUID *)((char *)v16 + 276);
    v56 = v17;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 77);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    if ( SessionDataForSpecifiedSession )
    {
      v54 = 0;
      v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v54, 0);
      v12 = v22;
      if ( v22 < 0 )
      {
        v48 = WdLogNewEntry5_WdEvent(v24, v23);
        *(_QWORD *)(v48 + 24) = v12;
        WdLogEvent5_WdEvent(v48);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v56,
                                  a3[1].Data1);
        v27 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            v30 = v63;
            v31 = a7 != 0;
            v55 = a7 != 0;
            while ( 1 )
            {
              LODWORD(v12) = SetPointerShapeForDisplaySource(
                               PrimaryDisplaySource,
                               a2,
                               (const struct _DXGKARG_SETPOINTERSHAPE *)a3,
                               v27,
                               v30,
                               v57,
                               a5,
                               0,
                               v31);
              if ( (int)v12 < 0 )
                break;
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v27, PrimaryDisplaySource);
              v31 = v55;
              if ( !PrimaryDisplaySource )
                goto LABEL_21;
            }
            for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v27); i; i = SESSION_VIEW::GetNextDisplaySource(v27, i) )
            {
              v36 = *((_QWORD *)i + 1);
              v37 = *(ADAPTER_DISPLAY ***)(v36 + 16);
              if ( !v37 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v36);
                *(_QWORD *)(v50 + 24) = 1501LL;
                WdLogEvent5_WdAssertion(v50);
              }
              if ( !v37[315] )
              {
                v51 = WdLogNewEntry5_WdAssertion(v36);
                *(_QWORD *)(v51 + 24) = 1502LL;
                WdLogEvent5_WdAssertion(v51);
              }
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, (struct DXGADAPTER *const)v37, 0LL);
              v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64);
              v40 = v38;
              if ( v38 < 0 )
              {
                v53 = (_QWORD *)WdLogNewEntry5_WdError(v39);
                v53[3] = v56.HighPart;
                v53[4] = v17.LowPart;
                v53[5] = v40;
                WdLogEvent5_WdError(v53);
              }
              else
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v61, (ADAPTER_DISPLAY *)((char *)v37[315] + 280), 0);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v61);
                if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v37[315], *((_DWORD *)i + 4)) )
                {
                  v52 = *((_DWORD *)i + 4);
                  v67.X = 0;
                  v67.Y = 0;
                  v67.Flags.Value &= ~1u;
                  v67.VidPnSourceId = v52;
                  ADAPTER_DISPLAY::DdiSetPointerPosition(v37[315], &v67);
                }
                v41 = v62 == 0;
                *((_DWORD *)i + 937) = -1;
                *((_DWORD *)i + 938) = -1;
                *((_BYTE *)i + 725) = 0;
                if ( !v41 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v61);
              }
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              COREACCESS::~COREACCESS((COREACCESS *)v65);
            }
          }
        }
        else
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v49[3] = a3[1].Data1;
          v49[4] = v17.HighPart;
          v49[5] = v17.LowPart;
          LODWORD(v12) = -1073741811;
          v49[6] = (unsigned int)PsGetCurrentProcessSessionId(v17.LowPart);
          v49[7] = -1073741811LL;
          WdLogEvent5_WdError(v49);
        }
      }
LABEL_21:
      if ( v54 )
        DxgkReleaseSessionModeChangeLock(v28);
    }
    else
    {
      v46 = WdLogNewEntry5_WdError(v19);
      LODWORD(v12) = -1073741811;
      *(_QWORD *)(v46 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v47);
      *(_QWORD *)(v46 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v46);
    }
  }
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v58);
  return (unsigned int)v12;
}
