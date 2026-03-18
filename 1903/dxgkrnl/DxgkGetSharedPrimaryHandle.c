/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C0202490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003810 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000388C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0023884 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4540 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C01F1DC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01F2DA0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r13
  bool v4; // r12
  __int64 v5; // rdx
  ULONG64 v6; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  DXGPROCESS *v9; // r15
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int PairingAdapters; // esi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  struct DXGADAPTER *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int VidPnSourceOwnerType; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  volatile signed __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  DXGSESSIONMGR *v42; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r12
  __int64 v53; // rax
  _DWORD *v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int *v63; // r13
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r15
  _QWORD *v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r15
  _QWORD *v95; // rax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r15
  _BYTE v101[8]; // [rsp+40h] [rbp-268h] BYREF
  ULONG64 v102; // [rsp+48h] [rbp-260h]
  int v103; // [rsp+50h] [rbp-258h] BYREF
  __int64 v104; // [rsp+58h] [rbp-250h]
  char v105; // [rsp+60h] [rbp-248h]
  unsigned int v106[2]; // [rsp+68h] [rbp-240h]
  int CddPrimaryShareResourceHandle; // [rsp+70h] [rbp-238h]
  DXGCONTEXT *v108; // [rsp+78h] [rbp-230h] BYREF
  struct DXGDEVICE *v109; // [rsp+80h] [rbp-228h] BYREF
  _BYTE v110[8]; // [rsp+88h] [rbp-220h] BYREF
  struct DXGADAPTER *v111; // [rsp+90h] [rbp-218h]
  char v112; // [rsp+98h] [rbp-210h]
  _BYTE v113[16]; // [rsp+A0h] [rbp-208h] BYREF
  DXGADAPTER *v114; // [rsp+B0h] [rbp-1F8h] BYREF
  unsigned int v115; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned int v116; // [rsp+C4h] [rbp-1E4h] BYREF
  struct DXGADAPTER *v117; // [rsp+C8h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v118; // [rsp+D0h] [rbp-1D8h] BYREF
  unsigned __int64 v119; // [rsp+D8h] [rbp-1D0h] BYREF
  _QWORD v120[7]; // [rsp+E0h] [rbp-1C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-190h] BYREF
  char v122; // [rsp+148h] [rbp-160h]
  _BYTE v123[160]; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v124[144]; // [rsp+1F0h] [rbp-B8h] BYREF

  v3 = a1;
  v102 = a1;
  v103 = -1;
  v4 = 0;
  v104 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v105 = 1;
    v103 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v105 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v103, 2021LL);
  v6 = v3;
  if ( v3 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_QWORD *)v106 = *(_QWORD *)v6;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v6 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5);
  v9 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_8;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v114, v106[0], Current, &v117, 1);
  v16 = v117;
  if ( !v117 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v106[0];
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    if ( v114 )
      DXGADAPTER::ReleaseReferenceNoTracking(v114);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103, v8);
    if ( v105 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v103);
    }
    return 3221225485LL;
  }
  v18 = v106[1];
  PairingAdapters = DxgkpGetPairingAdapters(v117, v106[1], 0LL, 0LL, &v118, &v119, 0);
  if ( PairingAdapters < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v22);
    *(_QWORD *)(v23 + 24) = v16;
    *(_QWORD *)(v23 + 32) = v18;
    WdLogEvent5_WdError(v23);
    if ( v114 )
      DXGADAPTER::ReleaseReferenceNoTracking(v114);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103, v24);
    if ( v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v103);
    return (unsigned int)PairingAdapters;
  }
  v27 = v118;
  if ( !v118 || !*((_QWORD *)v118 + 319) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v28 + 24) = 4796LL;
    WdLogEvent5_WdAssertion(v28);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v124, v27, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((__int64)v124, 0xFFFFFFFFLL, v29);
  if ( PairingAdapters < 0 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v124);
    if ( v114 )
      DXGADAPTER::ReleaseReferenceNoTracking(v114);
    goto LABEL_18;
  }
  v30 = *((_QWORD *)v27 + 319);
  if ( (unsigned int)v18 >= *(_DWORD *)(v30 + 80) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v27);
    v34 = WdLogNewEntry5_WdError(v32, v31, v33);
    *(_QWORD *)(v34 + 24) = v18;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v124);
    if ( v114 )
      DXGADAPTER::ReleaseReferenceNoTracking(v114);
    goto LABEL_8;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v30,
                                    (unsigned int)v18);
  if ( !CddPrimaryShareResourceHandle
    && !DXGPROCESS::IsRemoteConnection(v9)
    && ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v27 + 319), v18)
    && DXGADAPTER::UsingSetTimingsFromVidPn(v27) )
  {
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v27 + 319), v18);
    v4 = !VidPnSourceOwnerType || VidPnSourceOwnerType == 3;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v124);
  v38 = 0LL;
  v109 = 0LL;
  v108 = 0LL;
  if ( !v4 )
    goto LABEL_50;
  v42 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v37, v36) + 74);
  if ( v42 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v39);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v42, CurrentProcessSessionId);
    LOBYTE(v42) = 0;
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v101);
    v48 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v101, 0);
    v52 = v48;
    if ( v48 < 0 )
    {
      v53 = WdLogNewEntry5_WdError(v50, v49, v51);
      *(_QWORD *)(v53 + 24) = v52;
      WdLogEvent5_WdError(v53);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v101);
      v3 = v102;
LABEL_50:
      LOBYTE(v42) = 0;
      goto LABEL_51;
    }
    LOBYTE(v42) = 0;
    if ( DXGPROCESS::IsRemoteConnection(v9) )
    {
      v60 = WdLogNewEntry5_WdError(v58, v57, v59);
      *(_QWORD *)(v60 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v62, v61);
      *(_QWORD *)(v60 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v60);
LABEL_66:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v101);
      goto LABEL_47;
    }
    v122 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
    v63 = (unsigned int *)((char *)v27 + 276);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v27 + 276),
                                             &v109,
                                             &v108,
                                             0LL,
                                             0);
    v68 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v69 = WdLogNewEntry5_WdError(v66, v65, v67);
      *(_QWORD *)(v69 + 24) = v27;
      *(_QWORD *)(v69 + 32) = v68;
      WdLogEvent5_WdError(v69);
      if ( v122 )
      {
        KeUnstackDetachProcess(&ApcState);
        v122 = 0;
      }
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v101);
      v38 = (volatile signed __int64 *)v109;
      goto LABEL_47;
    }
    v38 = (volatile signed __int64 *)v109;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v113, v109);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v120,
      &v108,
      1u);
    v111 = v27;
    v112 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v110);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v123, (__int64)v38, 1, v70, 0);
    if ( !v120[0] )
    {
      v75 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
      *(_QWORD *)(v75 + 24) = 4929LL;
      WdLogEvent5_WdLowResource(v75);
      goto LABEL_73;
    }
    v76 = COREDEVICEACCESS::AcquireExclusive((__int64)v123, 1LL);
    v42 = (DXGSESSIONMGR *)v76;
    if ( v76 < 0 )
    {
      v80 = WdLogNewEntry5_WdError(v78, v77, v79);
      *(_QWORD *)(v80 + 24) = v38;
      *(_QWORD *)(v80 + 32) = v42;
      WdLogEvent5_WdError(v80);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
      LOBYTE(v42) = 0;
      goto LABEL_74;
    }
    LOBYTE(v42) = 0;
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v27 + 319), v18) || DXGPROCESS::IsRemoteConnection(v9) )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81, v83);
      v89[3] = v18;
      v89[4] = *((int *)v27 + 70);
      v89[5] = *v63;
    }
    else
    {
      v84 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v27 + 319), v18);
      v88 = v84;
      if ( !v84 || v84 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v27 + 319),
                                          (unsigned int)v18);
        if ( !CddPrimaryShareResourceHandle )
        {
          v90 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  *((DXGADAPTER ***)v27 + 319),
                  (struct DXGDEVICE *)v38,
                  v18,
                  &v116,
                  &v115,
                  (struct COREDEVICEACCESS *)v123);
          v94 = v90;
          if ( v90 >= 0 )
          {
            CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                              *((DXGADAPTER ***)v27 + 319),
                                              (unsigned int)v18);
            if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v27 + 319), v18) )
              goto LABEL_73;
            if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v27 + 319), v18) )
              goto LABEL_73;
            v96 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *((ADAPTER_DISPLAY **)v27 + 319),
                    v108,
                    v18,
                    (struct COREDEVICEACCESS *)v123);
            v100 = v96;
            if ( v96 >= 0 )
              goto LABEL_73;
            v95 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97, v99);
            v95[3] = v18;
            v95[4] = v27;
            v95[5] = v100;
          }
          else
          {
            v95 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91, v93);
            v95[3] = v27;
            v95[4] = v94;
          }
          WdLogEvent5_WdError(v95);
        }
LABEL_73:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
LABEL_74:
        if ( v112 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v110);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v113);
        if ( v122 )
        {
          KeUnstackDetachProcess(&ApcState);
          v122 = 0;
        }
        goto LABEL_66;
      }
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85, v87);
      v89[3] = v88;
      v89[4] = v18;
      v89[5] = *((int *)v27 + 70);
      v89[6] = *v63;
    }
    WdLogEvent5_WdError(v89);
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_73;
  }
  v45 = WdLogNewEntry5_WdError(v40, v39, v41);
  *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v47, v46);
  *(_QWORD *)(v45 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v45);
LABEL_47:
  v3 = v102;
LABEL_51:
  DXGADAPTER::ReleaseReferenceNoTracking(v27);
  if ( v108 )
    DXGCONTEXT::ReleaseReference(v108);
  if ( v38 && _InterlockedExchangeAdd64(v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v109 + 2), v109);
  v54 = (_DWORD *)(v3 + 8);
  if ( v3 + 8 >= MmUserProbeAddress )
    v54 = (_DWORD *)MmUserProbeAddress;
  *v54 = CddPrimaryShareResourceHandle;
  if ( v114 )
    DXGADAPTER::ReleaseReferenceNoTracking(v114);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103, (__int64)v54);
  if ( v105 != (_BYTE)v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v55, &EventProfilerExit, v56, v103);
  return 0LL;
}
