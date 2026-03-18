/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800497C4
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180049938 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180047C9C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18004889C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1800496FC (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  int PixelFormatColorSpace; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 128);
  *((_DWORD *)this + 44) = HasAlphaChannel(*((_DWORD *)this + 36)) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(*((_DWORD *)this + 36), (enum DXGI_COLOR_SPACE_TYPE *)this + 45);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 106;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 34);
  *((_DWORD *)this + 46) = v11;
  if ( (unsigned int)(v11 - 1) > 0x1F )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x6Fu, 0LL);
    return v10;
  }
  *((_DWORD *)this + 43) = a4;
  if ( a4 >= *((_DWORD *)this + 35) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x75u, 0LL);
    return v10;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 123;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, PixelFormatColorSpace, v13, 0LL);
  }
  return v10;
}
