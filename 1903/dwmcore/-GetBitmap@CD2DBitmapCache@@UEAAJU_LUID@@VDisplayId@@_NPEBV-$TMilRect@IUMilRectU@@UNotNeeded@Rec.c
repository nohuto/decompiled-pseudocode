/*
 * XREFs of ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180022870
 * Callers:
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x1800B2CA0 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetD2DBitmap@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180256300 (-GetD2DBitmap@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilR.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180256580 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180256A40 (-GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180257180 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180263430 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x1800B30F4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  int BitmapInternalNoRef; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v7 = a7;
  v16 = 0LL;
  v8 = a5;
  *a7 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef((CD2DBitmapCache *)(a1 - 16), v8, (__int64)&v16);
  v12 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BitmapInternalNoRef, 0x65u, 0LL);
  }
  else
  {
    LOBYTE(v10) = a6;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v16 + 112LL))(v16, v10, v7);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6Au, 0LL);
  }
  return v12;
}
