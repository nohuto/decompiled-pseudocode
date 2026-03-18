/*
 * XREFs of VslFreeSecureHibernateResources @ 0x1408523DC
 * Callers:
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2, 36LL, 0LL, (__int64)v1);
}
