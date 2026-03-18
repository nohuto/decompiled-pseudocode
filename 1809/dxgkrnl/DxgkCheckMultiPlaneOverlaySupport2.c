/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0200D60
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
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC77C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD **v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  SIZE_T v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v23; // r14
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
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  _DWORD *v42; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v43; // rdx
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  const GUID *v48; // r8
  int v49; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-F0h]
  char v51; // [rsp+40h] [rbp-E8h]
  struct DXGDEVICE *v52; // [rsp+48h] [rbp-E0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v53; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-D4h]
  void *v55; // [rsp+58h] [rbp-D0h]
  _QWORD v56[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v57; // [rsp+70h] [rbp-B8h]
  struct DXGDEVICE *v58; // [rsp+78h] [rbp-B0h] BYREF
  unsigned int v59[4]; // [rsp+80h] [rbp-A8h]
  void *Src[2]; // [rsp+90h] [rbp-98h]
  _BYTE v61[136]; // [rsp+A0h] [rbp-88h] BYREF
  bool v63; // [rsp+138h] [rbp+10h]
  unsigned int v64; // [rsp+140h] [rbp+18h]
  int v65; // [rsp+148h] [rbp+20h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2093);
  Current = DXGPROCESS::GetCurrent();
  v7 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    v9 = (_QWORD *)v8;
LABEL_54:
    WdLogEvent5_WdError(v9);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v47, &EventProfilerExit, v48, v49);
    }
    return 3221225485LL;
  }
  v63 = *((_BYTE *)Current + 322) == 0;
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v59 = *v10;
  *(_OWORD *)Src = v10[1];
  v11 = v59[2];
  v64 = v59[2];
  if ( v59[2] - 1 > 6 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v44[3] = v11;
    v44[4] = -1073741811LL;
    v44[5] = PsGetCurrentProcess(v46, v45);
    v9 = v44;
    goto LABEL_54;
  }
  v12 = (unsigned __int64)v59[2] << 7;
  v13 = 0xFFFFFFFFLL;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  v57 = v13;
  v14 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v54 = v14;
  if ( v12 > 0xFFFFFFFF )
  {
    v15 = WdLogNewEntry5_WdWarning(v59[2], 0xFFFFFFFFLL, v6);
    *(_QWORD *)(v15 + 24) = 8837LL;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v49);
    return v14;
  }
  v19 = (unsigned __int64)v59[2] << 7;
  if ( !is_mul_ok(v59[2], 0x80uLL) )
    v19 = -1LL;
  v23 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new(v19, 0x4B677844u, PagedPool);
  v55 = v23;
  if ( v23 )
  {
    v29 = Src[0];
    if ( (char *)Src[0] + v13 < Src[0] || (char *)Src[0] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v29, (unsigned int)v13);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v59[1], v7, &v58);
    v31 = (ADAPTER_RENDER **)v58;
    if ( !v58 )
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = v59[1];
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      operator delete[](v23);
      if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
      goto LABEL_55;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56, v58);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v31, 2, v33, 0);
    v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61);
    v38 = v34;
    if ( v34 >= 0 )
    {
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(v31, v64, v23, v63, &v65, &v53) >= 0 )
      {
        v42 = (_DWORD *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v42 = (_DWORD *)MmUserProbeAddress;
        *v42 = v65;
        v43 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 28);
        if ( a1 + 28 >= MmUserProbeAddress )
          v43 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
        v43->0 = v53.0;
      }
      operator delete[](v23);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      if ( v56[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
      if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
      goto LABEL_14;
    }
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v39 + 24) = v31;
    *(_QWORD *)(v39 + 32) = v38;
    WdLogEvent5_WdWarning(v39);
    operator delete[](v23);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    if ( v56[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
    if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v49);
    return (unsigned int)v38;
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    *(_QWORD *)(v24 + 32) = PsGetCurrentProcess(v26, v25);
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v49);
    return 3221225495LL;
  }
}
