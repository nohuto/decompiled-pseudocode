/*
 * XREFs of DxgkDisplayOnOff @ 0x1C0122E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF180 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01233FC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  const GUID *v7; // r8
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v14; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // r12
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v22; // rcx
  SESSION_VIEW *v23; // r13
  __int64 v24; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v26; // r14
  __int64 v27; // rdi
  unsigned int *v28; // r15
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rcx
  unsigned __int8 v37; // r12
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r12
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  char v53; // [rsp+30h] [rbp-D0h] BYREF
  char v54; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v55; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v56; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGPROCESS *v57; // [rsp+40h] [rbp-C0h]
  _BYTE v58[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  char v62; // [rsp+68h] [rbp-98h]
  _BYTE v63[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v64[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v65[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v66[56]; // [rsp+B8h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  char v68; // [rsp+120h] [rbp+20h]
  _QWORD v69[10]; // [rsp+130h] [rbp+30h] BYREF

  v4 = a2;
  v54 = a3;
  v55 = a4;
  memset(v69, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v69[1]);
  v60 = -1;
  v69[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v69[3]) = 53;
  LOBYTE(v69[6]) = -1;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 2183);
  v8 = 0LL;
  v68 = 0;
  v56 = 0LL;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 77);
  if ( v11 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v11,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v14) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v45 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v46);
    v47 = v45;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
LABEL_45:
    WdLogEvent5_WdError(v47);
    goto LABEL_35;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2328]);
  Current = DXGPROCESS::GetCurrent();
  v57 = Current;
  v17 = Current;
  if ( !Current )
  {
    v47 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v47 + 24) = 8641LL;
    goto LABEL_45;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
  {
    v48 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v48 + 24) = v17;
    WdLogEvent5_WdError(v48);
    LODWORD(v14) = -1073741790;
  }
  else
  {
    v53 = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v53, 1);
    v14 = v19;
    if ( v19 < 0 )
    {
      v49 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v49 + 24) = v14;
      WdLogEvent5_WdError(v49);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v23 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v26 = *((unsigned int *)PrimaryDisplaySource + 4);
            v27 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            v28 = (unsigned int *)(v27 + 276);
            if ( v8 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v27 + 276), v8);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
              v56 = 0LL;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v27 + 276),
                                                     &v56,
                                                     0LL,
                                                     0LL);
            v31 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v30);
            v51[3] = *(int *)(v27 + 280);
            v51[4] = *v28;
            v51[5] = v31;
            WdLogEvent5_WdError(v51);
            v8 = 0LL;
            v56 = 0LL;
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
LABEL_30:
            PrimaryDisplaySource = NextDisplaySource;
LABEL_31:
            if ( !PrimaryDisplaySource )
              goto LABEL_32;
          }
          v8 = v56;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63, v56);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v58, *((struct DXGFASTMUTEX *const *)v17 + 39), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v58);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v8, 1, v32, 0);
          v33 = COREDEVICEACCESS::AcquireExclusive((__int64)v64, 2LL);
          v35 = v33;
          if ( v33 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v66);
            COREACCESS::~COREACCESS((COREACCESS *)v65);
            if ( v59 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
            v17 = v57;
            goto LABEL_31;
          }
          if ( v33 < 0 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v34);
            v52[3] = *(int *)(v27 + 280);
            v52[4] = *v28;
            v52[5] = v35;
          }
          else
          {
            v36 = *(_QWORD *)(v27 + 2528);
            if ( v36 )
              ADAPTER_RENDER::FlushScheduler(v36, 8, v26, 0);
            if ( !v54 )
            {
              DmmDisablePathsFromVidPnSource(v8, v26);
LABEL_23:
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              COREACCESS::~COREACCESS((COREACCESS *)v65);
              if ( v59 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
                v8 = 0LL;
                v56 = 0LL;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
              v17 = v57;
              goto LABEL_30;
            }
            v37 = v55;
            if ( v55 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v27 + 2520)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v27 + 2520),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v26,
                        v37,
                        (struct COREDEVICEACCESS *)v64,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v69) < 0 )
              goto LABEL_23;
            v38 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v27 + 2520), v26);
            v40 = v38;
            if ( v38 >= 0 )
              goto LABEL_23;
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v52[3] = v26;
            v52[4] = *(int *)(v27 + 280);
            v52[5] = *v28;
            v52[6] = v40;
          }
          WdLogEvent5_WdError(v52);
          goto LABEL_23;
        }
LABEL_32:
        LODWORD(v14) = 0;
      }
      else
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v50[3] = v4;
        v50[4] = a1->HighPart;
        v50[5] = a1->LowPart;
        WdLogEvent5_WdError(v50);
        LODWORD(v14) = -1073741811;
      }
    }
    if ( v53 )
      DxgkReleaseSessionModeChangeLock(v24);
  }
LABEL_35:
  if ( v68 )
  {
    KeUnstackDetachProcess(&ApcState);
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v60);
  return (unsigned int)v14;
}
