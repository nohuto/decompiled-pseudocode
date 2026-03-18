/*
 * XREFs of DxgkCreateSwapChain @ 0x1C0289110
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0047C68 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp @ 0x1C0048358 (McTemplateK0pqdqqpp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0285240 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0285304 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C0285378 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0285A1C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C02867D0 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0287404 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _D3DKMT_CREATESWAPCHAIN *v16; // rax
  char v17; // r13
  __int64 SurfaceCount; // rdi
  PVOID v19; // r12
  __int64 v20; // rdi
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGDEVICE *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdi
  ULONG64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // r9
  DXGSWAPCHAIN *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // r15d
  struct DXGDEVICE *v55; // r13
  __int64 v56; // r9
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  NTSTATUS inserted; // eax
  __int64 v63; // rcx
  const GUID *v64; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-238h]
  PHANDLE Handle; // [rsp+28h] [rbp-230h]
  __int64 v67; // [rsp+30h] [rbp-228h]
  __int64 v68; // [rsp+38h] [rbp-220h]
  char v69; // [rsp+50h] [rbp-208h]
  struct DXGDEVICE *v70; // [rsp+58h] [rbp-200h] BYREF
  int v71; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-1F0h]
  char v73; // [rsp+70h] [rbp-1E8h]
  ULONG64 v74; // [rsp+78h] [rbp-1E0h]
  _QWORD v75[3]; // [rsp+80h] [rbp-1D8h] BYREF
  HANDLE v76; // [rsp+98h] [rbp-1C0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v77; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-180h] BYREF
  void *v79; // [rsp+E0h] [rbp-178h]
  struct DXGDEVICE *v80; // [rsp+E8h] [rbp-170h] BYREF
  unsigned int v81; // [rsp+F0h] [rbp-168h] BYREF
  struct DXGDEVICE *v82; // [rsp+F8h] [rbp-160h] BYREF
  ULONG64 v83; // [rsp+100h] [rbp-158h]
  _BYTE v84[160]; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v85[128]; // [rsp+1B0h] [rbp-A8h] BYREF

  v83 = a1;
  v74 = a1;
  v71 = -1;
  v72 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v73 = 1;
    v71 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v71, 2108LL);
  v4 = 0LL;
  v69 = 0;
  Object = 0LL;
  v76 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = 426LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v12);
    if ( v73 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v71);
    }
    return -1073741811LL;
  }
  v16 = (_D3DKMT_CREATESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v77 = *v16;
  v17 = (char)v77.Flags.0;
  if ( (*(_BYTE *)&v77.Flags.0 & 2) != 0 )
  {
    if ( v77.SurfaceCount )
    {
      v11 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
      *(_QWORD *)(v11 + 24) = 449LL;
      goto LABEL_7;
    }
    if ( !v77.bProducer )
    {
      v11 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
      *(_QWORD *)(v11 + 24) = 456LL;
      goto LABEL_7;
    }
  }
  else
  {
    SurfaceCount = v77.SurfaceCount;
    if ( v77.SurfaceCount > 0x32 )
    {
      v11 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
      *(_QWORD *)(v11 + 24) = SurfaceCount;
      goto LABEL_7;
    }
    if ( !v77.SurfaceCount )
    {
      v11 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
      *(_QWORD *)(v11 + 24) = 470LL;
      goto LABEL_7;
    }
  }
  v19 = 0LL;
  v79 = 0LL;
  v20 = v77.SurfaceCount;
  if ( v77.SurfaceCount )
  {
    v21 = 8LL * v77.SurfaceCount;
    if ( !is_mul_ok(v77.SurfaceCount, 8uLL) )
      v21 = -1LL;
    v19 = operator new[](v21, 0x4B677844u, PagedPool);
    v79 = v19;
    if ( !v19 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 482LL;
      WdLogEvent5_WdLowResource(v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v27);
      if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v71);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v77.pNtSurfaceHandles;
    v31 = &v77.pNtSurfaceHandles[v20];
    if ( v31 < v77.pNtSurfaceHandles || (unsigned __int64)v31 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, pNtSurfaceHandles, 8 * v20);
    v77.pNtSurfaceHandles = (HANDLE *)v19;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v70, v77.hDevice, Current, &v80);
  v35 = v80;
  if ( !v80 )
  {
    v36 = WdLogNewEntry5_WdError(v33, v32, v34);
    *(_QWORD *)(v36 + 24) = v77.hDevice;
    LODWORD(v37) = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
LABEL_36:
    if ( v70 )
    {
      v38 = -1LL;
      v39 = _InterlockedDecrement64((volatile signed __int64 *)v70 + 8);
      if ( !v39 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
    }
    goto LABEL_69;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v80);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, (__int64)v35, 2, v41, 0);
  LODWORD(v37) = COREDEVICEACCESS::AcquireShared((__int64)v84, 0xFFFFFFFF, 0LL);
  if ( (int)v37 < 0 )
  {
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    goto LABEL_36;
  }
  v42 = (DXGSWAPCHAIN *)operator new[](0xF0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v42 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v42);
  else
    v4 = 0LL;
  v75[2] = v4;
  if ( !v4 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v47);
    LODWORD(v37) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v37) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, *((struct ADAPTER_RENDER **)v35 + 2), &v77);
  if ( (int)v37 < 0 )
    goto LABEL_40;
  v48 = *((_QWORD *)v35 + 216);
  if ( v48 )
    *((_QWORD *)v4 + 25) = *(_QWORD *)(v48 + 276);
  LODWORD(v37) = DXGSWAPCHAIN::OpenSwapchainLocal(
                   v4,
                   v77.hDevice,
                   v35,
                   v77.BufferAvailableEvent,
                   v17 & 1,
                   v77.bProducer);
  if ( (int)v37 < 0 )
    goto LABEL_40;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
  if ( v75[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
  if ( v70 && _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v85, v4, v77.bProducer, 1);
  v49 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v85, &v82, 1);
  v37 = v49;
  if ( v49 >= 0 )
  {
    v54 = 0;
    if ( !v77.SurfaceCount )
    {
LABEL_63:
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v85);
      LOBYTE(v56) = 1;
      LOBYTE(v57) = 1;
      v58 = ObCreateObject(v57, g_pDxgkSharedSwapChainObjectType, v77.pObjectAttributes, v56, 0LL, 8, 248, 0, &Object);
      v37 = v58;
      if ( v58 < 0
        || (*(_QWORD *)Object = v4,
            v69 = 1,
            inserted = ObInsertObject(Object, 0LL, v77.DesiredAccess, 0, 0LL, &v76),
            v37 = inserted,
            inserted < 0) )
      {
        v61 = WdLogNewEntry5_WdError(v60, v59, v40);
        *(_QWORD *)(v61 + 24) = v37;
        WdLogEvent5_WdError(v61);
      }
      else
      {
        v38 = v83 + 48;
        v39 = MmUserProbeAddress;
        if ( v83 + 48 >= MmUserProbeAddress )
          v38 = MmUserProbeAddress;
        *(_QWORD *)v38 = v76;
      }
      goto LABEL_69;
    }
    v55 = v82;
    while ( 1 )
    {
      LODWORD(v37) = DXGSWAPCHAIN::AddSurface(
                       (const void **)v4,
                       *((DXGADAPTER ***)v55 + 2),
                       v77.bProducer,
                       v77.pNtSurfaceHandles[v54],
                       &v81);
      if ( (int)v37 < 0 )
        break;
      if ( ++v54 >= v77.SurfaceCount )
        goto LABEL_63;
    }
  }
  else
  {
    v53 = WdLogNewEntry5_WdError(v51, v50, v52);
    *(_QWORD *)(v53 + 24) = v37;
    WdLogEvent5_WdError(v53);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v85);
LABEL_69:
  if ( (int)v37 < 0 )
  {
    v39 = (__int64)v76;
    if ( v76 )
      ObCloseHandle(v76, 1);
    if ( v4 && !v69 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v19 )
    operator delete[](v19);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v68) = v77.SurfaceCount;
    LODWORD(v67) = v77.hDevice;
    LODWORD(Handle) = v77.bProducer;
    LODWORD(NewObject) = v37;
    McTemplateK0pqdqqpp(v39, v38, v40, v4, NewObject, Handle, v67, v68, v77.BufferAvailableEvent, v76);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v38);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v63, &EventProfilerExit, v64, v71);
  return (unsigned int)v37;
}
