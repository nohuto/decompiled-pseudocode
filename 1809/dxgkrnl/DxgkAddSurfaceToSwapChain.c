/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x1C0252D90
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
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  const GUID *v7; // r8
  HANDLE v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  const void ***v18; // r15
  struct DXGSWAPCHAIN *v19; // rsi
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rcx
  const GUID *v26; // r8
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h]
  char v31; // [rsp+50h] [rbp-B8h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-B0h]
  void *v33[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v34[136]; // [rsp+80h] [rbp-88h] BYREF
  PVOID v35; // [rsp+118h] [rbp+10h] BYREF
  struct DXGDEVICE *v36; // [rsp+120h] [rbp+18h] BYREF
  struct DXGSWAPCHAIN *v37; // [rsp+128h] [rbp+20h]

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
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2200);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  *(_OWORD *)v33 = v4[1];
  if ( !LODWORD(Handle[1]) )
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 862LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v6, &EventProfilerExit, v7, v29);
    }
    return 3221225485LL;
  }
  v9 = Handle[0];
  v10 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v35, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v9;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdWarning(v15);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v29);
    return (unsigned int)v14;
  }
  v18 = (const void ***)v35;
  v19 = *(struct DXGSWAPCHAIN **)v35;
  v37 = v19;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34, v19, 1, 1);
  LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v34, &v36, 1);
  if ( (int)v14 < 0 )
  {
LABEL_28:
    ObfDereferenceObject(v18);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v28) = Handle[1];
      LODWORD(Object) = v14;
      McTemplateK0pqqpq(
        v25,
        &EventIndirectSwapChainAddSurface,
        v26,
        v19,
        Object,
        v28,
        v33[0],
        LODWORD(v33[1]),
        v29,
        v30);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v19 + 58) )
  {
    LODWORD(v14) = DXGSWAPCHAIN::AddSurface(
                     *v18,
                     *((DXGADAPTER ***)v36 + 2),
                     (int)Handle[1],
                     v33[0],
                     (unsigned int *)&v33[1]);
    if ( (int)v14 >= 0 )
    {
      v21 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v33[1];
    }
    goto LABEL_28;
  }
  v22 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v22 + 24) = 908LL;
  WdLogEvent5_WdError(v22);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v29);
  return 3221225659LL;
}
