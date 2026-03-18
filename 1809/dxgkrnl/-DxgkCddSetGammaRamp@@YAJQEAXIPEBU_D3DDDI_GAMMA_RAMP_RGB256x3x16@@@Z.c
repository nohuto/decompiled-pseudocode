/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0005CB4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D4070 (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(struct DXGADAPTER *a1, unsigned int a2, const GUID *a3)
{
  __int64 v4; // r14
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v17; // rsi
  SESSION_VIEW *SessionViewFromSource; // r13
  __int64 v19; // rcx
  size_t *v20; // rbx
  size_t *v21; // rax
  __int64 v22; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v24; // r15d
  ADAPTER_DISPLAY **v25; // rdi
  int v26; // r8d
  int v27; // eax
  int updated; // esi
  __int64 v29; // rcx
  const GUID *v30; // r8
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h]
  char v39; // [rsp+48h] [rbp-39h]
  DXGADAPTER *v40; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-29h] BYREF
  __int64 v42; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v43[32]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v44[40]; // [rsp+90h] [rbp+Fh] BYREF
  char v45; // [rsp+100h] [rbp+7Fh] BYREF

  v37 = -1;
  v4 = a2;
  v6 = 1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 3009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3009);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 3009);
  v45 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v45, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v32[3] = (unsigned int)PsGetCurrentProcessSessionId(v33);
    v32[4] = v9;
LABEL_33:
    WdLogEvent5_WdError(v32);
    goto LABEL_23;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v40, &v41);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v34[3] = a1;
    v34[4] = v4;
    v34[5] = v9;
    WdLogEvent5_WdEvent(v34);
    goto LABEL_23;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 77);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v17 = v40;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v40 + 276),
                            v4);
  DXGADAPTER::ReleaseReference(v17);
  if ( !SessionViewFromSource )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v32[3] = v4;
    v32[4] = v17;
    LODWORD(v9) = -1073741811;
    v32[5] = (unsigned int)PsGetCurrentProcessSessionId(v35);
    v32[6] = -1073741811LL;
    goto LABEL_33;
  }
  v20 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v21 = (size_t *)operator new(0x30uLL, 0x4B677844u, PagedPool);
  v20 = v21;
  if ( v21 )
  {
    *((_WORD *)v21 + 20) = 0;
    v21[3] = 0LL;
    v21[4] = 0LL;
    *v21 = (size_t)&ReferenceCounted::`vftable';
    *v21 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v21 + 2) = 1;
    *((_DWORD *)v21 + 4) = 1;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v36 + 24) = v17;
    WdLogEvent5_WdLowResource(v36);
    goto LABEL_23;
  }
  LODWORD(v9) = DXGK_GAMMA_RAMP::Initialize(v20, D3DDDI_GAMMARAMP_RGB256x3x16, a3);
  if ( (int)v9 >= 0 )
  {
LABEL_13:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v24 = *((_DWORD *)PrimaryDisplaySource + 4);
        v25 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v42, (struct DXGADAPTER *const)v25, 0LL);
        if ( *((_BYTE *)v25[315] + 134) == (_BYTE)v26 )
          v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v42);
        else
          v27 = COREADAPTERACCESS::AcquireExclusive(&v42, (unsigned int)(v26 + 1));
        updated = v27;
        if ( v27 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v25[315], v24, (const struct DXGK_GAMMA_RAMP *)v20);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(v25[315], v24);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v25[315], v24, 0LL);
          else
            v6 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v44);
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v9) = v6 != 0 ? updated : 0;
    }
  }
  if ( v20 )
    ReferenceCounted::Release((ReferenceCounted *)v20);
LABEL_23:
  if ( v45 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v37);
  return (unsigned int)v9;
}
