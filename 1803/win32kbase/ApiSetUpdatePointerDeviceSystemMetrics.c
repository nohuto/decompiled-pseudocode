/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0141CFC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0127700 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetUpdatePointerDeviceSystemMetrics(__int64 a1)
{
  __int64 result; // rax

  result = IsUpdatePointerDeviceSystemMetricsSupported();
  if ( (int)result >= 0 )
    return UpdatePointerDeviceSystemMetrics(a1);
  return result;
}
