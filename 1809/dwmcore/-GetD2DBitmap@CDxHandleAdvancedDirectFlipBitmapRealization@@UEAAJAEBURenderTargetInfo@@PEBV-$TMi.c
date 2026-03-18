/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1802275C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180226EE0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180227384 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _QWORD *a5)
{
  const struct FastRegion::Internal::CRgnData ***v6; // rcx
  int D2DBitmap; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  char v19; // [rsp+28h] [rbp-30h]

  v6 = (const struct FastRegion::Internal::CRgnData ***)(a1 - 144);
  *a5 = 0LL;
  if ( *(_OWORD *)(a1 + 296) == 0LL )
  {
    D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(a1, a2, a3, a4, a5);
    v12 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, D2DBitmap, 0x63u);
  }
  else
  {
    v13 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v6, a2);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x58u);
    }
    else
    {
      LOBYTE(v15) = *(_BYTE *)(a2 + 16);
      v19 = a4;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, char, _QWORD *))(*(_QWORD *)(a1 + 328)
                                                                                                 + 48LL))(
              a1 + 328,
              *(_QWORD *)a2,
              *(unsigned int *)(a2 + 8),
              v15,
              a3,
              v19,
              a5);
      v12 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x5Fu);
    }
  }
  return v12;
}
