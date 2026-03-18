/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800397BC
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180039610 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x18004238C (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800B2824 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18015E02C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18018C5B4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0;
  if ( a1 <= 61 )
  {
    if ( a1 != 61 )
    {
      v4 = a1 - 2;
      if ( !v4 || (v5 = v4 - 8) == 0 )
      {
        *a2 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
        return v2;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 13;
        if ( v7 )
        {
          v8 = v7 - 4;
          if ( v8 )
          {
            if ( v8 != 21 )
              return (unsigned int)-2003292344;
          }
        }
      }
    }
  }
  else if ( a1 != 65 && (a1 <= 86 || a1 > 88 && a1 != 91 && a1 != 103 && (unsigned int)(a1 - 106) > 1) )
  {
    return (unsigned int)-2003292344;
  }
  *a2 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  return v2;
}
