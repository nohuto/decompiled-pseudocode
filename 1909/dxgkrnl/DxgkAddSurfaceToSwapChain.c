/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x1C0289150
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0pqqpq @ 0x1C004854C (McTemplateK0pqqpq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02856C4 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C0285738 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C028576C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0285DDC (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(struct DXGDEVICE *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _OWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  HANDLE v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  const void ***v22; // r15
  struct DXGDEVICE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rcx
  const GUID *v33; // r8
  PVOID *Object; // [rsp+20h] [rbp-118h]
  __int64 v35; // [rsp+28h] [rbp-110h]
  __int64 v36; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-F0h]
  char v38; // [rsp+50h] [rbp-E8h]
  PVOID v39; // [rsp+58h] [rbp-E0h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-D8h]
  void *v41[2]; // [rsp+70h] [rbp-C8h] BYREF
  struct DXGDEVICE *v42[4]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v43[128]; // [rsp+A0h] [rbp-98h] BYREF

  v42[1] = a1;
  LODWORD(v36) = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    LODWORD(v36) = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2200LL);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v6;
  *(_OWORD *)v41 = v6[1];
  if ( !LODWORD(Handle[1]) )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v7 + 24) = 862LL;
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v8);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v36);
    }
    return 3221225485LL;
  }
  v12 = Handle[0];
  v13 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v39, 0LL);
  v17 = v13;
  if ( v13 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdWarning(v18);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v19);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v36);
    return (unsigned int)v17;
  }
  v22 = (const void ***)v39;
  v23 = *(struct DXGDEVICE **)v39;
  v42[2] = v23;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43, v23, 1, 1);
  LODWORD(v17) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v43, v42, 1);
  if ( (int)v17 < 0 )
  {
LABEL_28:
    ObfDereferenceObject(v22);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
    {
      LODWORD(v35) = Handle[1];
      LODWORD(Object) = v17;
      McTemplateK0pqqpq(
        v32,
        &EventIndirectSwapChainAddSurface,
        v33,
        v23,
        Object,
        v35,
        v41[0],
        LODWORD(v41[1]),
        v36,
        v37);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v23 + 58) )
  {
    LODWORD(v17) = DXGSWAPCHAIN::AddSurface(
                     *v22,
                     *((DXGADAPTER ***)v42[0] + 2),
                     (int)Handle[1],
                     v41[0],
                     (unsigned int *)&v41[1]);
    if ( (int)v17 >= 0 )
    {
      v27 = (_DWORD *)((char *)a1 + 24);
      if ( (unsigned __int64)a1 + 24 >= MmUserProbeAddress )
        v27 = (_DWORD *)MmUserProbeAddress;
      *v27 = v41[1];
    }
    goto LABEL_28;
  }
  v28 = WdLogNewEntry5_WdError(v25, v24, v26);
  *(_QWORD *)(v28 + 24) = 908LL;
  WdLogEvent5_WdError(v28);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v29);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v36);
  return 3221225659LL;
}
