/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FBA9C
 * Callers:
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x18020DA40 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800067B4 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
        struct CD3DDeviceLevel1 *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  CHwTextureRenderTarget *v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v15);
  v9 = CHwTextureRenderTarget::CreateFromTexture(a1, a3, a4, a2, v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4AAu);
  }
  else
  {
    v12 = (**(__int64 (__fastcall ***)(CHwTextureRenderTarget *, GUID *, _QWORD *))v15[0])(
            v15[0],
            &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
            a5);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4ACu);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v15);
  return v11;
}
