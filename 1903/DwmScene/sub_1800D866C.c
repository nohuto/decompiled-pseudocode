/*
 * XREFs of sub_1800D866C @ 0x1800D866C
 * Callers:
 *     sub_1800D7BFC @ 0x1800D7BFC (sub_1800D7BFC.c)
 *     sub_1800D7D30 @ 0x1800D7D30 (sub_1800D7D30.c)
 * Callees:
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800D866C(__int128 *a1, _QWORD *a2)
{
  __int128 v2; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _QWORD *result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v2 = *a1;
  v5 = a1[1];
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 15LL;
  v12 = v2;
  *(_BYTE *)a1 = 0;
  v6 = a1[2];
  v13 = v5;
  v14 = v6;
  sub_180017CD4(a1, (__int64)a2);
  *((_QWORD *)a1 + 4) = a2[4];
  *((_QWORD *)a1 + 5) = a2[5];
  result = sub_180017CD4(a2, (__int64)&v12);
  v8 = *((_QWORD *)&v13 + 1);
  *((_OWORD *)a2 + 2) = v14;
  if ( v8 >= 0x10 )
  {
    v9 = v12;
    v10 = v8 + 1;
    if ( v10 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v12 - 8);
      v11 = v10 + 39;
      if ( (unsigned __int64)(v12 - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v11);
        __debugbreak();
      }
    }
    return (_QWORD *)j_j__o_free(v9);
  }
  return result;
}
