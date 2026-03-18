/*
 * XREFs of ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801BA3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180012C70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 */

__int64 __fastcall CYCbCrSurface::AddOcclusionInformation(
        CCompositionSurfaceBitmap **this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( this[7] )
  {
    if ( this[8] )
      return CCompositionSurfaceBitmap::AddOcclusionInformation(this[7], a2, a3);
  }
  return result;
}
