/*
 * XREFs of sub_1800171E8 @ 0x1800171E8
 * Callers:
 *     sub_180017288 @ 0x180017288 (sub_180017288.c)
 *     sub_1800F341C @ 0x1800F341C (sub_1800F341C.c)
 *     sub_18010D8DC @ 0x18010D8DC (sub_18010D8DC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BAA8 @ 0x18001BAA8 (sub_18001BAA8.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 *__fastcall sub_1800171E8(__int64 *a1, __int64 a2)
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
    v5 = sub_18001BAA8(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
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
