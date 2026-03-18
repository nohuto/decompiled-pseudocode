/*
 * XREFs of DxgkOpenSwapChain @ 0x1C0289FB0
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
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqdqpp @ 0x1C0048340 (McTemplateK0pqdqpp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0287080 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02877C4 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  UINT *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  struct _D3DKMT_OPENSWAPCHAIN *v16; // rax
  HANDLE *v17; // r15
  HANDLE *pNtSurfaceHandles; // r12
  _BOOL8 v19; // rcx
  SIZE_T v20; // rax
  HANDLE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r13
  __int64 v50; // rax
  BOOL v51; // r13d
  ULONG64 v52; // r8
  _QWORD *v53; // rax
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  size_t SurfaceCount; // r8
  __int64 v57; // rcx
  const GUID *v58; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  __int64 v61; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v62[2]; // [rsp+50h] [rbp-198h] BYREF
  int v63; // [rsp+60h] [rbp-188h] BYREF
  __int64 v64; // [rsp+68h] [rbp-180h]
  char v65; // [rsp+70h] [rbp-178h]
  _QWORD v66[3]; // [rsp+78h] [rbp-170h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+90h] [rbp-158h] BYREF
  struct DXGDEVICE *v68; // [rsp+E0h] [rbp-108h] BYREF
  PVOID v69; // [rsp+E8h] [rbp-100h] BYREF
  HANDLE *v70; // [rsp+F0h] [rbp-F8h]
  BOOL v71; // [rsp+F8h] [rbp-F0h]
  ULONG64 v72; // [rsp+100h] [rbp-E8h]
  ULONG64 v73; // [rsp+108h] [rbp-E0h]
  _BYTE v74[160]; // [rsp+110h] [rbp-D8h] BYREF

  v72 = a1;
  v73 = a1;
  v63 = -1;
  v64 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v65 = 1;
    v63 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v63, 2109LL);
  v4 = 0LL;
  memset(&Handle, 0, sizeof(Handle));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = 665LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v12);
    if ( v65 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v63);
    }
    return -1073741811LL;
  }
  v16 = (struct _D3DKMT_OPENSWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (struct _D3DKMT_OPENSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v16;
  v17 = 0LL;
  v70 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v19 = Handle.SurfaceCount == 0;
  if ( v19 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v11 = WdLogNewEntry5_WdError(v19, Handle.SurfaceCount, v9);
    *(_QWORD *)(v11 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v11 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_7;
  }
  if ( Handle.SurfaceCount )
  {
    v20 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v20 = -1LL;
    v21 = (HANDLE *)operator new[](v20, 0x4B677844u, PagedPool);
    v17 = v21;
    v70 = v21;
    if ( !v21 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 695LL;
      WdLogEvent5_WdLowResource(v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v27);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v63);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v21;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62, Handle.hDevice, Current, &v68);
  v33 = (__int64)v68;
  if ( v68 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66, v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v33, 2, v38, 0);
    LODWORD(v33) = COREDEVICEACCESS::AcquireShared((__int64)v74, 0xFFFFFFFF, 0LL);
    if ( (int)v33 < 0 )
      goto LABEL_60;
    if ( !Handle.hNtSwapChain )
    {
      if ( Handle.pObjectAttributes )
      {
        LOBYTE(v39) = 1;
        v40 = ObOpenObjectByName(
                Handle.pObjectAttributes,
                g_pDxgkSharedSwapChainObjectType,
                v39,
                0LL,
                Handle.DesiredAccess,
                0LL,
                &Handle);
        v33 = v40;
        if ( v40 < 0 )
        {
          v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
          *(_QWORD *)(v44 + 24) = v33;
LABEL_31:
          WdLogEvent5_WdWarning(v44);
LABEL_60:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          if ( v66[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
          goto LABEL_62;
        }
      }
    }
    v45 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v69, 0LL);
    v49 = v45;
    LODWORD(v33) = v45;
    if ( v45 < 0 )
    {
      v44 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v44 + 24) = Handle.hNtSwapChain;
      *(_QWORD *)(v44 + 32) = v49;
      goto LABEL_31;
    }
    v4 = *(UINT **)v69;
    v62[1] = (struct DXGDEVICE *)v4;
    if ( v4[58] )
    {
      if ( Handle.SurfaceCount || Handle.pNtSurfaceHandles )
      {
        v50 = WdLogNewEntry5_WdError(v47, v46, v48);
        *(_QWORD *)(v50 + 24) = 758LL;
LABEL_42:
        WdLogEvent5_WdError(v50);
        LODWORD(v33) = -1073741811;
      }
    }
    else
    {
      if ( !Handle.pNtSurfaceHandles )
      {
        Handle.SurfaceCount = v4[13];
        LODWORD(v33) = -1073741789;
LABEL_46:
        v51 = v4[58] != 0;
        v71 = v51;
        ObfDereferenceObject(v69);
        if ( (int)(v33 + 0x80000000) < 0 || (_DWORD)v33 == -1073741789 )
        {
          v52 = v72;
          v53 = (_QWORD *)v72;
          if ( v72 >= MmUserProbeAddress )
            v53 = (_QWORD *)MmUserProbeAddress;
          *v53 = Handle.hNtSwapChain;
          v54 = (_DWORD *)(v52 + 48);
          if ( v52 + 48 >= MmUserProbeAddress )
            v54 = (_DWORD *)MmUserProbeAddress;
          *v54 = Handle.SurfaceCount;
          v55 = (_DWORD *)(v52 + 64);
          if ( v52 + 64 >= MmUserProbeAddress )
            v55 = (_DWORD *)MmUserProbeAddress;
          *v55 = v51;
          if ( pNtSurfaceHandles && Handle.SurfaceCount )
          {
            SurfaceCount = Handle.SurfaceCount;
            if ( (unsigned __int64)&pNtSurfaceHandles[SurfaceCount] > MmUserProbeAddress
              || &pNtSurfaceHandles[SurfaceCount] <= pNtSurfaceHandles )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pNtSurfaceHandles, v17, SurfaceCount * 8);
          }
        }
        goto LABEL_60;
      }
      if ( Handle.SurfaceCount != v4[13] )
      {
        v50 = WdLogNewEntry5_WdError(v47, v46, v48);
        *(_QWORD *)(v50 + 24) = Handle.SurfaceCount;
        *(_QWORD *)(v50 + 32) = v4[13];
        goto LABEL_42;
      }
    }
    if ( (int)v33 >= 0 )
    {
      LODWORD(v33) = DXGSWAPCHAIN::OpenSwapchainLocal(
                       (DXGSWAPCHAIN *)v4,
                       Handle.hDevice,
                       v68,
                       Handle.BufferAvailableEvent,
                       Handle.bFailAcquireIfSurfaceBusy,
                       Handle.bProducer);
      if ( (int)v33 >= 0 )
      {
        v4[16] = Handle.DesiredAccessTextures;
        LODWORD(v33) = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener((DXGSWAPCHAIN *)v4, &Handle);
      }
    }
    goto LABEL_46;
  }
  v34 = WdLogNewEntry5_WdError(v31, v30, v32);
  *(_QWORD *)(v34 + 24) = Handle.hDevice;
  LODWORD(v33) = -1073741811;
  *(_QWORD *)(v34 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v34);
LABEL_62:
  if ( v62[0] )
  {
    v36 = _InterlockedDecrement64((volatile signed __int64 *)v62[0] + 8);
    if ( !v36 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62[0] + 2), v62[0]);
  }
  if ( v17 )
    operator delete[](v17);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v61) = Handle.hDevice;
    LODWORD(HandleInformation) = Handle.bProducer;
    LODWORD(Object) = v33;
    McTemplateK0pqdqpp(
      v36,
      v35,
      v37,
      v4,
      Object,
      HandleInformation,
      v61,
      Handle.BufferAvailableEvent,
      Handle.hNtSwapChain);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v35);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v63);
  return (unsigned int)v33;
}
