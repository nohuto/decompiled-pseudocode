/*
 * XREFs of ?GetDeviceTexture@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800D7D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::GetDeviceTexture(
        CD2DBitmapCacheSourceRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  return CD2DBitmapCache::GetDeviceTextureInternal((CD2DBitmapCacheSourceRealization *)((char *)this - 144), a2, a3);
}
