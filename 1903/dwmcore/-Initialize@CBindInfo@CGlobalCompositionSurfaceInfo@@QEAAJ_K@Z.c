/*
 * XREFs of ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18003D430
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18003CD3C (-EnsureRealization@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRea.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800214C0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x18003D588 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x18003D624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18003DE6C (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18025CCE4 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x1802652D4 (-Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  _DWORD *v9; // rax
  __int64 v10; // r8
  char *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  char *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  struct CCompositionSwapchainStatistics *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  struct CCompositionSwapchainStatistics *v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v26[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[120]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[752]; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE hObject; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int16 v30[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  void *retaddr; // [rsp+478h] [rbp+378h]

  v25 = a2;
  v3 = 0;
  memset_0(v26, 0, 0x410uLL);
  if ( *((_QWORD *)this + 1) )
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v25, v26);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802D5140, 3u, v4 | 0x10000000, 0x381u, 0LL);
    goto LABEL_12;
  }
  v6 = v26[0];
  *((_QWORD *)this + 1) = v25;
  *((_DWORD *)this + 4) = v6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802D5140, 3u, -2147024809, 0x3BFu, 0LL);
          goto LABEL_17;
        }
        v16 = (char *)hObject;
        v24 = 0LL;
        v17 = CCompositionSwapchainStatistics::Create(hObject, &v24);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802D5140, 3u, v17, 0x3ACu, 0LL);
        }
        else
        {
          v19 = v24;
          v20 = *((_QWORD *)this + 18);
          v24 = 0LL;
          *((_QWORD *)this + 18) = ((unsigned __int64)v19 + 16) & -(__int64)(v19 != 0LL);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v21 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                  this,
                  (const struct CSM_BUFFER_ATTRIBUTES *)v27,
                  (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v28);
          v3 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802D5140, 3u, v21, 0x3B0u, 0LL);
          else
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v30);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
LABEL_12:
        if ( (v3 & 0x80000000) == 0 )
          return v3;
LABEL_17:
        *((_QWORD *)this + 1) = 0LL;
        *((_DWORD *)this + 4) = 0;
        return v3;
      }
      v9 = DefaultHeap::AllocClear(0x20uLL);
      if ( !v9 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v10);
      v9[2] = 0;
      *(_QWORD *)v9 = &CFlipExSwapchainStatistics::`vftable'{for `CMILCOMBase'};
      v11 = (char *)(v9 + 4);
      *((_QWORD *)v9 + 3) = 2LL;
      *((_QWORD *)v9 + 2) = &CFlipExSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
      CHolographicClient::AddRef((CHolographicClient *)v9);
      v12 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v27,
              (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v28);
      v3 = v13;
      if ( v13 >= 0 )
      {
        CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v30);
        goto LABEL_12;
      }
      v23 = 923;
    }
    else
    {
      v13 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v27,
              (const struct CSM_SINGLE_BUFFER_INFO *)v28);
      v3 = v13;
      if ( v13 >= 0 )
        return v3;
      v23 = 910;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802D5140, 3u, v13, v23, 0LL);
    goto LABEL_12;
  }
  return v3;
}
