/*
 * XREFs of sub_180027FB8 @ 0x180027FB8
 * Callers:
 *     sub_180028198 @ 0x180028198 (sub_180028198.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800280C4 @ 0x1800280C4 (sub_1800280C4.c)
 *     sub_18002B964 @ 0x18002B964 (sub_18002B964.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180027FB8(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-10h]

  *(_QWORD *)&v9 = a1;
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18000F444(v10, a3);
  v9 = *a2;
  v5 = sub_18002B964(v11, &v9, v10);
  sub_1800280C4(a1, v5);
  if ( v12 >= 0x10 )
  {
    v6 = v11[0];
    if ( v12 + 1 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v11[0] - 8LL);
      if ( (unsigned __int64)(v11[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v12 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v7 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 24) = v7;
  return result;
}
