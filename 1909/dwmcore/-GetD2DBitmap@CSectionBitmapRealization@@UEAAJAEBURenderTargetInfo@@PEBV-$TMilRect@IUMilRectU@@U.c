/*
 * XREFs of ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180254E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180020CA0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  signed int Bitmap; // eax
  __int64 v14; // rcx

  *a5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 144) + 80LL))(a1 - 144);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802E27D4, 1u, v9, 0xB9u, 0LL);
  }
  else if ( *(_QWORD *)(a1 + 320) )
  {
    LOBYTE(v11) = *(_BYTE *)(a2 + 16);
    Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, *(struct _LUID *)a2, *(unsigned int *)(a2 + 8), v11, a3, a4, a5);
    v12 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802E27D4, 1u, Bitmap, 0xC2u, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v12;
}
