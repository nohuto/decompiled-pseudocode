/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180263430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180022870 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180263370 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1802638EC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _QWORD *a5)
{
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // r8
  CD2DBitmap **v12; // r10
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rdx
  signed int Bitmap; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx

  v9 = CDxHandleStereoBitmapRealization::UseLeftBitmap(a1 - 144, *(unsigned int *)(a2 + 12));
  *a5 = 0LL;
  v13 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v12, v10, v11);
  v16 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3Au, 0LL);
  }
  else
  {
    LOBYTE(v15) = *(_BYTE *)(a2 + 16);
    v17 = *(unsigned int *)(a2 + 8);
    v18 = *(_QWORD *)a2;
    if ( v9 )
    {
      Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, v18, v17, v15, a3, a4, a5);
      v16 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Bitmap, 0x43u, 0LL);
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 312) + 48LL))(
              a1 + 312,
              v18,
              v17,
              v15);
      v16 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4Cu, 0LL);
    }
  }
  return v16;
}
