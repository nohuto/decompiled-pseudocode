/*
 * XREFs of VslRetrieveMailbox @ 0x14027C010
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall VslRetrieveMailbox(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, _QWORD *a5)
{
  NTSTATUS result; // eax
  __int128 v10; // xmm0
  _OWORD v11[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v11, 0, 0x68uLL);
  if ( !*a2 && !a2[1] )
    return -1073741811;
  v10 = *(_OWORD *)a2;
  *(_QWORD *)&v11[2] = a3;
  *(_QWORD *)&v11[3] = *a5;
  *((_QWORD *)&v11[0] + 1) = a1;
  v11[1] = v10;
  *((_QWORD *)&v11[2] + 1) = a4;
  result = VslpEnterIumSecureMode(2u, 20LL, 0, (__int64)v11);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    *a5 = LODWORD(v11[1]);
  return result;
}
