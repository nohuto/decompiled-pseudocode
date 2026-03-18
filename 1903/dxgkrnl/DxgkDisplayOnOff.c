/*
 * XREFs of DxgkDisplayOnOff @ 0x1C00C6170
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003810 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1CPROCESSATTACHHELPER@@QEAA@XZ @ 0x1C0035C54 (--1CPROCESSATTACHHELPER@@QEAA@XZ.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C66D4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00C68C0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00C8678 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEF00 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0155E34 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0277EF0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  const GUID *v7; // r8
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  __int64 v14; // r8
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  DXGPROCESS *Current; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGPROCESS *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  SESSION_VIEW *v40; // r13
  _QWORD *v41; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v43; // r15
  __int64 v44; // rsi
  unsigned int *v45; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  _QWORD *v51; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r12
  _QWORD *v59; // rax
  unsigned __int8 v60; // r12
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  const GUID *v68; // r8
  char v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v72; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v73; // [rsp+38h] [rbp-C8h]
  DXGPROCESS *v74; // [rsp+40h] [rbp-C0h]
  _BYTE v75[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A0h]
  char v79; // [rsp+68h] [rbp-98h]
  _BYTE v80[24]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v81[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  char v83; // [rsp+110h] [rbp+10h]
  _BYTE v84[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v85[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v86[88]; // [rsp+168h] [rbp+68h] BYREF

  v4 = a2;
  v71 = a3;
  v72 = a4;
  memset(v81, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v81[1]);
  v77 = -1;
  v78 = 0LL;
  v81[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v81[3]) = 53;
  LOBYTE(v81[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v79 = 1;
    v77 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v77, 2183LL);
  v8 = 0LL;
  v83 = 0;
  v73 = 0LL;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 74);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v13,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v17) = -1073741811;
  if ( SessionDataForSpecifiedSession )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2328]);
    Current = DXGPROCESS::GetCurrent();
    v74 = Current;
    v26 = Current;
    if ( !Current )
    {
      v21 = WdLogNewEntry5_WdError(v24, v23, v25);
      *(_QWORD *)(v21 + 24) = 9353LL;
      goto LABEL_12;
    }
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v30 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = v26;
      WdLogEvent5_WdError(v30);
      LODWORD(v17) = -1073741790;
      goto LABEL_52;
    }
    v70 = 0;
    v31 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70, 1);
    v17 = v31;
    if ( v31 < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = v17;
      WdLogEvent5_WdError(v35);
LABEL_51:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
      goto LABEL_52;
    }
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                              a1,
                              v4);
    v40 = SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
      v41[3] = v4;
      v41[4] = a1->HighPart;
      v41[5] = a1->LowPart;
      WdLogEvent5_WdError(v41);
      LODWORD(v17) = -1073741811;
      goto LABEL_51;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
LABEL_50:
      LODWORD(v17) = 0;
      goto LABEL_51;
    }
    while ( 1 )
    {
      v43 = *((unsigned int *)PrimaryDisplaySource + 4);
      v44 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      v45 = (unsigned int *)(v44 + 276);
      if ( v8 )
      {
        DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v44 + 276), v8);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
        v73 = 0LL;
      }
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v44 + 276), 0);
      v50 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession >= 0 )
        break;
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47, v49);
      v51[3] = *(int *)(v44 + 280);
      v51[4] = *v45;
      v51[5] = v50;
      WdLogEvent5_WdError(v51);
      v8 = 0LL;
      v73 = 0LL;
      NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v40, PrimaryDisplaySource);
LABEL_48:
      PrimaryDisplaySource = NextDisplaySource;
LABEL_49:
      if ( !PrimaryDisplaySource )
        goto LABEL_50;
    }
    v8 = v73;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80, v73);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, *((struct DXGFASTMUTEX *const *)v26 + 36), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, (__int64)v8, 1, v53, 0);
    v54 = COREDEVICEACCESS::AcquireExclusive((__int64)v84, 2LL);
    v58 = v54;
    if ( v54 == -1073741130 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v86);
      COREACCESS::~COREACCESS((COREACCESS *)v85);
      if ( v76 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
      v26 = v74;
      goto LABEL_49;
    }
    if ( v54 >= 0 )
    {
      if ( !v71 )
      {
        DmmDisablePathsFromVidPnSource(v8, v43);
        goto LABEL_41;
      }
      v60 = v72;
      if ( v72 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v44 + 2552)) )
        ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
          *(ADAPTER_DISPLAY **)(v44 + 2552),
          *((struct ADAPTER_RENDER **)v8 + 2));
      if ( DmmEnablePathsFromVidPnSource(
             v8,
             v43,
             v60,
             (struct COREDEVICEACCESS *)v84,
             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v81) < 0 )
        goto LABEL_41;
      v61 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v44 + 2552), v43);
      v65 = v61;
      if ( v61 >= 0 )
        goto LABEL_41;
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62, v64);
      v59[3] = v43;
      v59[4] = *(int *)(v44 + 280);
      v59[5] = *v45;
      v59[6] = v65;
    }
    else
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55, v57);
      v59[3] = *(int *)(v44 + 280);
      v59[4] = *v45;
      v59[5] = v58;
    }
    WdLogEvent5_WdError(v59);
LABEL_41:
    COREACCESS::~COREACCESS((COREACCESS *)v86);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    if ( v76 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
      v8 = 0LL;
      v73 = 0LL;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v40, PrimaryDisplaySource);
    v26 = v74;
    goto LABEL_48;
  }
  v18 = WdLogNewEntry5_WdError(v12, v11, v14);
  *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v20, v19);
  v21 = v18;
  *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_12:
  WdLogEvent5_WdError(v21);
LABEL_52:
  CPROCESSATTACHHELPER::~CPROCESSATTACHHELPER(&ApcState);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77, v66);
  if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v67, &EventProfilerExit, v68, v77);
  return (unsigned int)v17;
}
