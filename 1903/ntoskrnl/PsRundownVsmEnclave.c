/*
 * XREFs of PsRundownVsmEnclave @ 0x1408CCAF0
 * Callers:
 *     MiCanDeleteEnclave @ 0x1402D3764 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2, 49LL, 0LL, (__int64)v3);
}
