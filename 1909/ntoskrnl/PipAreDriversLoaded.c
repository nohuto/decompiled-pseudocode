/*
 * XREFs of PipAreDriversLoaded @ 0x1400D4E20
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406701CC (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140779700 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1400D4E40 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
