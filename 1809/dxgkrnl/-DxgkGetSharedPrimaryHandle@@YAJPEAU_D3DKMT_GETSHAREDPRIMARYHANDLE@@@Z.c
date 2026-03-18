/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C01D2660
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000F724 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0011E00 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00122E8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C01C2BAC (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01C3E9C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, const GUID *a3)
{
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v3; // r13
  bool v4; // r12
  ULONG64 v5; // rax
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  DXGADAPTER *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int PairingAdapters; // esi
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  struct DXGADAPTER *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int VidPnSourceOwnerType; // eax
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rsi
  __int64 v31; // rcx
  DXGSESSIONMGR *v32; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rax
  _DWORD *p_hSharedPrimary; // rdx
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rcx
  unsigned int *v47; // r13
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r15
  _QWORD *v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r15
  _QWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r15
  _BYTE v70[8]; // [rsp+30h] [rbp-1E8h] BYREF
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v71; // [rsp+38h] [rbp-1E0h]
  int v72; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v73; // [rsp+48h] [rbp-1D0h]
  char v74; // [rsp+50h] [rbp-1C8h]
  unsigned int v75[2]; // [rsp+58h] [rbp-1C0h]
  int CddPrimaryShareResourceHandle; // [rsp+60h] [rbp-1B8h]
  struct DXGCONTEXT *v77; // [rsp+68h] [rbp-1B0h] BYREF
  struct DXGDEVICE *v78; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v79[8]; // [rsp+78h] [rbp-1A0h] BYREF
  struct DXGADAPTER *v80; // [rsp+80h] [rbp-198h]
  char v81; // [rsp+88h] [rbp-190h]
  _BYTE v82[16]; // [rsp+90h] [rbp-188h] BYREF
  DXGADAPTER *v83; // [rsp+A0h] [rbp-178h] BYREF
  unsigned int v84; // [rsp+B0h] [rbp-168h] BYREF
  unsigned int v85; // [rsp+B4h] [rbp-164h] BYREF
  struct DXGADAPTER *v86; // [rsp+B8h] [rbp-160h] BYREF
  struct DXGADAPTER *v87; // [rsp+C0h] [rbp-158h] BYREF
  unsigned __int64 v88; // [rsp+C8h] [rbp-150h] BYREF
  _QWORD v89[8]; // [rsp+D0h] [rbp-148h] BYREF
  _BYTE v90[96]; // [rsp+110h] [rbp-108h] BYREF
  _BYTE v91[80]; // [rsp+170h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp-58h] BYREF
  char v93; // [rsp+1F0h] [rbp-28h]

  v3 = a1;
  v71 = a1;
  v72 = -1;
  v4 = 0;
  v73 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v74 = 1;
    v72 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v72, 2021);
  v5 = (ULONG64)v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_QWORD *)v75 = *(_QWORD *)v5;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v5 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_29;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v83, v75[0], Current, &v86, 1);
  v11 = v86;
  if ( !v86 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v75[0];
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    v13 = v83;
    if ( !v83 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v14 = v75[1];
  PairingAdapters = DxgkpGetPairingAdapters(v86, v75[1], 0LL, 0LL, &v87, &v88);
  if ( PairingAdapters < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v14;
    WdLogEvent5_WdError(v17);
    if ( v83 )
      DXGADAPTER::ReleaseReference(v83);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v72);
    return (unsigned int)PairingAdapters;
  }
  v21 = v87;
  if ( !v87 || !*((_QWORD *)v87 + 315) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v22 + 24) = 4398LL;
    WdLogEvent5_WdAssertion(v22);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, v21, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91);
  if ( PairingAdapters < 0 )
  {
    DXGADAPTER::ReleaseReference(v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    if ( v83 )
      DXGADAPTER::ReleaseReference(v83);
    goto LABEL_15;
  }
  v23 = *((_QWORD *)v21 + 315);
  if ( (unsigned int)v14 >= *(_DWORD *)(v23 + 80) )
  {
    DXGADAPTER::ReleaseReference(v21);
    v25 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v25 + 24) = v14;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    v13 = v83;
    if ( !v83 )
    {
LABEL_29:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
      if ( v74 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v26, &EventProfilerExit, v27, v72);
      }
      return 3221225485LL;
    }
LABEL_28:
    DXGADAPTER::ReleaseReference(v13);
    goto LABEL_29;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle((DXGADAPTER **)v23, v14);
  if ( !CddPrimaryShareResourceHandle
    && !DXGPROCESS::IsRemoteConnection(v7)
    && ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v21 + 315), v14)
    && DXGADAPTER::UsingSetTimingsFromVidPn(v21) )
  {
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v21 + 315), v14);
    v4 = !VidPnSourceOwnerType || VidPnSourceOwnerType == 3;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
  v30 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  if ( !v4 )
    goto LABEL_50;
  v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29) + 77);
  if ( v32 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v31);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v32, CurrentProcessSessionId);
    LOBYTE(v32) = 0;
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v70);
    v37 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v70, 0);
    v39 = v37;
    if ( v37 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v40 + 24) = v39;
      WdLogEvent5_WdError(v40);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v70);
      v3 = v71;
LABEL_50:
      LOBYTE(v32) = 0;
      goto LABEL_51;
    }
    LOBYTE(v32) = 0;
    if ( DXGPROCESS::IsRemoteConnection(v7) )
    {
      v45 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v46);
      *(_QWORD *)(v45 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v45);
LABEL_66:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v70);
      goto LABEL_47;
    }
    v93 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
    v47 = (unsigned int *)((char *)v21 + 276);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v21 + 276),
                                             &v78,
                                             &v77,
                                             0LL);
    v50 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v51 = WdLogNewEntry5_WdError(v49);
      *(_QWORD *)(v51 + 24) = v21;
      *(_QWORD *)(v51 + 32) = v50;
      WdLogEvent5_WdError(v51);
      if ( v93 )
      {
        KeUnstackDetachProcess(&ApcState);
        v93 = 0;
      }
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v70);
      v30 = (volatile signed __int64 *)v78;
      goto LABEL_47;
    }
    v30 = (volatile signed __int64 *)v78;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82, v78);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v89,
      &v77,
      1u);
    v80 = v21;
    v81 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, (__int64)v30, 1, v52, 0);
    if ( !v89[0] )
    {
      v54 = WdLogNewEntry5_WdLowResource(v53);
      *(_QWORD *)(v54 + 24) = 4531LL;
      WdLogEvent5_WdLowResource(v54);
      goto LABEL_73;
    }
    v55 = COREDEVICEACCESS::AcquireExclusive((__int64)v90, 1LL);
    v32 = (DXGSESSIONMGR *)v55;
    if ( v55 < 0 )
    {
      v57 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v57 + 24) = v30;
      *(_QWORD *)(v57 + 32) = v32;
      WdLogEvent5_WdError(v57);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
      LOBYTE(v32) = 0;
      goto LABEL_74;
    }
    LOBYTE(v32) = 0;
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v21 + 315), v14) || DXGPROCESS::IsRemoteConnection(v7) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v58);
      v62[3] = v14;
      v62[4] = *((int *)v21 + 70);
      v62[5] = *v47;
    }
    else
    {
      v59 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v21 + 315), v14);
      v61 = v59;
      if ( !v59 || v59 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v21 + 315),
                                          v14);
        if ( !CddPrimaryShareResourceHandle )
        {
          v63 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  *((DXGADAPTER ***)v21 + 315),
                  (struct DXGDEVICE *)v30,
                  v14,
                  &v85,
                  &v84,
                  (struct COREDEVICEACCESS *)v90);
          v65 = v63;
          if ( v63 >= 0 )
          {
            CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                              *((DXGADAPTER ***)v21 + 315),
                                              v14);
            if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v21 + 315), v14) )
              goto LABEL_73;
            if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v21 + 315), v14) )
              goto LABEL_73;
            v67 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *((ADAPTER_DISPLAY **)v21 + 315),
                    v77,
                    v14,
                    (struct COREDEVICEACCESS *)v90);
            v69 = v67;
            if ( v67 >= 0 )
              goto LABEL_73;
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v68);
            v66[3] = v14;
            v66[4] = v21;
            v66[5] = v69;
          }
          else
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v64);
            v66[3] = v21;
            v66[4] = v65;
          }
          WdLogEvent5_WdError(v66);
        }
LABEL_73:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
LABEL_74:
        if ( v81 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v89);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82);
        if ( v93 )
        {
          KeUnstackDetachProcess(&ApcState);
          v93 = 0;
        }
        goto LABEL_66;
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v60);
      v62[3] = v61;
      v62[4] = v14;
      v62[5] = *((int *)v21 + 70);
      v62[6] = *v47;
    }
    WdLogEvent5_WdError(v62);
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_73;
  }
  v35 = WdLogNewEntry5_WdError(v31);
  *(_QWORD *)(v35 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v36);
  *(_QWORD *)(v35 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v35);
LABEL_47:
  v3 = v71;
LABEL_51:
  DXGADAPTER::ReleaseReference(v21);
  if ( v77 )
    DXGCONTEXT::ReleaseReference(v77);
  if ( v30 && _InterlockedExchangeAdd64(v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
  p_hSharedPrimary = &v3->hSharedPrimary;
  if ( (unsigned __int64)&v3->hSharedPrimary >= MmUserProbeAddress )
    p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
  *p_hSharedPrimary = CddPrimaryShareResourceHandle;
  if ( v83 )
    DXGADAPTER::ReleaseReference(v83);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
  if ( v74 != (_BYTE)v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v72);
  return 0LL;
}
