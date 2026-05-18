/*
 * XREFs of sub_180067730 @ 0x180067730
 * Callers:
 *     sub_180069848 @ 0x180069848 (sub_180069848.c)
 *     sub_180069C70 @ 0x180069C70 (sub_180069C70.c)
 *     sub_18006A0DC @ 0x18006A0DC (sub_18006A0DC.c)
 *     sub_18007E52C @ 0x18007E52C (sub_18007E52C.c)
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 *     sub_18007F4D4 @ 0x18007F4D4 (sub_18007F4D4.c)
 *     sub_1800D7834 @ 0x1800D7834 (sub_1800D7834.c)
 *     sub_1800DA13C @ 0x1800DA13C (sub_1800DA13C.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180067730(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[5];
  if ( v4 >= 0x10 )
  {
    v5 = a1[2];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x1800677A9LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
