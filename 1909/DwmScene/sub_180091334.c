/*
 * XREFs of sub_180091334 @ 0x180091334
 * Callers:
 *     sub_180091510 @ 0x180091510 (sub_180091510.c)
 *     sub_180091608 @ 0x180091608 (sub_180091608.c)
 *     sub_18009185C @ 0x18009185C (sub_18009185C.c)
 *     sub_1800A27EC @ 0x1800A27EC (sub_1800A27EC.c)
 *     sub_1800F2E5C @ 0x1800F2E5C (sub_1800F2E5C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BBB8 @ 0x18001BBB8 (sub_18001BBB8.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

char *__fastcall sub_180091334(void **a1, const void *a2, __int64 a3)
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
    v8 = sub_18001BBB8((__int64)a1, (a3 - (__int64)a2) >> 2);
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
