/*
 * XREFs of ?GetD2DBitmap@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180256300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180022870 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  char v6; // [rsp+28h] [rbp-20h]

  v6 = a4;
  LOBYTE(a4) = *(_BYTE *)(a2 + 16);
  return CD2DBitmapCache::GetBitmap(a1 - 128, *(_QWORD *)a2, *(unsigned int *)(a2 + 8), a4, a3, v6, a5);
}
