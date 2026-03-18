/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180095070
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802276B0 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180095114 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int BitmapInternalNoRef; // eax
  unsigned int v9; // ecx
  struct IDeviceTexture *v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 144);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE0u);
  }
  else
  {
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v3, 0LL, (__int64)&v12);
    v7 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternalNoRef, 0xE6u);
    }
    else
    {
      v10 = (struct IDeviceTexture *)v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *a3 = v10;
    }
  }
  return v7;
}
