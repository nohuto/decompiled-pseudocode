/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800CFC20
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800CFB3C (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A7FC (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(__int64 a1)
{
  __int64 result; // rax

  CHwTextureRenderTarget::CHwTextureRenderTarget(a1);
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)a1 = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 96) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 144) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(a1 + 152) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 160) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 168) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  result = a1;
  *(_WORD *)(a1 + 216) = 256;
  return result;
}
