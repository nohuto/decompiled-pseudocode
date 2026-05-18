/*
 * XREFs of sub_18010B758 @ 0x18010B758
 * Callers:
 *     sub_18010B89C @ 0x18010B89C (sub_18010B89C.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 *     sub_18010BA58 @ 0x18010BA58 (sub_18010BA58.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

_QWORD *__fastcall sub_18010B758(_QWORD *a1, unsigned __int64 a2)
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
    v4 = sub_18000F60C((__int64)a1, a2);
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
