/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802276B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094FFC (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180095070 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180227384 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  const struct FastRegion::Internal::CRgnData ***v5; // rcx
  int DeviceTexture; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int DeviceTextureInternal; // eax
  __int64 v13; // rcx

  v5 = (const struct FastRegion::Internal::CRgnData ***)((char *)this - 144);
  if ( *(_OWORD *)((char *)this + 296) == 0LL )
  {
    DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(this, a2, a3);
    v9 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DeviceTexture, 0x79u);
  }
  else
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v5, (__int64)a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x73u);
    }
    else
    {
      DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                                (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this + 312),
                                a2,
                                a3);
      v9 = DeviceTextureInternal;
      if ( DeviceTextureInternal < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, DeviceTextureInternal, 0x75u);
    }
  }
  return v9;
}
