/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180260F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005129C (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180051310 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180260C24 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *v5; // rcx
  signed int DeviceTexture; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int DeviceTextureInternal; // eax
  __int64 v13; // rcx

  v5 = (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 144);
  if ( *(_OWORD *)((char *)this + 296) == 0LL )
  {
    DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(this, a2, a3);
    v9 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DeviceTexture, 0x77u, 0LL);
  }
  else
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v5, (__int64)a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x71u, 0LL);
    }
    else
    {
      DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                                (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this + 312),
                                a2,
                                a3);
      v9 = DeviceTextureInternal;
      if ( DeviceTextureInternal < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, DeviceTextureInternal, 0x73u, 0LL);
    }
  }
  return v9;
}
