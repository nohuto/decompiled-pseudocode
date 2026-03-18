/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x180067C3C
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065B8C (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180067B90 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801BC6E4 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1802088CC (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180208AB0 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802295A0 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
