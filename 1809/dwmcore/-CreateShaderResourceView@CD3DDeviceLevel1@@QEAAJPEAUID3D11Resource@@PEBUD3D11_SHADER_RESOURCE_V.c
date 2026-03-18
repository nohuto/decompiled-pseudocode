/*
 * XREFs of ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180098AF4
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180093F18 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180098300 (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateShaderResourceView(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        const struct D3D11_SHADER_RESOURCE_VIEW_DESC *a3,
        struct ID3D11ShaderResourceView **a4)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 212);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0x5C3u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_SHADER_RESOURCE_VIEW_DESC *))(**((_QWORD **)this + 79) + 56LL))(
           *((_QWORD *)this + 79),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5C7u);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
