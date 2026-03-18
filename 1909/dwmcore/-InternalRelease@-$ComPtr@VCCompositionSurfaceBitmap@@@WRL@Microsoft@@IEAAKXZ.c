/*
 * XREFs of ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x180169060
 * Callers:
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x180168E28 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x1801CED2C (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEM.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801CEF3C (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213648 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(CGdiSpriteBitmap **a1)
{
  CGdiSpriteBitmap *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CGdiSpriteBitmap::Release(v1);
  }
  return result;
}
