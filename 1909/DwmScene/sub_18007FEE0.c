/*
 * XREFs of sub_18007FEE0 @ 0x18007FEE0
 * Callers:
 *     sub_1800813F0 @ 0x1800813F0 (sub_1800813F0.c)
 *     sub_180107B74 @ 0x180107B74 (sub_180107B74.c)
 *     sub_180107C64 @ 0x180107C64 (sub_180107C64.c)
 * Callees:
 *     sub_180080820 @ 0x180080820 (sub_180080820.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18007FEE0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a2 > 0x100 )
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
      v4 = a2;
    sub_180080820(&v7, v4);
    v5 = v8;
    if ( v8 <= 0x100 )
    {
      j__o_free(v7);
      a1[1] = 256LL;
      *a1 = a1 + 2;
    }
    else
    {
      *a1 = v7;
      a1[1] = v5;
    }
  }
  else
  {
    a1[1] = a2;
    *a1 = a1 + 2;
  }
  return a1;
}
