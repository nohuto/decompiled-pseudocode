/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800BE560
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800BE40C (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800BE4C0 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x180168644 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180168830 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1801D1A0C (-ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIO.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025D034 (-IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802647F0 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
