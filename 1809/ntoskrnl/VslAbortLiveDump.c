/*
 * XREFs of VslAbortLiveDump @ 0x14027A9E4
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x140820058 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)v1);
}
