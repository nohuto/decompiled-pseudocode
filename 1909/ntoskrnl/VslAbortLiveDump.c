/*
 * XREFs of VslAbortLiveDump @ 0x14028EBEC
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x1408597A8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2, 57LL, 0LL, (__int64)v1);
}
