/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011BDC0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C005B8B4 (ReadPointerDeviceSettings.c)
 *     GetPenDoubleClickTime @ 0x1C01F8D00 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F8D40 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C031F038, 8LL) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
