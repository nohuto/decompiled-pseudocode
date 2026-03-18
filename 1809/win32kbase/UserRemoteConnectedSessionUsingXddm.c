/*
 * XREFs of UserRemoteConnectedSessionUsingXddm @ 0x1C00A5F98
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004A070 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     <none>
 */

__int64 UserRemoteConnectedSessionUsingXddm()
{
  unsigned int v0; // ecx

  v0 = 1;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || gRemoteSessionUseWddm )
    return 0;
  return v0;
}
