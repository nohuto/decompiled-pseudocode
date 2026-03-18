/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0141628
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00BA1D4 (ReadPointerDeviceSettings.c)
 *     GetPenDoubleClickTime @ 0x1C01F8FB0 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F8FF0 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0321038, 8LL) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
