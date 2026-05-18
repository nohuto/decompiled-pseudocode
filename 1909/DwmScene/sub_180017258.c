/*
 * XREFs of sub_180017258 @ 0x180017258
 * Callers:
 *     sub_1800172F8 @ 0x1800172F8 (sub_1800172F8.c)
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 *     sub_18010D9EC @ 0x18010D9EC (sub_18010D9EC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BBB8 @ 0x18001BBB8 (sub_18001BBB8.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 *__fastcall sub_180017258(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rax
  void *v7; // rdi
  size_t v8; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v5 = sub_18001BBB8(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
    *a1 = v5;
    a1[1] = v5;
    v6 = (void *)*a1;
    a1[2] = *a1 + 4 * v4;
    v7 = v6;
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove(v6, *(const void **)a2, v8);
    a1[1] = (__int64)v7 + v8;
  }
  return a1;
}
