/*
 * XREFs of ?UpdatePixelFormatInfo@CHwCompSwapChainTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180201380
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180093A54 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwCompSwapChainTarget::UpdatePixelFormatInfo(
        CHwCompSwapChainTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DSurface *v2; // rcx

  v2 = (CD3DSurface *)*((_QWORD *)this + 25);
  if ( v2 )
    CD3DSurface::UpdatePixelFormatInfo(v2, a2);
}
