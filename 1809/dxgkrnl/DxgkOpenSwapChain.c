/*
 * XREFs of DxgkOpenSwapChain @ 0x1C0253B80
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
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     McTemplateK0pqdqpp @ 0x1C004139C (McTemplateK0pqdqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0250F90 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02516D4 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  UINT *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v7; // rax
  struct _D3DKMT_OPENSWAPCHAIN *v8; // rax
  HANDLE *v9; // r15
  HANDLE *pNtSurfaceHandles; // r12
  _BOOL8 v11; // rcx
  __int64 v12; // rcx
  const GUID *v13; // r8
  SIZE_T v15; // rax
  HANDLE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  BOOL v39; // r13d
  _QWORD *v40; // rax
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  size_t SurfaceCount; // r8
  __int64 v44; // rcx
  const GUID *v45; // r8
  PVOID *Object; // [rsp+20h] [rbp-168h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-160h]
  __int64 v48; // [rsp+30h] [rbp-158h]
  int v49; // [rsp+50h] [rbp-138h] BYREF
  __int64 v50; // [rsp+58h] [rbp-130h]
  char v51; // [rsp+60h] [rbp-128h]
  _QWORD v52[3]; // [rsp+68h] [rbp-120h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+80h] [rbp-108h] BYREF
  HANDLE *v54; // [rsp+D0h] [rbp-B8h]
  struct DXGDEVICE *v55[3]; // [rsp+D8h] [rbp-B0h] BYREF
  _BYTE v56[152]; // [rsp+F0h] [rbp-98h] BYREF
  struct DXGDEVICE *v58; // [rsp+1A0h] [rbp+18h] BYREF
  PVOID v59; // [rsp+1A8h] [rbp+20h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2109);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 665LL;
LABEL_11:
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v49);
    }
    return -1073741811LL;
  }
  v8 = (struct _D3DKMT_OPENSWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (struct _D3DKMT_OPENSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v8;
  v9 = 0LL;
  v54 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v11 = Handle.SurfaceCount == 0;
  if ( v11 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v7 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v7 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v7 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_11;
  }
  if ( Handle.SurfaceCount )
  {
    v15 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v15 = -1LL;
    v16 = (HANDLE *)operator new[](v15, 0x4B677844u, PagedPool);
    v9 = v16;
    v54 = v16;
    if ( !v16 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 695LL;
      WdLogEvent5_WdLowResource(v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v49);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v16;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, Handle.hDevice, Current, v55);
  v22 = v55[0];
  if ( v55[0] )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52, v55[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v22, 2, v28, 0);
    LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56);
    if ( (int)v24 < 0 )
      goto LABEL_60;
    if ( !Handle.hNtSwapChain )
    {
      if ( Handle.pObjectAttributes )
      {
        LOBYTE(v29) = 1;
        v30 = ObOpenObjectByName(
                Handle.pObjectAttributes,
                g_pDxgkSharedSwapChainObjectType,
                v29,
                0LL,
                Handle.DesiredAccess,
                0LL,
                &Handle);
        v24 = v30;
        if ( v30 < 0 )
        {
          v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v34 + 24) = v24;
LABEL_31:
          WdLogEvent5_WdWarning(v34);
LABEL_60:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
          if ( v52[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
          goto LABEL_62;
        }
      }
    }
    LODWORD(v24) = ObReferenceObjectByHandle(
                     Handle.hNtSwapChain,
                     0x20000u,
                     g_pDxgkSharedSwapChainObjectType,
                     1,
                     &v59,
                     0LL);
    if ( (int)v24 < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v34 + 24) = Handle.hNtSwapChain;
      *(_QWORD *)(v34 + 32) = (int)v24;
      goto LABEL_31;
    }
    v4 = *(UINT **)v59;
    v55[1] = (struct DXGDEVICE *)v4;
    if ( v4[58] )
    {
      if ( Handle.SurfaceCount || Handle.pNtSurfaceHandles )
      {
        v38 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v38 + 24) = 758LL;
LABEL_42:
        WdLogEvent5_WdError(v38);
        LODWORD(v24) = -1073741811;
      }
    }
    else
    {
      if ( !Handle.pNtSurfaceHandles )
      {
        Handle.SurfaceCount = v4[13];
        LODWORD(v24) = -1073741789;
LABEL_46:
        v39 = v4[58] != 0;
        ObfDereferenceObject(v59);
        if ( (int)(v24 + 0x80000000) < 0 || (_DWORD)v24 == -1073741789 )
        {
          v40 = (_QWORD *)a1;
          if ( a1 >= MmUserProbeAddress )
            v40 = (_QWORD *)MmUserProbeAddress;
          *v40 = Handle.hNtSwapChain;
          v41 = (_DWORD *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v41 = (_DWORD *)MmUserProbeAddress;
          *v41 = Handle.SurfaceCount;
          v42 = (_DWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v42 = (_DWORD *)MmUserProbeAddress;
          *v42 = v39;
          if ( pNtSurfaceHandles && Handle.SurfaceCount )
          {
            SurfaceCount = Handle.SurfaceCount;
            if ( (unsigned __int64)&pNtSurfaceHandles[SurfaceCount] > MmUserProbeAddress
              || &pNtSurfaceHandles[SurfaceCount] <= pNtSurfaceHandles )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pNtSurfaceHandles, v9, SurfaceCount * 8);
          }
        }
        goto LABEL_60;
      }
      if ( Handle.SurfaceCount != v4[13] )
      {
        v38 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v38 + 24) = Handle.SurfaceCount;
        *(_QWORD *)(v38 + 32) = v4[13];
        goto LABEL_42;
      }
    }
    if ( (int)v24 >= 0 )
    {
      LODWORD(v24) = DXGSWAPCHAIN::OpenSwapchainLocal(
                       (DXGSWAPCHAIN *)v4,
                       Handle.hDevice,
                       v22,
                       Handle.BufferAvailableEvent,
                       Handle.bFailAcquireIfSurfaceBusy,
                       Handle.bProducer);
      if ( (int)v24 >= 0 )
      {
        v4[16] = Handle.DesiredAccessTextures;
        LODWORD(v24) = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener((DXGSWAPCHAIN *)v4, &Handle);
      }
    }
    goto LABEL_46;
  }
  v23 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v23 + 24) = Handle.hDevice;
  LODWORD(v24) = -1073741811;
  *(_QWORD *)(v23 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v23);
LABEL_62:
  if ( v58 )
  {
    v26 = _InterlockedDecrement64((volatile signed __int64 *)v58 + 8);
    if ( !v26 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
  }
  if ( v9 )
    operator delete[](v9);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v48) = Handle.hDevice;
    LODWORD(HandleInformation) = Handle.bProducer;
    LODWORD(Object) = v24;
    McTemplateK0pqdqpp(
      v26,
      v25,
      v27,
      v4,
      Object,
      HandleInformation,
      v48,
      Handle.BufferAvailableEvent,
      Handle.hNtSwapChain);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v49);
  return (unsigned int)v24;
}
