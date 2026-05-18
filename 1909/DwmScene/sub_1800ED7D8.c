/*
 * XREFs of sub_1800ED7D8 @ 0x1800ED7D8
 * Callers:
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 *     sub_1800F01C0 @ 0x1800F01C0 (sub_1800F01C0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

char *__fastcall sub_1800ED7D8(void **a1, const void *a2, __int64 a3)
{
  size_t v5; // rsi
  unsigned __int64 v6; // rbx
  char *result; // rax
  _QWORD *v8; // rax
  char *v9; // rax
  char *v10; // rbx

  v5 = a3 - (_QWORD)a2;
  v6 = (a3 - (__int64)a2) >> 3;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v8 = sub_18001BB48((__int64)a1, (a3 - (__int64)a2) >> 3);
    *a1 = v8;
    a1[1] = v8;
    v9 = (char *)*a1;
    a1[2] = (char *)*a1 + 8 * v6;
    v10 = v9;
    memmove(v9, a2, v5);
    result = &v10[v5];
    a1[1] = &v10[v5];
  }
  return result;
}
