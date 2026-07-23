/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140819894
 * Callers:
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 36LL, 0, (__int64)v1);
}
