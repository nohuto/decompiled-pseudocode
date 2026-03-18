/*
 * XREFs of PpDevCfgProcessDevice @ 0x1406F93D0
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 */

__int64 PpDevCfgProcessDevice()
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice();
  else
    return 3221225659LL;
}
