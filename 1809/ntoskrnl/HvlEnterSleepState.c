/*
 * XREFs of HvlEnterSleepState @ 0x140273CF0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     VslTerminateSecureServices @ 0x1401B3EF0 (VslTerminateSecureServices.c)
 *     HvlpAcquireHypercallPage @ 0x140271864 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272384 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(unsigned int a1)
{
  __int16 v2; // bx
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( a1 >= 4 )
    VslTerminateSecureServices();
  *(_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL) = a1;
  v2 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return v2 != 0 ? 0xC0000001 : 0;
}
