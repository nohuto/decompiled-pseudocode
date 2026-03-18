/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0231C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022D0A8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // r12
  __int64 v11; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  _OWORD *v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  const void *v29; // rdx
  char *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  ADAPTER_RENDER **v34; // r14
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v46; // r8
  _DWORD *v47; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  const GUID *v55; // r8
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  bool v59; // [rsp+30h] [rbp-158h]
  int v60; // [rsp+38h] [rbp-150h] BYREF
  __int64 v61; // [rsp+40h] [rbp-148h]
  char v62; // [rsp+48h] [rbp-140h]
  struct DXGDEVICE *v63; // [rsp+50h] [rbp-138h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v64; // [rsp+58h] [rbp-130h] BYREF
  ULONG64 v65; // [rsp+60h] [rbp-128h]
  int v66; // [rsp+68h] [rbp-120h] BYREF
  void *v67; // [rsp+70h] [rbp-118h]
  _QWORD v68[2]; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-100h]
  struct DXGDEVICE *v70; // [rsp+90h] [rbp-F8h] BYREF
  unsigned int v71[4]; // [rsp+98h] [rbp-F0h]
  void *Src[2]; // [rsp+A8h] [rbp-E0h]
  _BYTE v73[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v65 = a1;
  v60 = -1;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    v13 = (_QWORD *)v11;
LABEL_7:
    WdLogEvent5_WdError(v13);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v14);
    if ( v62 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v60);
    }
    return v12;
  }
  v59 = *((_BYTE *)Current + 298) == 0;
  v18 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v18 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v71 = *v18;
  *(_OWORD *)Src = v18[1];
  v19 = v71[2];
  if ( v71[2] - 1 > 6 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
    v56[3] = v19;
    v12 = -1073741811;
    v56[4] = -1073741811LL;
    v56[5] = PsGetCurrentProcess(v58, v57);
    v13 = v56;
    goto LABEL_7;
  }
  v20 = (unsigned __int64)v71[2] << 7;
  if ( v20 > 0xFFFFFFFF )
  {
    v52 = WdLogNewEntry5_WdWarning(v71[2], v7, v9);
    *(_QWORD *)(v52 + 24) = 8919LL;
    WdLogEvent5_WdWarning(v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v53);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v54, &EventProfilerExit, v55, v60);
    return 3221225621LL;
  }
  else
  {
    v69 = v71[2] << 7;
    v21 = (unsigned __int64)v71[2] << 7;
    if ( !is_mul_ok(v71[2], 0x80uLL) )
      v21 = -1LL;
    v25 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new[](v21, 0x4B677844u, PagedPool);
    v67 = v25;
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      v12 = -1073741801;
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      *(_QWORD *)(v26 + 32) = PsGetCurrentProcess(v28, v27);
      WdLogEvent5_WdWarning(v26);
      goto LABEL_8;
    }
    v29 = Src[0];
    v30 = (char *)Src[0] + (unsigned int)v20;
    if ( v30 < Src[0] || (unsigned __int64)v30 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, (unsigned int)v20);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63, v71[1], v10, &v70);
    v34 = (ADAPTER_RENDER **)v70;
    if ( !v70 )
    {
      v35 = WdLogNewEntry5_WdError(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = v71[1];
      v12 = -1073741811;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v35);
      operator delete[](v25);
      if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
      goto LABEL_8;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68, v70);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)v34, 2, v36, 0);
    v37 = COREDEVICEACCESS::AcquireShared((__int64)v73, 0xFFFFFFFF, 0LL);
    v41 = v37;
    if ( v37 >= 0 )
    {
      v64.0 = 0;
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(v34, v19, v25, v59, &v66, &v64) >= 0 )
      {
        v46 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v65;
        v47 = (_DWORD *)(v65 + 24);
        if ( v65 + 24 >= MmUserProbeAddress )
          v47 = (_DWORD *)MmUserProbeAddress;
        *v47 = v66;
        v48 = v46 + 7;
        if ( (unsigned __int64)&v46[7] >= MmUserProbeAddress )
          v48 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
        v48->0 = v64.0;
      }
      operator delete[](v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
      if ( v68[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
      if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v49);
      if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v50, &EventProfilerExit, v51, v60);
      return 0LL;
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v42 + 24) = v34;
      *(_QWORD *)(v42 + 32) = v41;
      WdLogEvent5_WdWarning(v42);
      operator delete[](v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
      if ( v68[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
      if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v43);
      if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v60);
      return (unsigned int)v41;
    }
  }
}
