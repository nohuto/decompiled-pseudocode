/*
 * XREFs of ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8
 * Callers:
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800A3828 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddRef@CPathEmitterShape@EmitterShapes@@UEAAKXZ @ 0x18001FA30 (-AddRef@CPathEmitterShape@EmitterShapes@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180097744 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180097870 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x1800A139C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801BC3A8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x1801DBA04 (-Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::Initialize(CCompositionSurfaceInfo::CBindInfo *this, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  _DWORD *v9; // rax
  char *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  char *v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  struct CCompositionSwapchainStatistics *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  struct CCompositionSwapchainStatistics *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[120]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[752]; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE hObject; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int16 v29[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  void *retaddr; // [rsp+478h] [rbp+378h]

  v24 = a2;
  v3 = 0;
  memset_0(v25, 0, 0x410uLL);
  if ( *((_QWORD *)this + 1) )
    CCompositionSurfaceInfo::CBindInfo::Reset(this);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v24, v25);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18029B808, 3u, v4 | 0x10000000, 0x3C6u);
    goto LABEL_12;
  }
  v6 = v25[0];
  *((_QWORD *)this + 1) = v24;
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
          MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18029B808, 3u, -2147024809, 0x404u);
          goto LABEL_17;
        }
        v15 = (char *)hObject;
        v23 = 0LL;
        v16 = CCompositionSwapchainStatistics::Create(hObject, &v23);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18029B808, 3u, v16, 0x3F1u);
        }
        else
        {
          v18 = v23;
          v23 = 0LL;
          v19 = *((_QWORD *)this + 18);
          *((_QWORD *)this + 18) = ((unsigned __int64)v18 + 16) & -(__int64)(v18 != 0LL);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v20 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                  this,
                  (const struct CSM_BUFFER_ATTRIBUTES *)v26,
                  (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v27);
          v3 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_18029B808, 3u, v20, 0x3F5u);
          else
            CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v29);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
        if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v15);
LABEL_12:
        if ( (v3 & 0x80000000) == 0 )
          return v3;
LABEL_17:
        *((_QWORD *)this + 1) = 0LL;
        *((_DWORD *)this + 4) = 0;
        return v3;
      }
      v9 = WPF::ProcessHeapImpl::AllocClear(0x20uLL);
      if ( !v9 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v9[2] = 0;
      v9[7] = 0;
      v10 = (char *)(v9 + 4);
      *(_QWORD *)v9 = &CFlipExSwapchainStatistics::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v9 + 2) = &CFlipExSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
      v9[6] = 2;
      EmitterShapes::CPathEmitterShape::AddRef((EmitterShapes::CPathEmitterShape *)v9);
      v11 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v26,
              (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v27);
      v3 = v12;
      if ( v12 >= 0 )
      {
        CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v29);
        goto LABEL_12;
      }
      v22 = 992;
    }
    else
    {
      v12 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v26,
              (const struct CSM_SINGLE_BUFFER_INFO *)v27);
      v3 = v12;
      if ( v12 >= 0 )
        return v3;
      v22 = 979;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18029B808, 3u, v12, v22);
    goto LABEL_12;
  }
  return v3;
}
