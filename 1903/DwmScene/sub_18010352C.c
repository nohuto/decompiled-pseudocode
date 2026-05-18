/*
 * XREFs of sub_18010352C @ 0x18010352C
 * Callers:
 *     sub_180105EF4 @ 0x180105EF4 (sub_180105EF4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BAA8 @ 0x18001BAA8 (sub_18001BAA8.c)
 *     sub_18003D6F0 @ 0x18003D6F0 (sub_18003D6F0.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

unsigned __int64 __fastcall sub_18010352C(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  size_t v10; // rbx
  _QWORD *v11; // [rsp+30h] [rbp-28h]

  v4 = *(_BYTE **)(a1 + 8);
  v5 = *(_BYTE **)a1;
  v6 = (v4 - v5) >> 2;
  result = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 2;
  if ( a2 <= result )
  {
    if ( a2 <= v6 )
    {
      if ( a2 == v6 )
        return result;
      result = (unsigned __int64)&v5[4 * a2];
    }
    else
    {
      v10 = 4 * (a2 - v6);
      memset(v4, 0, v10);
      result = (unsigned __int64)&v4[v10];
    }
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v8 = result >> 1;
    if ( result <= 0x3FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v9 = v8 + result;
      if ( v8 + result < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v11 = sub_18001BAA8(a1, v9);
    memset((char *)v11 + 4 * v6, 0, 4 * (a2 - v6));
    memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return sub_18003D6F0((__int64 *)a1, (__int64)v11, a2, v9);
  }
  return result;
}
