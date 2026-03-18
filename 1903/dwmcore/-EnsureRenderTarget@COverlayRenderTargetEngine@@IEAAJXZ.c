/*
 * XREFs of ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A4844
 * Callers:
 *     ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x1801A4CF0 (-PreRender@COverlayRenderTargetEngine@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A4F30 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A54D0 (-reset@-$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023F998 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x18023FCE4 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18024EB1C (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::EnsureRenderTarget(COverlayRenderTargetEngine *this)
{
  int v1; // esi
  signed int D3DDevice; // eax
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  CHwCompSwapChainTarget *v9; // rdi
  void *CompSurfHandle; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  CMILCOMBase *v13; // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  CGdiSpriteBitmap *v17; // rdi
  CGdiSpriteBitmap *v18; // rcx
  void *v20; // [rsp+20h] [rbp-20h]
  CHwCompSwapChainTarget *v21; // [rsp+70h] [rbp+30h] BYREF
  CMILCOMBase *v22; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
    return (unsigned int)v1;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)((char *)this + 168),
                &v22);
  v1 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v21 = 0LL;
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v21);
    LODWORD(v20) = 0;
    v5 = CHwCompSwapChainTarget::Create(
           v22,
           *((_DWORD *)this + 44),
           *((_DWORD *)this + 45),
           6u,
           v20,
           (COverlayRenderTargetEngine *)((char *)this + 184),
           &v21);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x161u, 0LL);
      goto LABEL_20;
    }
    v7 = *((_QWORD *)this + 2);
    v22 = 0LL;
    v8 = *(_QWORD *)(v7 + 72);
    wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(&v22);
    v9 = v21;
    CompSurfHandle = CHwCompSwapChainTarget::GetCompSurfHandle(v21);
    v11 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
            (CCompositionSurfaceManager *)(v8 + 16),
            *((struct CComposition **)this + 2),
            CompSurfHandle,
            &v22);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Bu, 0LL);
      v18 = v22;
      if ( !v22 )
      {
LABEL_20:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
        goto LABEL_22;
      }
    }
    else
    {
      v13 = v22;
      v14 = CResource::RegisterNotifier(this, v22);
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x16Du, 0LL);
      }
      else
      {
        v16 = *((_QWORD *)this + 28);
        *((_QWORD *)this + 28) = v9;
        if ( v9 )
          (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v17 = (CGdiSpriteBitmap *)*((_QWORD *)this + 27);
        *((_QWORD *)this + 27) = v13;
        if ( v13 )
          CMILCOMBase::InternalAddRef(v13);
        if ( v17 )
          CGdiSpriteBitmap::Release(v17);
      }
      if ( !v13 )
        goto LABEL_20;
      v18 = v13;
    }
    CGdiSpriteBitmap::Release(v18);
    goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, D3DDevice, 0x159u, 0LL);
LABEL_22:
  if ( v1 < 0 )
    COverlayRenderTargetEngine::ReleaseRenderTarget(this);
  return (unsigned int)v1;
}
