/*
 * XREFs of VslAbortLiveDump @ 0x14027AAE4
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x140820038 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)v1);
}
