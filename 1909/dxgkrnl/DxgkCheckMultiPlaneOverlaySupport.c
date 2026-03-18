/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C0231630
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
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C022DFBC (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, const GUID *a3)
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
  ULONG64 v18; // rax
  __int64 v19; // r13
  unsigned int v20; // r14d
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v25; // r15
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
  _DWORD *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  const GUID *v53; // r8
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  bool v57; // [rsp+30h] [rbp-148h]
  int v58; // [rsp+38h] [rbp-140h] BYREF
  __int64 v59; // [rsp+40h] [rbp-138h]
  char v60; // [rsp+48h] [rbp-130h]
  struct DXGDEVICE *v61; // [rsp+50h] [rbp-128h] BYREF
  ULONG64 v62; // [rsp+58h] [rbp-120h]
  int v63; // [rsp+60h] [rbp-118h] BYREF
  void *v64; // [rsp+68h] [rbp-110h]
  _QWORD v65[2]; // [rsp+70h] [rbp-108h] BYREF
  int v66; // [rsp+80h] [rbp-F8h]
  struct DXGDEVICE *v67; // [rsp+88h] [rbp-F0h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-E8h]
  __int64 v69; // [rsp+A0h] [rbp-D8h]
  _BYTE v70[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v62 = a1;
  v58 = -1;
  v59 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v60 = 1;
    v58 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v58, 2093LL);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v14);
    if ( v60 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v58);
    }
    return v12;
  }
  v57 = *((_BYTE *)Current + 298) == 0;
  v18 = a1;
  if ( a1 >= MmUserProbeAddress )
    v18 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v18;
  v69 = *(_QWORD *)(v18 + 16);
  v19 = HIDWORD(Src[0]);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
    v54[3] = v19;
    v12 = -1073741811;
    v54[4] = -1073741811LL;
    v54[5] = PsGetCurrentProcess(v56, v55);
    v13 = v54;
    goto LABEL_7;
  }
  v20 = 120 * HIDWORD(Src[0]);
  if ( 120 * (unsigned __int64)HIDWORD(Src[0]) > 0xFFFFFFFF )
  {
    v50 = WdLogNewEntry5_WdWarning(HIDWORD(Src[0]), v7, v9);
    *(_QWORD *)(v50 + 24) = 7074LL;
    WdLogEvent5_WdWarning(v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v51);
    if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v52, &EventProfilerExit, v53, v58);
    return 3221225621LL;
  }
  else
  {
    v66 = 120 * HIDWORD(Src[0]);
    v21 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v21 = -1LL;
    v25 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new[](v21, 0x4B677844u, PagedPool);
    v64 = v25;
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      v12 = -1073741801;
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      *(_QWORD *)(v26 + 32) = PsGetCurrentProcess(v28, v27);
      WdLogEvent5_WdWarning(v26);
      goto LABEL_8;
    }
    v29 = Src[1];
    v30 = (char *)Src[1] + v20;
    if ( v30 < Src[1] || (unsigned __int64)v30 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, v20);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, (unsigned int)Src[0], v10, &v67);
    v34 = (ADAPTER_RENDER **)v67;
    if ( !v67 )
    {
      v35 = WdLogNewEntry5_WdError(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = LODWORD(Src[0]);
      v12 = -1073741811;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v35);
      operator delete[](v25);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      goto LABEL_8;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65, v67);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)v34, 2, v36, 0);
    v37 = COREDEVICEACCESS::AcquireShared((__int64)v70, 0xFFFFFFFF, 0LL);
    v41 = v37;
    if ( v37 >= 0 )
    {
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(v34, v19, v25, v57, &v63) >= 0 )
      {
        v46 = (_DWORD *)(v62 + 16);
        if ( v62 + 16 >= MmUserProbeAddress )
          v46 = (_DWORD *)MmUserProbeAddress;
        *v46 = v63;
      }
      operator delete[](v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
      if ( v65[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v47);
      if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v48, &EventProfilerExit, v49, v58);
      return 0LL;
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v42 + 24) = v34;
      *(_QWORD *)(v42 + 32) = v41;
      WdLogEvent5_WdWarning(v42);
      operator delete[](v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
      if ( v65[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v43);
      if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v58);
      return (unsigned int)v41;
    }
  }
}
