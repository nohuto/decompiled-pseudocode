/*
 * XREFs of sub_1800B8E18 @ 0x1800B8E18
 * Callers:
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_180104F84 @ 0x180104F84 (sub_180104F84.c)
 *     sub_1801057F0 @ 0x1801057F0 (sub_1801057F0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800261E8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 *__fastcall sub_1800B8E18(__int64 *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rdi
  __int64 *v6; // rbx
  size_t v7; // rax
  char *v8; // r9
  void *v9; // rsi

  v4 = a2[2];
  v5 = a4;
  v6 = a1;
  if ( v4 < a3 )
    std::vector<void *>::_Xlen();
  v7 = v4 - a3;
  if ( v7 < a4 )
    v5 = v7;
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v8 = (char *)a2 + a3;
  if ( v5 > a1[3] )
    return sub_18000E168(a1, v5, 0LL, v8);
  v9 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v9 = (void *)*a1;
  a1[2] = v5;
  memmove(v9, v8, v5);
  *((_BYTE *)v9 + v5) = 0;
  return v6;
}
