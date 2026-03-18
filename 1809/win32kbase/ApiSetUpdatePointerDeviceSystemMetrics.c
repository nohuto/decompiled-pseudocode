/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C016541C
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0095780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
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
