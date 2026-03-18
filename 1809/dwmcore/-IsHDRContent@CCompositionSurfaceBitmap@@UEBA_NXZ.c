/*
 * XREFs of ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18001B1B0
 * Callers:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800F0320 (-IsHDRContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsHDRContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
    return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v1 + 196));
  return result;
}
