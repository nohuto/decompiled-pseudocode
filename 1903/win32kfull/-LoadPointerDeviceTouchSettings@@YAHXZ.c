/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0140F2C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00BA1D4 (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F8A34 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor && !(unsigned int)GetDWORDSettingValues(2LL, off_1C0321058, 13LL)
    || !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValues(3LL, off_1C0321048, 1LL) )
  {
    return 0LL;
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
