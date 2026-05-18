/*
 * XREFs of sub_180067C48 @ 0x180067C48
 * Callers:
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 * Callees:
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 *     sub_180066EB4 @ 0x180066EB4 (sub_180066EB4.c)
 *     sub_180066F88 @ 0x180066F88 (sub_180066F88.c)
 *     sub_180067020 @ 0x180067020 (sub_180067020.c)
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     sub_1800D59C0 @ 0x1800D59C0 (sub_1800D59C0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180067C48(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[19]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v11[136]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+170h] [rbp+68h] BYREF

  v8[1] = -2LL;
  v8[2] = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[51] < a1[60] )
  {
    sub_180067020((__int64)v11);
    v4 = sub_1800D59C0(a1[55], a1[51], v11);
    if ( v4 )
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((v4 - 1) & 0xFFFFFFFD) == 0 )
        {
          sub_180069F04(v12, v8, *(_QWORD *)v12[0]);
          j_j__o_free(v12[0]);
          return a2;
        }
      }
      else
      {
        memset(v10, 0, sizeof(v10));
        v6 = sub_180067020((__int64)v10);
        v7 = a2[1];
        if ( a2[2] == v7 )
        {
          sub_180066090(a2, a2[1]);
        }
        else
        {
          sub_180066EB4(v7, v6);
          a2[1] += 152LL;
        }
        sub_180069F04(&v10[17], v9, *(_QWORD *)v10[17]);
        j_j__o_free(v10[17]);
      }
    }
    else if ( a2[2] == a2[1] )
    {
      sub_180065DC0(a2, a2[1]);
    }
    else
    {
      sub_180066F88(a2[1], (__int64)v11);
      a2[1] += 152LL;
    }
    ++a1[51];
    sub_180069F04(v12, v8, *(_QWORD *)v12[0]);
    j_j__o_free(v12[0]);
  }
  return a2;
}
