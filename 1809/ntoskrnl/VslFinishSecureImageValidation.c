/*
 * XREFs of VslFinishSecureImageValidation @ 0x14027CCF0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslFreePoolTransferObject @ 0x14027B390 (VslFreePoolTransferObject.c)
 */

__int64 __fastcall VslFinishSecureImageValidation(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        _BYTE *a5,
        __int64 *a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  NTSTATUS v9; // r14d
  _BYTE v11[8]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v12; // [rsp+28h] [rbp-71h]
  __int64 v13; // [rsp+30h] [rbp-69h]
  int v14; // [rsp+38h] [rbp-61h]
  char v15; // [rsp+3Ch] [rbp-5Dh]
  char v16; // [rsp+3Dh] [rbp-5Ch]
  PVOID P; // [rsp+40h] [rbp-59h]
  __int64 v18; // [rsp+48h] [rbp-51h]
  int v19; // [rsp+50h] [rbp-49h]

  P = 0LL;
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v9 = VslpEnterIumSecureMode(2u, 27LL, 0, (__int64)v11);
  *a9 = v19;
  if ( v9 >= 0 )
  {
    *a5 = v16;
    *a8 = v18;
  }
  if ( P )
  {
    *a6 = VslFreePoolTransferObject((__int64 *)P, a7);
  }
  else
  {
    *a6 = 0LL;
    *a7 = 0LL;
  }
  return (unsigned int)v9;
}
