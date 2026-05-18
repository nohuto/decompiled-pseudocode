/*
 * XREFs of sub_180103B38 @ 0x180103B38
 * Callers:
 *     sub_18010467C @ 0x18010467C (sub_18010467C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

_QWORD *__fastcall sub_180103B38(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rax
  _DWORD *i; // rax

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
    for ( i = (_DWORD *)*a1; v2; --v2 )
    {
      *i = 0;
      i[1] = 0;
      i[2] = 0;
      i[3] = 1065353216;
      i += 4;
    }
    a1[1] = i;
  }
  return a1;
}
