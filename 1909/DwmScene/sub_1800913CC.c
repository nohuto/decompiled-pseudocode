/*
 * XREFs of sub_1800913CC @ 0x1800913CC
 * Callers:
 *     sub_180091700 @ 0x180091700 (sub_180091700.c)
 *     sub_180091950 @ 0x180091950 (sub_180091950.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BBB8 @ 0x18001BBB8 (sub_18001BBB8.c)
 */

_QWORD *__fastcall sub_1800913CC(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *i; // rcx

  v4 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v6 = sub_18001BBB8((__int64)a1, a2);
    *a1 = v6;
    a1[1] = v6;
    v7 = (_DWORD *)*a1;
    a1[2] = *a1 + 4 * v4;
    for ( i = v7; v4; --v4 )
      *i++ = *a3;
    a1[1] = i;
  }
  return a1;
}
