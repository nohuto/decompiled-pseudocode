/*
 * XREFs of sub_18010B648 @ 0x18010B648
 * Callers:
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 *     sub_18010B838 @ 0x18010B838 (sub_18010B838.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 */

_QWORD *__fastcall sub_18010B648(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rax
  _QWORD *i; // rax

  v2 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_18000F5BC((__int64)a1, a2);
    *a1 = v4;
    a1[1] = v4;
    a1[2] = *a1 + 16 * v2;
    for ( i = (_QWORD *)*a1; v2; --v2 )
    {
      *i = 0LL;
      i[1] = 0LL;
      i += 2;
    }
    a1[1] = i;
  }
  return a1;
}
