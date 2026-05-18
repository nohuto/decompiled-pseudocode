/*
 * XREFs of sub_180017D44 @ 0x180017D44
 * Callers:
 *     sub_180014D28 @ 0x180014D28 (sub_180014D28.c)
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_180043150 @ 0x180043150 (sub_180043150.c)
 *     sub_1800D7974 @ 0x1800D7974 (sub_1800D7974.c)
 *     sub_1800D7DC4 @ 0x1800D7DC4 (sub_1800D7DC4.c)
 *     sub_1800D815C @ 0x1800D815C (sub_1800D815C.c)
 *     sub_1800D82F8 @ 0x1800D82F8 (sub_1800D82F8.c)
 *     sub_1800D877C @ 0x1800D877C (sub_1800D877C.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800E17A8 @ 0x1800E17A8 (sub_1800E17A8.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180017D44(_QWORD *a1, __int64 a2)
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
          JUMPOUT(0x180017DCALL);
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
