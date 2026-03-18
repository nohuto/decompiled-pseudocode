/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x1C0254600
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0pqqpq @ 0x1C00415A8 (McTemplateK0pqqpq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C024F67C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C024F6E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C024F71C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C0251DE4 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *v3; // rbx
  BOOL bProducer; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  const GUID *v7; // r8
  HANDLE hNtSwapChain; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct _KTHREAD ***v18; // rsi
  struct DXGSWAPCHAIN *v19; // r14
  __int64 v20; // rcx
  const GUID *v21; // r8
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  __int64 v23; // [rsp+28h] [rbp-C0h]
  __int64 v24; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A0h]
  char v26; // [rsp+50h] [rbp-98h]
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v28[96]; // [rsp+80h] [rbp-68h] BYREF
  PVOID v29; // [rsp+F8h] [rbp+10h] BYREF

  v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)a1;
  LODWORD(v24) = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    LODWORD(v24) = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2200);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( Handle.bProducer )
  {
    hNtSwapChain = Handle.hNtSwapChain;
    v10 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v29, 0LL);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v18 = (struct _KTHREAD ***)v29;
      v19 = *(struct DXGSWAPCHAIN **)v29;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)v28,
        *(struct DXGSWAPCHAIN **)v29,
        1,
        1);
      LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)v28,
                       (struct DXGDEVICE **)&v29,
                       1);
      if ( (int)v14 >= 0 )
        LODWORD(v14) = DXGSWAPCHAIN::RemoveSurface(*v18, &Handle);
      ObfDereferenceObject(v18);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v23) = bProducer;
        LODWORD(Object) = v14;
        McTemplateK0pqqpq(
          v20,
          &EventIndirectSwapChainRemoveSurface,
          v21,
          v19,
          Object,
          v23,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx,
          v24,
          v25);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v28);
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = hNtSwapChain;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v24);
    return (unsigned int)v14;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 952LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v6, &EventProfilerExit, v7, v24);
    }
    return 3221225485LL;
  }
}
