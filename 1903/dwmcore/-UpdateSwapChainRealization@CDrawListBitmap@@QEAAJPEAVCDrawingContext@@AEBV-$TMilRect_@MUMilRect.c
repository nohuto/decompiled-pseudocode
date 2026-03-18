/*
 * XREFs of ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800167B0
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016740 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BB470 (-UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180258AC0 (-UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025A800 (-UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800168AC (--$As@VISwapChainContent@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18005154C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::UpdateSwapChainRealization(__int64 *a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, char *, _QWORD *); // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( *a1 && (int)Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(a1, &v16) >= 0 )
  {
    v5 = a1 + 1;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a1 + 1);
    v15 = 0LL;
    v6 = *a1;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
    v8 = v7(v6, &v15);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u, 0LL);
    }
    else
    {
      v10 = v15;
      v11 = *(__int64 (__fastcall **)(__int64, char *, _QWORD *))(*(_QWORD *)v15 + 144LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v5);
      v12 = v11(v10, (char *)a2 + 392, v5);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x53u, 0LL);
      else
        CDrawingContext::RecordBitmapContentInfo(a2, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
  return v2;
}
