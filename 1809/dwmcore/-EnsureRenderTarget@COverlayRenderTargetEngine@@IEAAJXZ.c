/*
 * XREFs of ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C
 * Callers:
 *     ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x18015EB10 (-PreRender@COverlayRenderTargetEngine@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x18015ED20 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015F28C (-reset@-$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18016D730 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180200638 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x180200968 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::EnsureRenderTarget(COverlayRenderTargetEngine *this)
{
  int v1; // esi
  int D3DDevice; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  CHwCompSwapChainTarget *v7; // rdi
  __int64 v8; // rbx
  void *CompSurfHandle; // rax
  int v10; // eax
  __int64 v11; // rcx
  CMILCOMBase *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  CGdiSpriteBitmap *v16; // rdi
  CGdiSpriteBitmap *v17; // rcx
  CHwCompSwapChainTarget *v19; // [rsp+70h] [rbp+30h] BYREF
  CMILCOMBase *v20; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
    return (unsigned int)v1;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)((char *)this + 168),
                &v20);
  v1 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v19 = 0LL;
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v5 = CHwCompSwapChainTarget::Create(
           v20,
           *((_DWORD *)this + 44),
           *((_DWORD *)this + 45),
           6u,
           0,
           (COverlayRenderTargetEngine *)((char *)this + 184),
           &v19);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x15Du);
      goto LABEL_20;
    }
    v20 = 0LL;
    wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(&v20);
    v7 = v19;
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
    CompSurfHandle = CHwCompSwapChainTarget::GetCompSurfHandle(v19);
    v10 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
            (CCompositionSurfaceManager *)(v8 + 16),
            *((struct CComposition **)this + 2),
            CompSurfHandle,
            &v20);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x167u);
      v17 = v20;
      if ( !v20 )
      {
LABEL_20:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v19);
        goto LABEL_22;
      }
    }
    else
    {
      v12 = v20;
      v13 = CResource::RegisterNotifier(this, v20);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x169u);
      }
      else
      {
        v15 = *((_QWORD *)this + 28);
        *((_QWORD *)this + 28) = v7;
        if ( v7 )
          (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v7 + 8LL))(v7);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v16 = (CGdiSpriteBitmap *)*((_QWORD *)this + 27);
        *((_QWORD *)this + 27) = v12;
        if ( v12 )
          CMILCOMBase::InternalAddRef(v12);
        if ( v16 )
          CGdiSpriteBitmap::Release(v16);
      }
      if ( !v12 )
        goto LABEL_20;
      v17 = v12;
    }
    CGdiSpriteBitmap::Release(v17);
    goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, D3DDevice, 0x155u);
LABEL_22:
  if ( v1 < 0 )
    COverlayRenderTargetEngine::ReleaseRenderTarget(this);
  return (unsigned int)v1;
}
