/*
 * XREFs of ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800159A0
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015930 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180186960 (-UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022A740 (-UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022D240 (-UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x180028B7C (--$As@VISwapChainContent@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B16F8 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::UpdateSwapChainRealization(__int64 *a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( *a1 && (int)Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(a1, &v13) >= 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 1);
    v12 = 0LL;
    v5 = *a1;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v12);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x50u);
    }
    else
    {
      v8 = v12;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 1);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 144LL))(
             v8,
             (__int64)a2 + 392,
             a1 + 1);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x53u);
      else
        CDrawingContext::RecordBitmapContentInfo(a2, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v13);
  return v2;
}
