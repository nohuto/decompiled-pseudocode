/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180051310
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180260F90 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x1800513B4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int BitmapInternalNoRef; // eax
  unsigned int v10; // ecx
  struct IDeviceTexture *v11; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 144);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDEu, 0LL);
  }
  else
  {
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v3, *a2, 0LL, (__int64)&v13);
    v8 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, BitmapInternalNoRef, 0xE4u, 0LL);
    }
    else
    {
      v11 = (struct IDeviceTexture *)v13;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *a3 = v11;
    }
  }
  return v8;
}
