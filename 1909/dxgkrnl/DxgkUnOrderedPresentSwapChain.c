/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x1C028ADA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0pqqpqq @ 0x1C00485F4 (McTemplateK0pqqpqq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02856C4 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C0285738 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C028576C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0288794 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  HANDLE v12; // r14
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct _KTHREAD ***v22; // r15
  struct DXGSWAPCHAIN *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  PVOID *Object; // [rsp+20h] [rbp-128h]
  __int64 v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-F0h]
  char v38; // [rsp+60h] [rbp-E8h]
  PVOID v39; // [rsp+68h] [rbp-E0h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v41; // [rsp+80h] [rbp-C8h]
  __int128 v42; // [rsp+90h] [rbp-B8h]
  __int64 v43; // [rsp+A0h] [rbp-A8h]
  _BYTE v44[128]; // [rsp+B0h] [rbp-98h] BYREF

  v3 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2202);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2202LL);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v3;
  v41 = *(_OWORD *)(v3 + 16);
  v42 = *(_OWORD *)(v3 + 32);
  v43 = *(_QWORD *)(v3 + 48);
  v6 = (int)Handle[1];
  if ( !LODWORD(Handle[1]) )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v7 + 24) = 1021LL;
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
  v22 = (struct _KTHREAD ***)v39;
  v23 = *(struct DXGSWAPCHAIN **)v39;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
    (DXGSWAPCHAINLOCKWITHDEVICE *)v44,
    *(struct DXGSWAPCHAIN **)v39,
    1,
    1);
  LODWORD(v17) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v44, (struct DXGDEVICE **)&v39, 1);
  if ( (int)v17 < 0 )
  {
LABEL_21:
    ObfDereferenceObject(v22);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
    {
      LODWORD(v35) = v6;
      LODWORD(Object) = v17;
      McTemplateK0pqqpqq(v28, v27, v29, v23, Object, v35, (_QWORD)v42, DWORD2(v42), HIDWORD(v42));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v44);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v23 + 58) )
  {
    LODWORD(v17) = DXGSWAPCHAIN::UnOrderedPresent(*v22, (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)Handle, v26);
    goto LABEL_21;
  }
  v30 = WdLogNewEntry5_WdError(v25, v24, v26);
  *(_QWORD *)(v30 + 24) = 1054LL;
  WdLogEvent5_WdError(v30);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v31);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v36);
  return 3221225659LL;
}
