/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x1C028A6E0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     McTemplateK0pqqpq @ 0x1C00484A4 (McTemplateK0pqqpq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0285304 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C0285378 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C0287D08 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  BOOL bProducer; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  HANDLE hNtSwapChain; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct _KTHREAD ***v22; // rsi
  struct DXGSWAPCHAIN *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rcx
  const GUID *v26; // r8
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  __int64 v28; // [rsp+28h] [rbp-F0h]
  __int64 v29; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-D0h]
  char v31; // [rsp+50h] [rbp-C8h]
  PVOID v32; // [rsp+58h] [rbp-C0h] BYREF
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v34[128]; // [rsp+80h] [rbp-98h] BYREF

  v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)a1;
  LODWORD(v29) = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    LODWORD(v29) = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2200LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( Handle.bProducer )
  {
    hNtSwapChain = Handle.hNtSwapChain;
    v13 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v32, 0LL);
    v17 = v13;
    if ( v13 >= 0 )
    {
      v22 = (struct _KTHREAD ***)v32;
      v23 = *(struct DXGSWAPCHAIN **)v32;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)v34,
        *(struct DXGSWAPCHAIN **)v32,
        1,
        1);
      LODWORD(v17) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)v34,
                       (struct DXGDEVICE **)&v32,
                       1);
      if ( (int)v17 >= 0 )
        LODWORD(v17) = DXGSWAPCHAIN::RemoveSurface(*v22, &Handle, v24);
      ObfDereferenceObject(v22);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
      {
        LODWORD(v28) = bProducer;
        LODWORD(Object) = v17;
        McTemplateK0pqqpq(
          v25,
          &EventIndirectSwapChainRemoveSurface,
          v26,
          v23,
          Object,
          v28,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx,
          v29,
          v30);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = hNtSwapChain;
      *(_QWORD *)(v18 + 32) = v17;
      WdLogEvent5_WdWarning(v18);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v19);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v29);
    return (unsigned int)v17;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v7 + 24) = 952LL;
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v8);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v29);
    }
    return 3221225485LL;
  }
}
