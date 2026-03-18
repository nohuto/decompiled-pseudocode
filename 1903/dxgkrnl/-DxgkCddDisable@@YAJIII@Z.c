/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00018A0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0001FB8 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000D570 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D6C0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C001AB14 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001B4B4 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00C68C0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00C8678 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CA2E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014BBC0 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0155E34 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F556C (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4AB8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, const GUID *a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rsi
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  DXGSESSIONMGR *v34; // rbx
  __int64 v35; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _LUID *v42; // r13
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  SESSION_VIEW *v46; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v48; // r12d
  __int64 v49; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  ADAPTER_RENDER *v55; // r10
  struct DXGDEVICE *v56; // r13
  int v57; // eax
  ADAPTER_DISPLAY *v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  unsigned __int8 v68; // r8
  _BYTE v69[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v70; // [rsp+38h] [rbp-C8h]
  int v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B0h]
  char v74; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v75; // [rsp+60h] [rbp-A0h]
  SESSION_VIEW *v76; // [rsp+68h] [rbp-98h]
  _BYTE v77[16]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v78; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v79[56]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v80[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v81[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v82[88]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v83[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v84[64]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v85[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v72 = -1;
  v4 = (unsigned int)a3;
  v71 = (int)a3;
  v5 = (unsigned int)a1;
  v73 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v74 = 1;
    v72 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v72, 3003LL);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( !Current )
  {
    v28 = -1073741811;
    v59 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v59 + 24) = -1073741811LL;
    *(_QWORD *)(v59 + 32) = PsGetCurrentProcess();
LABEL_59:
    v60 = (_QWORD *)v59;
    goto LABEL_60;
  }
  v11 = (char *)Current + 184;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v12 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)v10 + 56) )
  {
    v13 = *((_QWORD *)v10 + 26);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      v15 = v14 & 0x1F;
      if ( (_BYTE)v15 == 3 )
      {
        v16 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
        goto LABEL_12;
      }
      v17 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v15, v13);
      *(_QWORD *)(v17 + 24) = 267LL;
      WdLogEvent5_WdError(v17);
    }
  }
  v16 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  v70 = (struct DXGDEVICE *)v16;
  if ( !v16 )
  {
    v28 = -1073741811;
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v60[3] = -1073741811LL;
    v60[4] = v5;
    v60[5] = v10;
LABEL_60:
    WdLogEvent5_WdError(v60);
    goto LABEL_23;
  }
  v22 = *(_QWORD *)(v16 + 1728);
  if ( !v22 || !*(_QWORD *)(v22 + 2552) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v61 + 24) = 606LL;
    WdLogEvent5_WdAssertion(v61);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v16, 1, v21, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v83);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v22 + 2552)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v22 + 2552),
        *(struct ADAPTER_RENDER **)(v16 + 16));
    if ( *(_DWORD *)(v22 + 176) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v22 + 2552), v4, 0LL);
    LODWORD(v23) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
LABEL_20:
    Global = DXGGLOBAL::GetGlobal(v25, v24);
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 139), 0);
    if ( (int)v23 < 0 )
    {
      v70 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v22 + 276), v4, v23, 0LL);
    }
    v28 = 0;
    goto LABEL_23;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v62 + 24) = 647LL;
    WdLogEvent5_WdAssertion(v62);
  }
  v34 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18) + 74);
  if ( v34 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33, v32);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v34, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v59 = WdLogNewEntry5_WdError(v33, v32, v35);
    v28 = -1073741811;
    *(_QWORD *)(v59 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v64, v63);
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  v69[0] = 0;
  v38 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v69, 1);
  v23 = v38;
  if ( v38 < 0 )
  {
    v65 = WdLogNewEntry5_WdError(v40, v39, v41);
    *(_QWORD *)(v65 + 24) = v23;
    WdLogEvent5_WdError(v65);
  }
  else
  {
    v42 = (struct _LUID *)(v22 + 276);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v22 + 276),
                              v4);
    v76 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v48 = *((_DWORD *)PrimaryDisplaySource + 4);
          v49 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v46, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v49 + 276),
                                                   0);
          v23 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
            v67[3] = *(int *)(v49 + 280);
            v67[4] = *(unsigned int *)(v49 + 276);
            v67[5] = v23;
            WdLogEvent5_WdError(v67);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77,
              v70);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v70, 1, v54, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v80);
            if ( *(_DWORD *)(v49 + 176) != 1 && *((_DWORD *)v70 + 116) == 4
              || *(_DWORD *)(v49 + 176) == 4
              || (v75 = v70, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL) + 176LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              COREACCESS::~COREACCESS((COREACCESS *)v81);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
            }
            else
            {
              if ( *(_QWORD *)(v49 + 2560) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v70 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler(v55, 8LL, v48);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v55, 1 << v48, 0, 1 << v48, 0);
              }
              if ( (a2 & 4) != 0 )
              {
                v56 = v70;
                v57 = DmmDisablePathsFromVidPnSource(v70, v48);
              }
              else
              {
                v68 = *(_BYTE *)(v49 + 2465)
                   && *(_BYTE *)(v49 + 2384)
                   && *(_DWORD *)(v49 + 284) != 1297040209
                   && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v49 + 192) + 64LL) + 1152LL);
                v56 = v70;
                v57 = DmmRemovePathsFromVidPnSource(v70, v48, v68);
              }
              LODWORD(v23) = v57;
              memset(v79, 0, sizeof(v79));
              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v49 + 2552), v48, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v49 + 2552),
                v48,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v79);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v49 + 2552), v48, 0);
              v58 = *(ADAPTER_DISPLAY **)(v49 + 2552);
              *(_QWORD *)&v78.left = 0LL;
              *(_QWORD *)&v78.right = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v58, v48, &v78);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v49 + 2552), v48, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              COREACCESS::~COREACCESS((COREACCESS *)v81);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v70);
            }
          }
          v46 = v76;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v71;
        v42 = (struct _LUID *)(v22 + 276);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v42, v4, 1u);
      if ( v69[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_20;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, 0LL);
    v66[3] = v4;
    v66[4] = *(int *)(v22 + 280);
    v66[5] = v42->LowPart;
    WdLogEvent5_WdError(v66);
    LODWORD(v23) = 0;
  }
  if ( v69[0] )
    DxgkReleaseSessionModeChangeLock();
  v28 = v23;
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v27);
  if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v72);
  return v28;
}
