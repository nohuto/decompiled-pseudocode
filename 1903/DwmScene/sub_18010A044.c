/*
 * XREFs of sub_18010A044 @ 0x18010A044
 * Callers:
 *     sub_1800D593C @ 0x1800D593C (sub_1800D593C.c)
 * Callees:
 *     sub_18006D028 @ 0x18006D028 (sub_18006D028.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1800E1200 @ 0x1800E1200 (sub_1800E1200.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18010A044(_QWORD *a1)
{
  __int64 *v2; // rdx
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+28h] [rbp-89h] BYREF
  __int128 v7; // [rsp+38h] [rbp-79h] BYREF
  __int64 v8; // [rsp+48h] [rbp-69h]
  _QWORD v9[23]; // [rsp+50h] [rbp-61h] BYREF

  v8 = -2LL;
  v2 = (__int64 *)sub_18006D028(a1[114], (__int64)v9);
  sub_1800E0FBC((__int64)(a1 + 44), v2);
  sub_1800E0E9C(v9);
  result = sub_1800E1138();
  if ( result )
  {
    v6 = 0LL;
    v4 = a1[113];
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = a1[113];
    }
    v5 = a1[112];
    *(_QWORD *)&v6 = v5;
    *((_QWORD *)&v6 + 1) = v4;
    v7 = 0LL;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = a1[112];
      v4 = a1[113];
    }
    *(_QWORD *)&v7 = v5;
    *((_QWORD *)&v7 + 1) = v4;
    return sub_1800E1200(a1 + 44, &v7, &v6);
  }
  return result;
}
