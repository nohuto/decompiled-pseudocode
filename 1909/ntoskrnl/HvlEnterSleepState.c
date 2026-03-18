/*
 * XREFs of HvlEnterSleepState @ 0x140287A10
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  PHYSICAL_ADDRESS v3[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v3, 0, sizeof(v3));
  *(_DWORD *)HvlpAcquireHypercallPage(v3, 1, (__int64)v4, 8LL) = a1;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v3);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
