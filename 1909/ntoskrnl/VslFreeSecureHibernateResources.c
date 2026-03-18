/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140851ADC
 * Callers:
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2, 36LL, 0LL, (__int64)v1);
}
