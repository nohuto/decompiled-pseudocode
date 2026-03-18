/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180261D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005129C (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180261AB0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x18026202C (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        CDxHandleStereoBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  CD2DBitmap **v9; // r10
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  signed int DeviceTextureInternal; // eax
  __int64 v14; // rcx

  v6 = CDxHandleStereoBitmapRealization::UseLeftBitmap((char *)this - 144, (unsigned int)a2[1].HighPart);
  v10 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v9, v7, v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5Du, 0LL);
  }
  else
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                              (CDxHandleStereoBitmapRealization *)((char *)this
                                                                 + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE48uLL)
                                                                 + 296),
                              a2,
                              a3);
    v12 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DeviceTextureInternal, 0x5Eu, 0LL);
  }
  return v12;
}
