/*
 * XREFs of UserRemoteConnectedSessionUsingWddm @ 0x1C008EC74
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

__int64 UserRemoteConnectedSessionUsingWddm()
{
  unsigned int v0; // ecx

  v0 = 1;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !gRemoteSessionUseWddm )
    return 0;
  return v0;
}
