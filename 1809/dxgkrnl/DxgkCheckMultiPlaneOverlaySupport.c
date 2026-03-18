/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C0200760
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C01FD6A8 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD **v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rcx
  ULONG64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  SIZE_T v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  const GUID *v28; // r8
  const void *v29; // rdx
  __int64 v30; // rcx
  ADAPTER_RENDER **v31; // r15
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  _DWORD *v42; // rdx
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  const GUID *v47; // r8
  int v48; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-F0h]
  char v50; // [rsp+40h] [rbp-E8h]
  struct DXGDEVICE *v51; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-D8h]
  void *v53; // [rsp+58h] [rbp-D0h]
  _QWORD v54[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v55; // [rsp+70h] [rbp-B8h]
  struct DXGDEVICE *v56; // [rsp+78h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-A8h]
  __int64 v58; // [rsp+90h] [rbp-98h]
  _BYTE v59[136]; // [rsp+A0h] [rbp-88h] BYREF
  bool v61; // [rsp+138h] [rbp+10h]
  unsigned int v62; // [rsp+140h] [rbp+18h]
  int v63; // [rsp+148h] [rbp+20h] BYREF

  v48 = -1;
  v49 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v50 = 1;
    v48 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2093);
  Current = DXGPROCESS::GetCurrent();
  v7 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    v9 = (_QWORD *)v8;
LABEL_52:
    WdLogEvent5_WdError(v9);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v46, &EventProfilerExit, v47, v48);
    }
    return 3221225485LL;
  }
  v61 = *((_BYTE *)Current + 322) == 0;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v10;
  v58 = *(_QWORD *)(v10 + 16);
  v11 = HIDWORD(Src[0]);
  v62 = HIDWORD(Src[0]);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v43[3] = v11;
    v43[4] = -1073741811LL;
    v43[5] = PsGetCurrentProcess(v45, v44);
    v9 = v43;
    goto LABEL_52;
  }
  v12 = 120LL * HIDWORD(Src[0]);
  v13 = 0xFFFFFFFFLL;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  v55 = v13;
  v14 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v52 = v14;
  if ( v12 > 0xFFFFFFFF )
  {
    v15 = WdLogNewEntry5_WdWarning(HIDWORD(Src[0]), 0xFFFFFFFFLL, v6);
    *(_QWORD *)(v15 + 24) = 6992LL;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v48);
    return v14;
  }
  v19 = 120LL * HIDWORD(Src[0]);
  if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
    v19 = -1LL;
  v23 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new(v19, 0x4B677844u, PagedPool);
  v53 = v23;
  if ( v23 )
  {
    v29 = Src[1];
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v29, (unsigned int)v13);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, (unsigned int)Src[0], v7, &v56);
    v31 = (ADAPTER_RENDER **)v56;
    if ( !v56 )
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      operator delete[](v23);
      if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
      goto LABEL_53;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v56);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v31, 2, v33, 0);
    v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59);
    v38 = v34;
    if ( v34 >= 0 )
    {
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(v31, v62, v23, v61, &v63) >= 0 )
      {
        v42 = (_DWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v42 = (_DWORD *)MmUserProbeAddress;
        *v42 = v63;
      }
      operator delete[](v23);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
      if ( v54[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
      goto LABEL_14;
    }
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v39 + 24) = v31;
    *(_QWORD *)(v39 + 32) = v38;
    WdLogEvent5_WdWarning(v39);
    operator delete[](v23);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
    if ( v54[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
    if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v48);
    return (unsigned int)v38;
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    *(_QWORD *)(v24 + 32) = PsGetCurrentProcess(v26, v25);
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v48);
    return 3221225495LL;
  }
}
