/*
 * XREFs of VslGetSecureTebAddress @ 0x140851CF4
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(unsigned int *)(a1 + 796);
  v5[2] = a1;
  result = VslpEnterIumSecureMode(2, 13LL, 0LL, (__int64)v5);
  if ( result >= 0 )
    *a2 = v5[2];
  return result;
}
