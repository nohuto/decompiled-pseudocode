/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x14028D2AC
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int16 v3; // bx
  PHYSICAL_ADDRESS v5[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = HvlpAcquireHypercallPage(v5, 2, (__int64)v6, 8LL);
  v3 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v5);
  if ( v3 )
    return 0;
  *a1 = *v2;
  return 1;
}
