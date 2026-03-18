/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x140288B80
 * Callers:
 *     PopHiberCheckResume @ 0x14059B630 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  PHYSICAL_ADDRESS v2[4]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v3[112]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v4[16]; // [rsp+B0h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)v4, 8LL) = 1;
  v0 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v2);
  if ( v0 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v3, 0, 0x68uLL);
    VslpEnterIumSecureMode(2, 263LL, 0LL, (__int64)v3);
  }
  return 0LL;
}
