/*
 * XREFs of VslGetSecurePageList @ 0x14028F880
 * Callers:
 *     HvlpGetSecurePageList @ 0x14028E780 (HvlpGetSecurePageList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslGetSecurePageList(unsigned __int8 a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v6; // rbx
  NTSTATUS result; // eax
  _QWORD v10[14]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a1;
  memset(v10, 0, 0x68uLL);
  v10[1] = v6;
  v10[2] = a2;
  v10[3] = a3;
  result = VslpEnterIumSecureMode(2, 2050LL, 0LL, (__int64)v10);
  if ( result >= 0 )
  {
    if ( a4 )
      *a4 = v10[3];
    *a5 = v10[4];
  }
  return result;
}
