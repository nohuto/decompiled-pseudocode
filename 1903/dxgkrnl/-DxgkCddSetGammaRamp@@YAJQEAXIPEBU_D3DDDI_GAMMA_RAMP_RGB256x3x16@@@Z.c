/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3530
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D3494 (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(struct DXGADAPTER *a1, unsigned int a2, const GUID *a3)
{
  __int64 v4; // r14
  char v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v20; // rsi
  SESSION_VIEW *SessionViewFromSource; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t *v25; // rbx
  size_t *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v34; // r15d
  ADAPTER_DISPLAY **v35; // rdi
  __int64 v36; // r8
  int v37; // eax
  int updated; // esi
  __int64 v39; // rcx
  const GUID *v40; // r8
  _QWORD *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  _BYTE v49[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  char v52; // [rsp+58h] [rbp-A8h]
  DXGADAPTER *v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v56[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v57[72]; // [rsp+B8h] [rbp-48h] BYREF

  v50 = -1;
  v4 = a2;
  v6 = 1;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 3009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3009);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 3009LL);
  v49[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v49, 0);
  v11 = v7;
  if ( v7 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v42[3] = (unsigned int)PsGetCurrentProcessSessionId(v44, v43);
    v42[4] = v11;
LABEL_33:
    WdLogEvent5_WdError(v42);
    goto LABEL_23;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v53, &v54, 0);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v45[3] = a1;
    v45[4] = v4;
    v45[5] = v11;
    WdLogEvent5_WdEvent(v45);
    goto LABEL_23;
  }
  v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 74);
  if ( v17 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v20 = v53;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v53 + 276),
                            v4);
  DXGADAPTER::ReleaseReferenceNoTracking(v20);
  if ( !SessionViewFromSource )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v42[3] = v4;
    v42[4] = v20;
    LODWORD(v11) = -1073741811;
    v42[5] = (unsigned int)PsGetCurrentProcessSessionId(v47, v46);
    v42[6] = -1073741811LL;
    goto LABEL_33;
  }
  v25 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v26 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v25 = v26;
  if ( v26 )
  {
    *((_WORD *)v26 + 20) = 0;
    v26[3] = 0LL;
    v26[4] = 0LL;
    *v26 = (size_t)&ReferenceCounted::`vftable';
    *v26 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v26 + 2) = 1;
    *((_DWORD *)v26 + 4) = 1;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v25 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
    *(_QWORD *)(v48 + 24) = v20;
    WdLogEvent5_WdLowResource(v48);
    goto LABEL_23;
  }
  LODWORD(v11) = DXGK_GAMMA_RAMP::Initialize(v25, 2LL, a3);
  if ( (int)v11 >= 0 )
  {
LABEL_13:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v34 = *((_DWORD *)PrimaryDisplaySource + 4);
        v35 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v55, (struct DXGADAPTER *const)v35, 0LL);
        if ( *((_BYTE *)v35[319] + 235) == (_BYTE)v36 )
          v37 = COREADAPTERACCESS::AcquireShared((__int64)&v55, 0xFFFFFFFFLL, v36);
        else
          v37 = COREADAPTERACCESS::AcquireExclusive(&v55, (unsigned int)(v36 + 1), v36);
        updated = v37;
        if ( v37 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v35[319], v34, (const struct DXGK_GAMMA_RAMP *)v25);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(v35[319], v34);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v35[319], v34, 0LL);
          else
            v6 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v11) = v6 != 0 ? updated : 0;
    }
  }
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)v25, v31, v32);
LABEL_23:
  if ( v49[0] )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v31);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v50);
  return (unsigned int)v11;
}
