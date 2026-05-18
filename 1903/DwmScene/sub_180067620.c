/*
 * XREFs of sub_180067620 @ 0x180067620
 * Callers:
 *     sub_180069738 @ 0x180069738 (sub_180069738.c)
 *     sub_180069B60 @ 0x180069B60 (sub_180069B60.c)
 *     sub_180069FCC @ 0x180069FCC (sub_180069FCC.c)
 *     sub_18007E41C @ 0x18007E41C (sub_18007E41C.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 *     sub_18007F3C4 @ 0x18007F3C4 (sub_18007F3C4.c)
 *     sub_1800D7724 @ 0x1800D7724 (sub_1800D7724.c)
 *     sub_1800DA02C @ 0x1800DA02C (sub_1800DA02C.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180067620(_QWORD *a1, char a2)
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
        JUMPOUT(0x180067699LL);
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
