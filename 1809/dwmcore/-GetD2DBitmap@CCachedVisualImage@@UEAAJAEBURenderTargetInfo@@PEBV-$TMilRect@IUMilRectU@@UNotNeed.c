/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18018CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(__int64 a1, struct _LUID *a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v16 = 0LL;
  *a5 = 0LL;
  v9 = CCachedVisualImage::EnsureRenderTargetBitmapInfo(a1 - 136, *a2, a2[1].LowPart, &v16);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BCA64, 1u, v9, 0x78Bu);
  }
  else if ( v16 )
  {
    LOBYTE(v11) = a4;
    v13 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, __int64, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 144LL)
                                                                                         + 136LL))(
            *(_QWORD *)(v16 + 8) + 144LL,
            a2,
            a3,
            v11,
            v5);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802BCA64, 1u, v13, 0x794u);
  }
  return v12;
}
