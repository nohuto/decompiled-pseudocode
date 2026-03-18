/*
 * XREFs of ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005129C
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004F540 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180054760 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800D7D90 (-GetDeviceTexture@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180255330 (-GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180260F90 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180261D30 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x1800513B4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::GetDeviceTextureInternal(
        CD2DBitmapCache *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  struct _LUID v4; // rdx
  int BitmapInternalNoRef; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  struct IDeviceTexture *v8; // rbx
  struct IDeviceTexture *v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v10 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(this, v4, 0LL, (__int64)&v10);
  v7 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, BitmapInternalNoRef, 0x85u, 0LL);
  }
  else
  {
    v8 = v10;
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v10 + 8LL))(v10);
    *a3 = v8;
  }
  return v7;
}
