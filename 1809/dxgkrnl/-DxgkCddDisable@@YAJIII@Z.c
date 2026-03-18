/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0002060 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001106C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00110C4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0011174 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0013450 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C012134C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01233FC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C0136F50 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, const GUID *a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rcx
  DXGSESSIONMGR *v25; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v28; // eax
  __int64 v29; // rcx
  struct _LUID *v30; // r13
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v32; // rcx
  SESSION_VIEW *v33; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v35; // r12d
  __int64 v36; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  ADAPTER_RENDER *v40; // r10
  struct DXGDEVICE *v41; // r13
  int v42; // eax
  ADAPTER_DISPLAY *v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  unsigned __int8 v54; // r8
  struct DXGDEVICE *v55; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h]
  char v58; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v59; // [rsp+50h] [rbp-B0h]
  DXGSESSIONDATA **v60; // [rsp+58h] [rbp-A8h]
  _BYTE v61[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v62; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v63[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v64[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v65[56]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v66[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v67[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v68[56]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v69[112]; // [rsp+150h] [rbp+50h] BYREF
  int v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h] BYREF

  v70 = (int)a3;
  v56 = -1;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 3003);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    v20 = -1073741811;
    v44 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    *(_QWORD *)(v44 + 32) = PsGetCurrentProcess();
LABEL_59:
    v46 = (_QWORD *)v44;
    goto LABEL_60;
  }
  v9 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)v8 + 62) )
  {
    v11 = *((_QWORD *)v8 + 29);
    v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      if ( (v12 & 0x1F) == 3 )
      {
        v13 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
        goto LABEL_10;
      }
      v45 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60);
      *(_QWORD *)(v45 + 24) = 316LL;
      WdLogEvent5_WdError(v45);
    }
  }
  v13 = 0LL;
LABEL_10:
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v55 = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    v20 = -1073741811;
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v46[3] = -1073741811LL;
    v46[4] = v5;
    v46[5] = v8;
LABEL_60:
    WdLogEvent5_WdError(v46);
    goto LABEL_21;
  }
  v16 = *(_QWORD *)(v13 + 1728);
  if ( !v16 || !*(_QWORD *)(v16 + 2520) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v47 + 24) = 594LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, v13, 1, v15, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v66);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 2520)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v16 + 2520),
        *(struct ADAPTER_RENDER **)(v13 + 16));
    if ( *(_DWORD *)(v16 + 176) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v16 + 2520), v4, 0LL);
    LODWORD(v17) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v68);
    COREACCESS::~COREACCESS((COREACCESS *)v67);
LABEL_18:
    Global = DXGGLOBAL::GetGlobal(v18);
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 143));
    if ( (int)v17 < 0 )
    {
      v71 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v16 + 276), v4, v17, 0LL);
    }
    v20 = 0;
    goto LABEL_21;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v48 + 24) = 635LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v25 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 77);
  if ( v25 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v25, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v44 = WdLogNewEntry5_WdError(v24);
    v20 = -1073741811;
    *(_QWORD *)(v44 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v49);
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  LOBYTE(v71) = 0;
  v28 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v71, 1);
  v17 = v28;
  if ( v28 < 0 )
  {
    v50 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v50 + 24) = v17;
    WdLogEvent5_WdError(v50);
  }
  else
  {
    v30 = (struct _LUID *)(v16 + 276);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v16 + 276),
                              v4);
    v60 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v35 = *((_DWORD *)PrimaryDisplaySource + 4);
          v36 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v33, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v36 + 276),
                                                   &v55,
                                                   0LL,
                                                   0LL);
          v17 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v53[3] = *(int *)(v36 + 280);
            v53[4] = *(unsigned int *)(v36 + 276);
            v53[5] = v17;
            WdLogEvent5_WdError(v53);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61,
              v55);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v55, 1, v39, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v63);
            if ( *(_DWORD *)(v36 + 176) != 1 && *((_DWORD *)v55 + 116) == 4
              || *(_DWORD *)(v36 + 176) == 4
              || (v59 = v55, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 176LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v65);
              COREACCESS::~COREACCESS((COREACCESS *)v64);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61);
            }
            else
            {
              if ( *(_QWORD *)(v36 + 2528) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v55 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler((__int64)v40, 8, v35, 0);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v40, 1 << v35, 0, 1 << v35, 0);
              }
              if ( (a2 & 4) != 0 )
              {
                v41 = v55;
                v42 = DmmDisablePathsFromVidPnSource(v55, v35);
              }
              else
              {
                v54 = *(_BYTE *)(v36 + 2429)
                   && *(_BYTE *)(v36 + 2360)
                   && *(_DWORD *)(v36 + 284) != 1297040209
                   && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v36 + 192) + 64LL) + 1144LL);
                v41 = v55;
                v42 = DmmRemovePathsFromVidPnSource(v55, v35, v54);
              }
              LODWORD(v17) = v42;
              memset(v69, 0, 0x38uLL);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v36 + 2520), v35, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v36 + 2520),
                v35,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v69);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v36 + 2520), v35, 0);
              v43 = *(ADAPTER_DISPLAY **)(v36 + 2520);
              *(_QWORD *)&v62.left = 0LL;
              *(_QWORD *)&v62.right = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v43, v35, &v62);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v36 + 2520), v35, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v65);
              COREACCESS::~COREACCESS((COREACCESS *)v64);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v55);
            }
          }
          v33 = (SESSION_VIEW *)v60;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v70;
        v30 = (struct _LUID *)(v16 + 276);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v30, v4, 1u);
      if ( (_BYTE)v71 )
        DxgkReleaseSessionModeChangeLock(v18);
      goto LABEL_18;
    }
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v52[3] = v4;
    v52[4] = *(int *)(v16 + 280);
    v52[5] = v30->LowPart;
    WdLogEvent5_WdError(v52);
    LODWORD(v17) = 0;
  }
  if ( (_BYTE)v71 )
    DxgkReleaseSessionModeChangeLock(v51);
  v20 = v17;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v56);
  return v20;
}
