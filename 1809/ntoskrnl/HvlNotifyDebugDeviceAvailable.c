/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1402749E0
 * Callers:
 *     PopHiberCheckResume @ 0x14056B320 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v3[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v4; // [rsp+B0h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)&v4, 8LL) = 1;
  v0 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v2);
  if ( v0 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v3, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 246LL, 0, (__int64)v3);
  }
  return 0LL;
}
