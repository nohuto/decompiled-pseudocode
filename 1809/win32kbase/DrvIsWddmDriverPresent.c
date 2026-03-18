/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C00144B4
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0003800 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004A220 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C004A570 (DrvQueryDisplayConfig.c)
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
