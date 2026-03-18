/*
 * XREFs of ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800BE7E0
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180039610 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800BE760 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801D0084 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateShaderResourceView(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        const struct D3D11_SHADER_RESOURCE_VIEW_DESC *a3,
        struct ID3D11ShaderResourceView **a4)
{
  int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 220);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, 0x5D3u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_SHADER_RESOURCE_VIEW_DESC *))(**((_QWORD **)this + 79) + 56LL))(
           *((_QWORD *)this + 79),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5D7u, 0LL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
