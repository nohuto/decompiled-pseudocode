/*
 * XREFs of sub_18010D838 @ 0x18010D838
 * Callers:
 *     sub_180110120 @ 0x180110120 (sub_180110120.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800699C0 @ 0x1800699C0 (sub_1800699C0.c)
 *     sub_18010D8DC @ 0x18010D8DC (sub_18010D8DC.c)
 */

_UNKNOWN **__fastcall sub_18010D838(_QWORD *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = (a3 - a2) >> 6;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v8 = sub_1800699C0((__int64)a1, (a3 - a2) >> 6);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = *a1 + (v7 << 6);
    try
    {
      result = (_UNKNOWN **)sub_18010D8DC(a2, a3);
      a1[1] = result;
    }
    catch ( ... )
    {
      sub_1800A9FB4((__int64)a1);
      throw;
    }
  }
  return result;
}
