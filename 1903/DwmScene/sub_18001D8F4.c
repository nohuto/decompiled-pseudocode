/*
 * XREFs of sub_18001D8F4 @ 0x18001D8F4
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180076EC4 @ 0x180076EC4 (sub_180076EC4.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_1800C21A0 @ 0x1800C21A0 (sub_1800C21A0.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18011DE40 @ 0x18011DE40 (sub_18011DE40.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001D8F4(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  sub_18011DE40(v4);
  a1[2] = 0LL;
  a1[3] = 0LL;
  sub_18000F3F4(a1, (__int64)v4);
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
