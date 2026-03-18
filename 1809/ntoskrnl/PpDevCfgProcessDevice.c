/*
 * XREFs of PpDevCfgProcessDevice @ 0x1408316D0
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
