/*
 * XREFs of sub_180103750 @ 0x180103750
 * Callers:
 *     sub_180104CCC @ 0x180104CCC (sub_180104CCC.c)
 *     sub_180104F84 @ 0x180104F84 (sub_180104F84.c)
 *     sub_18010522C @ 0x18010522C (sub_18010522C.c)
 *     sub_1801057F0 @ 0x1801057F0 (sub_1801057F0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     sub_180031CA0 @ 0x180031CA0 (sub_180031CA0.c)
 */

__int64 __fastcall sub_180103750(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  _DWORD *v12; // rax
  _OWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx

  result = a1[1];
  v5 = (result - *a1) >> 4;
  v6 = (a1[2] - *a1) >> 4;
  if ( a2 <= v6 )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
        a1[1] = *a1 + 16 * a2;
    }
    else
    {
      v16 = a2 - v5;
      if ( a2 != v5 )
      {
        do
        {
          *(_QWORD *)result = 0LL;
          *(_DWORD *)(result + 8) = 0;
          *(_DWORD *)(result + 12) = 1065353216;
          result += 16LL;
          --v16;
        }
        while ( v16 );
      }
      a1[1] = result;
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = v6 >> 1;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v8 = v7 + v6;
      if ( v7 + v6 < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    v9 = sub_18000F60C((__int64)a1, v8);
    v10 = (__int64)v9;
    v11 = a2 - v5;
    if ( a2 != v5 )
    {
      v12 = &v9[2 * v5 + 1];
      do
      {
        *((_QWORD *)v12 - 1) = 0LL;
        *v12 = 0;
        v12[1] = 1065353216;
        v12 += 4;
        --v11;
      }
      while ( v11 );
    }
    v13 = (_OWORD *)a1[1];
    v14 = (_OWORD *)*a1;
    if ( (_OWORD *)*a1 != v13 )
    {
      v15 = v10 - (_QWORD)v14;
      do
      {
        *(_OWORD *)((char *)v14 + v15) = *v14;
        ++v14;
      }
      while ( v14 != v13 );
    }
    return sub_180031CA0(a1, v10, a2, v8);
  }
  return result;
}
