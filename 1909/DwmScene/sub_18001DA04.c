/*
 * XREFs of sub_18001DA04 @ 0x18001DA04
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_180076FD4 @ 0x180076FD4 (sub_180076FD4.c)
 *     sub_180079C94 @ 0x180079C94 (sub_180079C94.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_1800C22B0 @ 0x1800C22B0 (sub_1800C22B0.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18011DF50 @ 0x18011DF50 (sub_18011DF50.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001DA04(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  sub_18011DF50(v4);
  a1[2] = 0LL;
  a1[3] = 0LL;
  sub_18000F444(a1, (__int64)v4);
  if ( v5 >= 0x10 )
  {
    v2 = v4[0];
    if ( v5 + 1 >= 0x1000 )
    {
      v2 = *(_QWORD *)(v4[0] - 8LL);
      if ( (unsigned __int64)(v4[0] - v2 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v2, v5 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v2);
  }
  return a1;
}
