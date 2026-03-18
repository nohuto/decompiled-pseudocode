/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C02887C0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0285304 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C0285378 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02857EC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // r15
  void *v7; // rsi
  ULONG64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 OpenerAcquiredSurfaceHandle_low; // rdi
  SIZE_T v15; // rax
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  HANDLE hNtSwapChain; // r14
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _KTHREAD ***v33; // r14
  struct DXGSWAPCHAIN *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  _DWORD *v40; // rdx
  _QWORD *v41; // rdx
  _DWORD *v42; // rdx
  _DWORD *v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rdx
  _QWORD *v46; // rdx
  size_t v47; // r8
  __int64 v48; // rcx
  const GUID *v49; // r8
  int v50; // [rsp+30h] [rbp-158h] BYREF
  __int64 v51; // [rsp+38h] [rbp-150h]
  char v52; // [rsp+40h] [rbp-148h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  PVOID v54; // [rsp+50h] [rbp-138h]
  ULONG64 v55; // [rsp+58h] [rbp-130h]
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+60h] [rbp-128h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-D8h]
  __int64 v58; // [rsp+C0h] [rbp-C8h]
  struct DXGDEVICE *v59; // [rsp+D0h] [rbp-B8h] BYREF
  _BYTE v60[128]; // [rsp+E0h] [rbp-A8h] BYREF

  v55 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2111);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2111LL);
  v6 = 0LL;
  v7 = 0LL;
  v54 = 0LL;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  Handle = *(struct _D3DKMT_ACQUIRESWAPCHAIN *)v8;
  v57 = *(_OWORD *)(v8 + 80);
  v58 = *(_QWORD *)(v8 + 96);
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v9 + 24) = 1103LL;
LABEL_10:
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v10);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v50);
    }
    return 3221225485LL;
  }
  OpenerAcquiredSurfaceHandle_low = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) > 0x32 )
  {
    v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v9 + 24) = OpenerAcquiredSurfaceHandle_low;
    goto LABEL_10;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) )
  {
    v6 = *(char **)&Handle.AcquireMetadataSize;
    if ( !*(_QWORD *)&Handle.AcquireMetadataSize )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
      *(_QWORD *)(v9 + 24) = 1118LL;
      goto LABEL_10;
    }
    v15 = 4LL * LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    if ( !is_mul_ok(LODWORD(Handle.OpenerAcquiredSurfaceHandle), 4uLL) )
      v15 = -1LL;
    v16 = operator new[](v15, 0x4B677844u, PagedPool);
    v7 = v16;
    v54 = v16;
    if ( !v16 )
    {
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 1125LL;
      WdLogEvent5_WdLowResource(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v22);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v50);
      return 3221225495LL;
    }
    memset(v16, 0, 4 * OpenerAcquiredSurfaceHandle_low);
    *(_QWORD *)&Handle.AcquireMetadataSize = v7;
  }
  hNtSwapChain = Handle.hNtSwapChain;
  v26 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v30 = v26;
  if ( v26 >= 0 )
  {
    v33 = (struct _KTHREAD ***)Object;
    v34 = *(struct DXGSWAPCHAIN **)Object;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
      (DXGSWAPCHAINLOCKWITHDEVICE *)v60,
      *(struct DXGSWAPCHAIN **)Object,
      Handle.bProducer,
      1);
    LODWORD(v30) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v60, &v59, 1);
    if ( (int)v30 >= 0 )
    {
      if ( *((_DWORD *)v34 + 58) && Handle.bProducer )
      {
        v38 = WdLogNewEntry5_WdError(v36, v35, v37);
        *(_QWORD *)(v38 + 24) = 1208LL;
        WdLogEvent5_WdError(v38);
        LODWORD(v30) = -1073741637;
      }
      else
      {
        v39 = DXGSWAPCHAIN::AcquireBuffer(*v33, &Handle, 0LL);
        LODWORD(v30) = v39;
        if ( v39 >= 0 && v39 != 259 )
        {
          v40 = (_DWORD *)(a1 + 80);
          if ( a1 + 80 >= MmUserProbeAddress )
            v40 = (_DWORD *)MmUserProbeAddress;
          *v40 = v57;
          v41 = (_QWORD *)(a1 + 88);
          if ( a1 + 88 >= MmUserProbeAddress )
            v41 = (_QWORD *)MmUserProbeAddress;
          *v41 = *((_QWORD *)&v57 + 1);
          v42 = (_DWORD *)(a1 + 96);
          if ( a1 + 96 >= MmUserProbeAddress )
            v42 = (_DWORD *)MmUserProbeAddress;
          *v42 = v58;
          v43 = (_DWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v43 = (_DWORD *)MmUserProbeAddress;
          v44 = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
          *v43 = Handle.OpenerAcquiredSurfaceHandle;
          if ( Handle.ReleaseInfo.pMetaData )
          {
            v45 = (_QWORD *)(a1 + 32);
            if ( a1 + 32 >= MmUserProbeAddress )
              v45 = (_QWORD *)MmUserProbeAddress;
            *v45 = Handle.ReleaseInfo.pMetaData;
            v46 = (_QWORD *)(a1 + 40);
            if ( a1 + 40 >= MmUserProbeAddress )
              v46 = (_QWORD *)MmUserProbeAddress;
            *v46 = *(_QWORD *)&Handle.ReleaseInfo.DeferredFreeListSize;
          }
          if ( (_DWORD)v44 )
          {
            v47 = 4 * v44;
            if ( (unsigned __int64)&v6[v47] > MmUserProbeAddress || &v6[v47] <= v6 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v6, *(const void **)&Handle.AcquireMetadataSize, v47);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v60);
  }
  else
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v31 + 24) = hNtSwapChain;
    *(_QWORD *)(v31 + 32) = v30;
    WdLogEvent5_WdWarning(v31);
    v33 = (struct _KTHREAD ***)Object;
  }
  if ( v33 )
    ObfDereferenceObject(v33);
  if ( v7 )
    operator delete[](v7);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v32);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, v50);
  return (unsigned int)v30;
}
