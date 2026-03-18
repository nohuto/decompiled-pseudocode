/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180263F90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648F8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx

  *a5 = 0LL;
  v9 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)(a1 - 144));
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x107u, 0LL);
  }
  else
  {
    LOBYTE(v11) = a4;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 264)
                                                                                              + 144LL)
                                                                                  + 136LL))(
            *(_QWORD *)(a1 + 264) + 144LL,
            a2,
            a3,
            v11,
            a5);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x10Cu, 0LL);
  }
  return v12;
}
