/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004F540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005129C (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int DeviceTextureInternal; // eax
  unsigned int v11; // ecx

  *a3 = 0LL;
  v3 = (CSectionBitmapRealization *)((char *)this - 144);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BE430, 1u, v7, 0xDAu, 0LL);
  }
  else if ( *((_QWORD *)this + 40) )
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, a3);
    v9 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802BE430, 1u, DeviceTextureInternal, 0xDFu, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v9;
}
