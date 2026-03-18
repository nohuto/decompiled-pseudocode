/*
 * XREFs of ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C
 * Callers:
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x180200C4C (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180093974 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093A88 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015757C (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180201024 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::EnsureBufferResources(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rsi
  __int64 v12; // rcx
  int D3DSurfaceLevel; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD); // rcx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CD3DSurface *v28; // [rsp+50h] [rbp+20h] BYREF
  struct ID3D11Texture2D *v29; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 35);
  v29 = 0LL;
  v28 = 0LL;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v29);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v2 + 72LL))(
         v2,
         0LL,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v29);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x102u);
    goto LABEL_19;
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
  v8 = CD3DVidMemOnlyTexture::CreateFromTexture(v29, 0, 1, a2, &v28);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, 0x109u);
    goto LABEL_19;
  }
  v11 = (char *)this + 288;
  v12 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v28, v9, (struct CD3DSurface **)this + 36);
  v7 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D3DSurfaceLevel, 0x10Bu);
    goto LABEL_19;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)v11 + 24LL) + 24LL))(
          *(_QWORD *)v11 + 24LL,
          (char *)this + 264);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x10Cu);
    goto LABEL_19;
  }
  v17 = *(void (__fastcall ****)(_QWORD))v11;
  *((_QWORD *)this + 25) = *(_QWORD *)v11;
  (**v17)(v17);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v29);
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
  v18 = *((_QWORD *)this + 35);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v29);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v18 + 72LL))(
          v18,
          (unsigned int)(*((_DWORD *)this + 130) - 1),
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v29);
  v7 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x115u);
    goto LABEL_19;
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
  v21 = CD3DVidMemOnlyTexture::CreateFromTexture(v29, 0, 1, a2, &v28);
  v7 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v21, 0x11Cu);
    goto LABEL_19;
  }
  v24 = *((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = CD3DTexture::GetD3DSurfaceLevel(v28, v22, (struct CD3DSurface **)this + 37);
  v7 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x11Eu);
LABEL_19:
    CHwCompSwapChainTarget::ReleaseBufferResources(this);
  }
  if ( v28 )
    CD3DSurface::Release(v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v29);
  return v7;
}
