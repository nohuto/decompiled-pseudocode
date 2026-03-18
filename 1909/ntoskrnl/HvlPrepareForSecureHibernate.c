/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x14028ADD0
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v5[14]; // [rsp+40h] [rbp-88h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  memset(v5, 0, 0x68uLL);
  v5[1] = (unsigned __int64)v4[3].QuadPart >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2, 257LL, 0LL, (__int64)v5);
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (unsigned int)a1;
}
