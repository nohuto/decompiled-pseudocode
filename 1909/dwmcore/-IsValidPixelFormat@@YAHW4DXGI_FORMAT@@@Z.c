/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800488C4
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180048838 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  if ( a1 <= 61 )
    return a1 == 61 || a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28 || a1 == 49);
  return a1 == 65 || a1 > 86 && (a1 <= 88 || a1 == 91 || a1 == 103 || a1 > 105 && a1 <= 107);
}
