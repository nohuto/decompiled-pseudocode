/*
 * XREFs of sub_1801072F0 @ 0x1801072F0
 * Callers:
 *     sub_180036634 @ 0x180036634 (sub_180036634.c)
 *     sub_180036698 @ 0x180036698 (sub_180036698.c)
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 * Callees:
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1801072F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  __int64 *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  __int64 *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_18015F5C8 > 5 )
  {
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    v11 = &v5;
    v13 = &v6;
    v15 = &v7;
    v17 = &v8;
    v19 = &v9;
    v5 = a1;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    return sub_18008935C(
             (__int64)&dword_18015F5C8,
             (unsigned __int8 *)dword_18012BE3D,
             a3,
             a4,
             7u,
             (PEVENT_DATA_DESCRIPTOR)v10);
  }
  return result;
}
