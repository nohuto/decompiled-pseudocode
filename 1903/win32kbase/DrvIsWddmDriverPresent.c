/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C00502CC
 * Callers:
 *     DrvQueryDisplayConfig @ 0x1C00500E0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0050200 (DrvGetDisplayConfigBufferSizes.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C012D200 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 DrvIsWddmDriverPresent()
{
  wchar_t *i; // rcx

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
