/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18004889C
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180047AF0 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180048838 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180048CA0 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800497C4 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800AD130 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18015C950 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180254FA0 (-UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapColorKey@@UEBA?AUPixelFormatInfo@@XZ @ 0x180260050 (-GetPixelFormatInfo@CBitmapColorKey@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasAlphaChannel(int a1)
{
  if ( a1 <= 61 )
  {
    if ( a1 == 61 || !a1 )
      return 0LL;
    if ( a1 == 2 )
      return 1LL;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 <= 11 || a1 == 24 )
      return 1LL;
    return a1 == 28;
  }
  if ( a1 == 87 )
    return 1LL;
  if ( a1 != 88 )
  {
    if ( a1 == 65 )
      return 1LL;
    return a1 == 91;
  }
  return 0LL;
}
