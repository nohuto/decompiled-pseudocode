/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180226EE0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1802275C0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18001FFF0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  int Bitmap; // eax
  __int64 v14; // rcx

  *a5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 144) + 80LL))(a1 - 144);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC7u);
  }
  else
  {
    LOBYTE(v11) = *(_BYTE *)(a2 + 16);
    Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, *(_QWORD *)a2, *(unsigned int *)(a2 + 8), v11, a3, a4, a5);
    v12 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Bitmap, 0xCEu);
  }
  return v12;
}
