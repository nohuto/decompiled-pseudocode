/*
 * XREFs of sub_180103378 @ 0x180103378
 * Callers:
 *     sub_1801057F0 @ 0x1801057F0 (sub_1801057F0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F09CC @ 0x1800F09CC (sub_1800F09CC.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall sub_180103378(__int64 *a1, char *a2, char *a3)
{
  char *v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  size_t v21; // r8
  char *result; // rax

  v6 = &a2[-*a1];
  v7 = a1[1] - *a1;
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  if ( v11 < 0x1000 )
  {
    v16 = 0LL;
    if ( v11 )
    {
      v17 = operator new(v11);
      v16 = (signed __int64)v17;
    }
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
    {
      o__invalid_parameter_noinfo_noreturn(v15, v14);
      __debugbreak();
    }
    v16 = ((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v16 - 8) = v13;
  }
  try
  {
    v6[v16] = *a3;
    v18 = a1[1];
    v19 = (const void *)*a1;
    v20 = (char *)v16;
    if ( a2 == (char *)v18 )
    {
      v21 = v18 - (_QWORD)v19;
    }
    else
    {
      memmove((void *)v16, v19, (size_t)&a2[-*a1]);
      v20 = &v6[v16 + 1];
      v21 = a1[1] - (_QWORD)a2;
      v19 = a2;
    }
    memmove(v20, v19, v21);
    sub_1800F09CC(a1, v16, v8, v11);
    result = &v6[*a1];
  }
  catch ( ... )
  {
    std::allocator<char>::deallocate((__int64)a1, v16, v11);
    throw;
  }
  return result;
}
