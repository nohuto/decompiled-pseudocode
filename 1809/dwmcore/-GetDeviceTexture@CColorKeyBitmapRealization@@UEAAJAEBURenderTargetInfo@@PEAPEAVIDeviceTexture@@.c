/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180226800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094FFC (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int DeviceTextureInternal; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                            (CColorKeyBitmapRealization *)((char *)this - 144),
                            a2,
                            a3);
  v5 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DeviceTextureInternal, 0x89u);
  return v5;
}
