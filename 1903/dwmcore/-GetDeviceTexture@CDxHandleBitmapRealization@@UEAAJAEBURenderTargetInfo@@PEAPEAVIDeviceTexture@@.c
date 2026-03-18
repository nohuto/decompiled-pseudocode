/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B3050
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180262850 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x1800B30F4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  signed int BitmapInternalNoRef; // eax
  __int64 v9; // rcx
  struct IDeviceTexture *v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 144);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xDEu, 0LL);
  }
  else
  {
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v3, 0LL, (__int64)&v12);
    v7 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternalNoRef, 0xE4u, 0LL);
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
