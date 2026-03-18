/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C02528A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C024F67C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C024F6E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C024F71C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C024FB44 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  UINT *pDeferredFreeList; // r15
  UINT *v5; // rsi
  struct _D3DKMT_ACQUIRESWAPCHAIN *v6; // rax
  __int64 v7; // rax
  __int64 DeferredFreeListSize; // rdi
  __int64 v9; // rcx
  const GUID *v10; // r8
  SIZE_T v12; // rax
  UINT *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  HANDLE hNtSwapChain; // r14
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  struct _KTHREAD ***v25; // r14
  struct DXGSWAPCHAIN *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // rdx
  _QWORD *v31; // rdx
  __m128i v32; // xmm1
  _DWORD *v33; // rdx
  _DWORD *v34; // rdx
  UINT v35; // eax
  size_t v36; // r8
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // [rsp+30h] [rbp-108h] BYREF
  __int64 v40; // [rsp+38h] [rbp-100h]
  char v41; // [rsp+40h] [rbp-F8h]
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v43[152]; // [rsp+A0h] [rbp-98h] BYREF
  PVOID Object; // [rsp+148h] [rbp+10h] BYREF
  UINT *v45; // [rsp+150h] [rbp+18h]
  struct DXGDEVICE *v46; // [rsp+158h] [rbp+20h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2111);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2111);
  pDeferredFreeList = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v6 = (struct _D3DKMT_ACQUIRESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (struct _D3DKMT_ACQUIRESWAPCHAIN *)MmUserProbeAddress;
  Handle = *v6;
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v7 + 24) = 1103LL;
LABEL_15:
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v39);
    }
    return 3221225485LL;
  }
  DeferredFreeListSize = Handle.ReleaseInfo.DeferredFreeListSize;
  if ( Handle.ReleaseInfo.DeferredFreeListSize > 0x32 )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v7 + 24) = DeferredFreeListSize;
    goto LABEL_15;
  }
  if ( Handle.ReleaseInfo.DeferredFreeListSize )
  {
    pDeferredFreeList = Handle.ReleaseInfo.pDeferredFreeList;
    if ( !Handle.ReleaseInfo.pDeferredFreeList )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = 1118LL;
      goto LABEL_15;
    }
    v12 = 4LL * Handle.ReleaseInfo.DeferredFreeListSize;
    if ( !is_mul_ok(Handle.ReleaseInfo.DeferredFreeListSize, 4uLL) )
      v12 = -1LL;
    v13 = (UINT *)operator new[](v12, 0x4B677844u, PagedPool);
    v5 = v13;
    v45 = v13;
    if ( !v13 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v15 + 24) = 1125LL;
      WdLogEvent5_WdLowResource(v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v39);
      return 3221225495LL;
    }
    memset(v13, 0, 4 * DeferredFreeListSize);
    Handle.ReleaseInfo.pDeferredFreeList = v5;
  }
  hNtSwapChain = Handle.hNtSwapChain;
  v19 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    v25 = (struct _KTHREAD ***)Object;
    v26 = *(struct DXGSWAPCHAIN **)Object;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
      (DXGSWAPCHAINLOCKWITHDEVICE *)v43,
      *(struct DXGSWAPCHAIN **)Object,
      Handle.bProducer,
      1);
    LODWORD(v23) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v43, &v46, 1);
    if ( (int)v23 >= 0 )
    {
      if ( *((_DWORD *)v26 + 58) && Handle.bProducer )
      {
        v28 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v28 + 24) = 1198LL;
        WdLogEvent5_WdError(v28);
        LODWORD(v23) = -1073741637;
      }
      else
      {
        v29 = DXGSWAPCHAIN::AcquireBuffer(*v25, &Handle, 0LL);
        LODWORD(v23) = v29;
        if ( v29 >= 0 && v29 != 259 )
        {
          v30 = (_DWORD *)(a1 + 56);
          if ( a1 + 56 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = Handle.AcquiredBufferIdx;
          v31 = (_QWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v31 = (_QWORD *)MmUserProbeAddress;
          v32 = *(__m128i *)&Handle.OpenerAcquiredSurfaceHandle;
          *v31 = Handle.OpenerAcquiredSurfaceHandle;
          v33 = (_DWORD *)(a1 + 72);
          if ( a1 + 72 >= MmUserProbeAddress )
            v33 = (_DWORD *)MmUserProbeAddress;
          *v33 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8));
          v34 = (_DWORD *)(a1 + 40);
          if ( a1 + 40 >= MmUserProbeAddress )
            v34 = (_DWORD *)MmUserProbeAddress;
          v35 = Handle.ReleaseInfo.DeferredFreeListSize;
          *v34 = Handle.ReleaseInfo.DeferredFreeListSize;
          if ( v35 )
          {
            v36 = v35;
            if ( (unsigned __int64)&pDeferredFreeList[v36] > MmUserProbeAddress
              || &pDeferredFreeList[v36] <= pDeferredFreeList )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pDeferredFreeList, Handle.ReleaseInfo.pDeferredFreeList, v36 * 4);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = hNtSwapChain;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
    v25 = (struct _KTHREAD ***)Object;
  }
  if ( v25 )
    ObfDereferenceObject(v25);
  if ( v5 )
    operator delete[](v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v39);
  return (unsigned int)v23;
}
