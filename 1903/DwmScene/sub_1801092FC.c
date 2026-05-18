/*
 * XREFs of sub_1801092FC @ 0x1801092FC
 * Callers:
 *     sub_1801093CC @ 0x1801093CC (sub_1801093CC.c)
 * Callees:
 *     sub_1800E0E28 @ 0x1800E0E28 (sub_1800E0E28.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1800E13A0 @ 0x1800E13A0 (sub_1800E13A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1801092FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  __int64 v6[22]; // [rsp+28h] [rbp-E0h] BYREF
  int v7; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+E0h] [rbp-28h]

  result = sub_1800E1138();
  if ( result )
  {
    result = sub_1800E13A0(a2, (__int64)&v7);
    if ( v7 == 2 )
    {
      *a3 = v8;
      sub_1800E0E28((__int64)v6);
      sub_1800E0FBC(a2, v6);
    }
    else
    {
      if ( v7 != 5 )
        return result;
      sub_1800E0E28((__int64)v6);
      sub_1800E0FBC(a2, v6);
    }
    return sub_1800E0E9C(v6);
  }
  return result;
}
