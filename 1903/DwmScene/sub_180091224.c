/*
 * XREFs of sub_180091224 @ 0x180091224
 * Callers:
 *     sub_180091400 @ 0x180091400 (sub_180091400.c)
 *     sub_1800914F8 @ 0x1800914F8 (sub_1800914F8.c)
 *     sub_18009174C @ 0x18009174C (sub_18009174C.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     sub_1800F2D4C @ 0x1800F2D4C (sub_1800F2D4C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BAA8 @ 0x18001BAA8 (sub_18001BAA8.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

char *__fastcall sub_180091224(void **a1, const void *a2, __int64 a3)
{
  size_t v5; // rsi
  unsigned __int64 v6; // rbx
  char *result; // rax
  _QWORD *v8; // rax
  char *v9; // rax
  char *v10; // rbx

  v5 = a3 - (_QWORD)a2;
  v6 = (a3 - (__int64)a2) >> 2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v8 = sub_18001BAA8((__int64)a1, (a3 - (__int64)a2) >> 2);
    *a1 = v8;
    a1[1] = v8;
    v9 = (char *)*a1;
    a1[2] = (char *)*a1 + 4 * v6;
    v10 = v9;
    memmove(v9, a2, v5);
    result = &v10[v5];
    a1[1] = &v10[v5];
  }
  return result;
}
