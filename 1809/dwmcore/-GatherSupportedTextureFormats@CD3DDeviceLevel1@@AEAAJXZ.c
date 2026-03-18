/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D6178
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x1800D62FC (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  char v5; // si
  int v6; // esi
  int v7; // esi
  int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 197) = 61;
  *((_DWORD *)this + 198) = CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v10 = 813;
    goto LABEL_28;
  }
  *((_DWORD *)this + 199) = 28;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v10 = 823;
    goto LABEL_28;
  }
  *((_DWORD *)this + 201) = 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v10 = 842;
LABEL_28:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v10);
    return v1;
  }
  v4 = *((_QWORD *)this + 79);
  *((_DWORD *)this + 202) = 88;
  if ( (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v4 + 264LL))(v4, 7LL, &v11, 4LL) < 0
    || (v5 = 1, !v11) )
  {
    v5 = 0;
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v5 )
    *((_DWORD *)this + 206) = 2;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v5 )
  {
    *((_DWORD *)this + 204) = 10;
    if ( !*((_DWORD *)this + 206) )
      *((_DWORD *)this + 206) = 10;
  }
  else
  {
    v9 = *((_DWORD *)this + 206);
    if ( v9 )
    {
      *((_DWORD *)this + 204) = v9;
    }
    else
    {
      *((_DWORD *)this + 206) = 87;
      *((_DWORD *)this + 204) = 87;
    }
  }
  v6 = 11;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v6 = *((_DWORD *)this + 206);
  *((_DWORD *)this + 205) = v6;
  v7 = 24;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v7 = *((_DWORD *)this + 204);
  *((_DWORD *)this + 203) = v7;
  return v1;
}
