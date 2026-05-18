/*
 * XREFs of sub_1800751C0 @ 0x1800751C0
 * Callers:
 *     sub_18007DF9C @ 0x18007DF9C (sub_18007DF9C.c)
 *     sub_18007E678 @ 0x18007E678 (sub_18007E678.c)
 *     sub_1800AB368 @ 0x1800AB368 (sub_1800AB368.c)
 *     sub_1800B2A10 @ 0x1800B2A10 (sub_1800B2A10.c)
 *     sub_1800B2A38 @ 0x1800B2A38 (sub_1800B2A38.c)
 *     sub_1800B2BDC @ 0x1800B2BDC (sub_1800B2BDC.c)
 *     sub_1800B2D18 @ 0x1800B2D18 (sub_1800B2D18.c)
 *     sub_1800E98E8 @ 0x1800E98E8 (sub_1800E98E8.c)
 *     sub_1800E9C64 @ 0x1800E9C64 (sub_1800E9C64.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800751C0(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[4];
  if ( v4 >= 0x10 )
  {
    v5 = a1[1];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x180075239LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[3] = 0LL;
  a1[4] = 15LL;
  *((_BYTE *)a1 + 8) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
