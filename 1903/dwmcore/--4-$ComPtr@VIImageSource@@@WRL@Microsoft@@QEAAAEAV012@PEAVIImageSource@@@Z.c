/*
 * XREFs of ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x180006278
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006174 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 *     ??0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z @ 0x1801EFA10 (--0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImageSource>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v5);
  }
  return a1;
}
