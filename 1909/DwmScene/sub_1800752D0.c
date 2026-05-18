/*
 * XREFs of sub_1800752D0 @ 0x1800752D0
 * Callers:
 *     sub_18007E0AC @ 0x18007E0AC (sub_18007E0AC.c)
 *     sub_18007E788 @ 0x18007E788 (sub_18007E788.c)
 *     sub_1800AB478 @ 0x1800AB478 (sub_1800AB478.c)
 *     sub_1800B2B20 @ 0x1800B2B20 (sub_1800B2B20.c)
 *     sub_1800B2B48 @ 0x1800B2B48 (sub_1800B2B48.c)
 *     sub_1800B2CEC @ 0x1800B2CEC (sub_1800B2CEC.c)
 *     sub_1800B2E28 @ 0x1800B2E28 (sub_1800B2E28.c)
 *     sub_1800E99F8 @ 0x1800E99F8 (sub_1800E99F8.c)
 *     sub_1800E9D74 @ 0x1800E9D74 (sub_1800E9D74.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800752D0(_QWORD *a1, char a2)
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
        JUMPOUT(0x180075349LL);
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
