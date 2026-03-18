/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB180
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800067B4 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800915CC (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800DA87C (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1802032D4 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB204 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CHwTextureRenderTarget(__int64 a1, __int64 a2)
{
  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a2);
  *(_QWORD *)a1 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 208) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(a1 + 216) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 224) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 232) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  return a1;
}
