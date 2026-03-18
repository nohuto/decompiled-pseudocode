/*
 * XREFs of ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800168AC
 * Callers:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800167B0 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a2);
  return v4(v2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, a2);
}
