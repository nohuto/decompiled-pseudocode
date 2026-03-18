/*
 * XREFs of PsRequestDebugSecureProcess @ 0x1408CAC94
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140677E60 (DbgkCopyProcessDebugPort.c)
 *     NtRemoveProcessDebug @ 0x140849030 (NtRemoveProcessDebug.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall PsRequestDebugSecureProcess(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a2;
  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 728);
  v5[2] = v2;
  return VslpEnterIumSecureMode(2, 12LL, 0LL, (__int64)v5);
}
