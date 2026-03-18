/*
 * XREFs of ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1802267A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18001FFF0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int Bitmap; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  char v9; // [rsp+28h] [rbp-20h]

  v9 = a4;
  LOBYTE(a4) = *(_BYTE *)(a2 + 16);
  Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, *(_QWORD *)a2, *(unsigned int *)(a2 + 8), a4, a3, v9, a5);
  v7 = Bitmap;
  if ( Bitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Bitmap, 0x7Du);
  return v7;
}
