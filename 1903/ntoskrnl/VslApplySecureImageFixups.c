/*
 * XREFs of VslApplySecureImageFixups @ 0x14028F17C
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = v3;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2, 43LL, 0LL, (__int64)v7);
}
