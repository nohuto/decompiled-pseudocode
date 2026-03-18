/*
 * XREFs of ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015080
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015010 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B9CD0 (-UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180257350 (-UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180258F40 (-UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001517C (--$As@VISwapChainContent@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006A564 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::UpdateSwapChainRealization(__int64 *a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, char *, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v22 = 0LL;
  if ( *a1 && (int)Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(a1, &v22) >= 0 )
  {
    v5 = a1 + 1;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 1);
    v21 = 0LL;
    v6 = *a1;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21, v8, v9, v10);
    v11 = v7(v6, &v21);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x50u, 0LL);
    }
    else
    {
      v13 = v21;
      v14 = *(__int64 (__fastcall **)(__int64, char *, _QWORD *))(*(_QWORD *)v21 + 144LL);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v5);
      v15 = v14(v13, (char *)a2 + 392, v5);
      v2 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x53u, 0LL);
      else
        CDrawingContext::RecordBitmapContentInfo(a2, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21, v17, v18, v19);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v22);
  return v2;
}
