/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800DA87C
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800924C4 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB180 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  CHwTextureRenderTarget::CHwTextureRenderTarget(a1, a2);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)a1 = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 208) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(a1 + 216) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 224) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 232) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  result = a1;
  *(_WORD *)(a1 + 280) = 256;
  return result;
}
