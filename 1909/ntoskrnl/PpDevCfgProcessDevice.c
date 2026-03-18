/*
 * XREFs of PpDevCfgProcessDevice @ 0x1406FB1B0
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 */

__int64 PpDevCfgProcessDevice()
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice();
  else
    return 3221225659LL;
}
