/*
 * XREFs of VslEndSecurePageIteration @ 0x14028F2A4
 * Callers:
 *     HvlpEndSecurePageListIteration @ 0x14028E614 (HvlpEndSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslEndSecurePageIteration(unsigned __int8 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a1;
  memset(v5, 0, 0x68uLL);
  v5[1] = v3;
  result = VslpEnterIumSecureMode(2, 2049LL, 0LL, (__int64)v5);
  if ( result >= 0 )
    *a2 = v5[2];
  return result;
}
