/*
 * XREFs of DxgkCreateSwapChain @ 0x1C0253130
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
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0040D64 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp @ 0x1C004145C (McTemplateK0pqdqqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C024F5B4 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C024F67C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C024F6E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C024F71C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0250AA0 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02516D4 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r13
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  _D3DKMT_CREATESWAPCHAIN *v8; // rax
  char v9; // r12
  __int64 SurfaceCount; // rdi
  __int64 v11; // rcx
  const GUID *v12; // r8
  PVOID v14; // r15
  __int64 v15; // rdi
  SIZE_T v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v22; // rcx
  __int64 v23; // rcx
  struct DXGDEVICE *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdi
  ULONG64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // r9
  DXGSWAPCHAIN *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r14d
  struct DXGDEVICE *v39; // r13
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  NTSTATUS inserted; // eax
  __int64 v46; // rcx
  const GUID *v47; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-1B8h]
  PHANDLE Handle; // [rsp+28h] [rbp-1B0h]
  __int64 v50; // [rsp+30h] [rbp-1A8h]
  __int64 v51; // [rsp+38h] [rbp-1A0h]
  __int64 v52; // [rsp+50h] [rbp-188h] BYREF
  __int64 v53; // [rsp+58h] [rbp-180h]
  char v54; // [rsp+60h] [rbp-178h]
  _QWORD v55[3]; // [rsp+68h] [rbp-170h] BYREF
  HANDLE v56; // [rsp+80h] [rbp-158h] BYREF
  _D3DKMT_CREATESWAPCHAIN v57; // [rsp+88h] [rbp-150h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-118h] BYREF
  void *v59; // [rsp+C8h] [rbp-110h]
  struct DXGDEVICE *v60; // [rsp+D0h] [rbp-108h] BYREF
  struct DXGDEVICE *v61; // [rsp+D8h] [rbp-100h] BYREF
  _BYTE v62[96]; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE v63[152]; // [rsp+140h] [rbp-98h] BYREF
  char v65; // [rsp+1E8h] [rbp+10h]
  unsigned int v66; // [rsp+1F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v67; // [rsp+1F8h] [rbp+20h] BYREF

  v3 = a1;
  LODWORD(v52) = -1;
  v53 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v54 = 1;
    LODWORD(v52) = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2108);
  v4 = 0LL;
  v65 = 0;
  Object = 0LL;
  v56 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 426LL;
LABEL_18:
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v52);
    }
    return -1073741811LL;
  }
  v8 = (_D3DKMT_CREATESWAPCHAIN *)v3;
  if ( v3 >= MmUserProbeAddress )
    v8 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v57 = *v8;
  v9 = (char)v57.Flags.0;
  if ( (*(_BYTE *)&v57.Flags.0 & 2) != 0 )
  {
    if ( v57.SurfaceCount )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = 449LL;
      goto LABEL_18;
    }
    if ( !v57.bProducer )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = 456LL;
      goto LABEL_18;
    }
  }
  else
  {
    SurfaceCount = v57.SurfaceCount;
    if ( v57.SurfaceCount > 0x32 )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = SurfaceCount;
      goto LABEL_18;
    }
    if ( !v57.SurfaceCount )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = 470LL;
      goto LABEL_18;
    }
  }
  v14 = 0LL;
  v59 = 0LL;
  v15 = v57.SurfaceCount;
  if ( v57.SurfaceCount )
  {
    v16 = 8LL * v57.SurfaceCount;
    if ( !is_mul_ok(v57.SurfaceCount, 8uLL) )
      v16 = -1LL;
    v14 = operator new[](v16, 0x4B677844u, PagedPool);
    v59 = v14;
    if ( !v14 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 482LL;
      WdLogEvent5_WdLowResource(v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v52);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v57.pNtSurfaceHandles;
    v22 = &v57.pNtSurfaceHandles[v15];
    if ( v22 < v57.pNtSurfaceHandles || (unsigned __int64)v22 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, pNtSurfaceHandles, 8 * v15);
    v57.pNtSurfaceHandles = (HANDLE *)v14;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v67, v57.hDevice, Current, &v60);
  v24 = v60;
  if ( !v60 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = v57.hDevice;
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_36:
    if ( v67 )
    {
      v27 = -1LL;
      v28 = _InterlockedDecrement64((volatile signed __int64 *)v67 + 8);
      if ( !v28 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    }
    goto LABEL_71;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v60);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v24, 2, v30, 0);
  LODWORD(v26) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62);
  if ( (int)v26 < 0 )
    goto LABEL_40;
  v31 = (DXGSWAPCHAIN *)operator new(0xF0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v31 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v31);
  else
    v4 = 0LL;
  v55[2] = v4;
  if ( !v4 )
  {
    v33 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v33 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v33);
    LODWORD(v26) = -1073741801;
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
LABEL_41:
    if ( v55[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    goto LABEL_36;
  }
  LODWORD(v26) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, *((struct ADAPTER_RENDER **)v24 + 2), &v57);
  if ( (int)v26 < 0 )
    goto LABEL_40;
  v34 = *((_QWORD *)v24 + 216);
  if ( v34 )
    *((_QWORD *)v4 + 25) = *(_QWORD *)(v34 + 276);
  LODWORD(v26) = DXGSWAPCHAIN::OpenSwapchainLocal(v4, v57.hDevice, v24, v57.BufferAvailableEvent, v9 & 1, v57.bProducer);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  if ( (int)v26 < 0 )
    goto LABEL_41;
  if ( v55[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v63, v4, v57.bProducer, 1);
  v35 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v63, &v61, 1);
  v26 = v35;
  if ( v35 >= 0 )
  {
    v38 = 0;
    if ( !v57.SurfaceCount )
    {
LABEL_65:
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v63);
      LOBYTE(v40) = 1;
      LOBYTE(v41) = 1;
      v42 = ObCreateObject(v41, g_pDxgkSharedSwapChainObjectType, v57.pObjectAttributes, v40, 0LL, 8, 248, 0, &Object);
      v26 = v42;
      if ( v42 < 0
        || (*(_QWORD *)Object = v4,
            v65 = 1,
            inserted = ObInsertObject(Object, 0LL, v57.DesiredAccess, 0, 0LL, &v56),
            v26 = inserted,
            inserted < 0) )
      {
        v44 = WdLogNewEntry5_WdError(v43);
        *(_QWORD *)(v44 + 24) = v26;
        WdLogEvent5_WdError(v44);
      }
      else
      {
        v27 = v3 + 48;
        v28 = MmUserProbeAddress;
        if ( v3 + 48 >= MmUserProbeAddress )
          v27 = MmUserProbeAddress;
        *(_QWORD *)v27 = v56;
      }
      goto LABEL_71;
    }
    v39 = v61;
    while ( 1 )
    {
      LODWORD(v26) = DXGSWAPCHAIN::AddSurface(
                       (const void **)v4,
                       *((DXGADAPTER ***)v39 + 2),
                       v57.bProducer,
                       v57.pNtSurfaceHandles[v38],
                       &v66);
      if ( (int)v26 < 0 )
        break;
      if ( ++v38 >= v57.SurfaceCount )
      {
        v3 = a1;
        goto LABEL_65;
      }
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v37 + 24) = v26;
    WdLogEvent5_WdError(v37);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v63);
LABEL_71:
  if ( (int)v26 < 0 )
  {
    v28 = (__int64)v56;
    if ( v56 )
      ObCloseHandle(v56, 1);
    if ( v4 && !v65 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v14 )
    operator delete[](v14);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v51) = v57.SurfaceCount;
    LODWORD(v50) = v57.hDevice;
    LODWORD(Handle) = v57.bProducer;
    LODWORD(NewObject) = v26;
    McTemplateK0pqdqqpp(v28, v27, v29, v4, NewObject, Handle, v50, v51, v57.BufferAvailableEvent, v56, v52, v53);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v46, &EventProfilerExit, v47, v52);
  return (unsigned int)v26;
}
