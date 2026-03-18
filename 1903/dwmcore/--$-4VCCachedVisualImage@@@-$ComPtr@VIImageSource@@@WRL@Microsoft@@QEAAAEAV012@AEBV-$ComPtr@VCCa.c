/*
 * XREFs of ??$?4VCCachedVisualImage@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCCachedVisualImage@@@12@@Z @ 0x1801FBBF8
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180051700 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImageSource>::operator=<CCachedVisualImage>(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *a2 )
    v2 = *a2 + 8LL;
  v5 = v2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v2;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v5);
  return a1;
}
