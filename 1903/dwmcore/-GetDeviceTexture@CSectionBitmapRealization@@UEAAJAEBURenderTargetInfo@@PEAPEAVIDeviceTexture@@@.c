/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B2C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B2FD4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int DeviceTextureInternal; // eax
  __int64 v11; // rcx

  *a3 = 0LL;
  v3 = (CSectionBitmapRealization *)((char *)this - 144);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802C02F0, 1u, v7, 0xDAu, 0LL);
  }
  else if ( *((_QWORD *)this + 40) )
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, a3);
    v9 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802C02F0, 1u, DeviceTextureInternal, 0xDFu, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v9;
}
