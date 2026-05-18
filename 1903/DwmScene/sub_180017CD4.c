/*
 * XREFs of sub_180017CD4 @ 0x180017CD4
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 *     sub_180043040 @ 0x180043040 (sub_180043040.c)
 *     sub_1800D7864 @ 0x1800D7864 (sub_1800D7864.c)
 *     sub_1800D7CB4 @ 0x1800D7CB4 (sub_1800D7CB4.c)
 *     sub_1800D804C @ 0x1800D804C (sub_1800D804C.c)
 *     sub_1800D81E8 @ 0x1800D81E8 (sub_1800D81E8.c)
 *     sub_1800D866C @ 0x1800D866C (sub_1800D866C.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180017CD4(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  if ( a1 != (_QWORD *)a2 )
  {
    v4 = a1[3];
    if ( v4 >= 0x10 )
    {
      v5 = *a1;
      v6 = v4 + 1;
      if ( v6 >= 0x1000 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        v8 = v6 + 39;
        v9 = v5 - v7;
        if ( (unsigned __int64)(v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, v8);
          JUMPOUT(0x180017D5ALL);
        }
        v5 = v7;
      }
      j_j__o_free(v5);
    }
    a1[2] = 0LL;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
  }
  return a1;
}
