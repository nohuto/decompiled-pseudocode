/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800254C0
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800267AC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x180025644 (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ecx
  __int64 v4; // rcx
  bool v5; // di
  int v6; // edi
  int v7; // edi
  int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 206) = 61;
  *((_DWORD *)this + 207) = CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v10 = 827;
    goto LABEL_29;
  }
  *((_DWORD *)this + 208) = 28;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v10 = 837;
    goto LABEL_29;
  }
  *((_DWORD *)this + 210) = 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v10 = 856;
LABEL_29:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v10, 0LL);
    return v1;
  }
  v4 = *((_QWORD *)this + 79);
  *((_DWORD *)this + 211) = 88;
  v5 = (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v4 + 264LL))(v4, 7LL, &v11, 4LL) >= 0 && v11;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v5 )
    *((_DWORD *)this + 215) = 2;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v5 )
  {
    *((_DWORD *)this + 213) = 10;
    if ( !*((_DWORD *)this + 215) )
      *((_DWORD *)this + 215) = 10;
  }
  else
  {
    v9 = *((_DWORD *)this + 215);
    if ( v9 )
    {
      *((_DWORD *)this + 213) = v9;
    }
    else
    {
      *((_DWORD *)this + 215) = 87;
      *((_DWORD *)this + 213) = 87;
    }
  }
  v6 = 11;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v6 = *((_DWORD *)this + 215);
  *((_DWORD *)this + 214) = v6;
  v7 = 24;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v7 = *((_DWORD *)this + 213);
  *((_DWORD *)this + 212) = v7;
  return v1;
}
