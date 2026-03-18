/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x1C02548A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0pqqpqq @ 0x1C0041650 (McTemplateK0pqqpqq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C024F67C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C024F6E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C024F71C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0252510 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v3; // rdi
  BOOL bProducer; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  const GUID *v7; // r8
  HANDLE hNtSwapChain; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct _KTHREAD ***v18; // r15
  struct DXGSWAPCHAIN *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  PVOID *Object; // [rsp+20h] [rbp-D8h]
  __int64 v28; // [rsp+28h] [rbp-D0h]
  int v29; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A0h]
  char v31; // [rsp+60h] [rbp-98h]
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN Handle; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v33[96]; // [rsp+90h] [rbp-68h] BYREF
  PVOID v34; // [rsp+108h] [rbp+10h] BYREF

  v3 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)a1;
  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2202);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2202);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( !Handle.bProducer )
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 1021LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v6, &EventProfilerExit, v7, v29);
    }
    return 3221225485LL;
  }
  hNtSwapChain = Handle.hNtSwapChain;
  v10 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v34, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = hNtSwapChain;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v29);
    return (unsigned int)v14;
  }
  v18 = (struct _KTHREAD ***)v34;
  v19 = *(struct DXGSWAPCHAIN **)v34;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
    (DXGSWAPCHAINLOCKWITHDEVICE *)v33,
    *(struct DXGSWAPCHAIN **)v34,
    1,
    1);
  LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v33, (struct DXGDEVICE **)&v34, 1);
  if ( (int)v14 < 0 )
  {
LABEL_21:
    ObfDereferenceObject(v18);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v28) = bProducer;
      LODWORD(Object) = v14;
      McTemplateK0pqqpqq(
        v22,
        v21,
        v23,
        v19,
        Object,
        v28,
        Handle.hNtPresentSurfaceHandle,
        Handle.PresentBufferIdx,
        Handle.MetaDataSize);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v19 + 58) )
  {
    LODWORD(v14) = DXGSWAPCHAIN::UnOrderedPresent(*v18, &Handle);
    goto LABEL_21;
  }
  v24 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v24 + 24) = 1054LL;
  WdLogEvent5_WdError(v24);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v29);
  return 3221225659LL;
}
