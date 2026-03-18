/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180255330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005129C (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  signed int DeviceTextureInternal; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                            (CColorKeyBitmapRealization *)((char *)this - 144),
                            a2,
                            a3);
  v5 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DeviceTextureInternal, 0x87u, 0LL);
  return v5;
}
