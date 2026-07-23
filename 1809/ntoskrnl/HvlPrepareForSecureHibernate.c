/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x140276FE8
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-80h]

  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  v6 = (unsigned __int64)v4[3].QuadPart >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 240LL, 0, (__int64)v5);
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (unsigned int)a1;
}
