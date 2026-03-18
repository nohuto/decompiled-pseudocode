/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800B4264
 * Callers:
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B21B0 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800B414C (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180163338 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x180163920 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800B4424 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CHwTextureRenderTarget(__int64 a1)
{
  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget();
  *(_QWORD *)a1 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 96) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 144) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(a1 + 152) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 160) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 168) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  return a1;
}
