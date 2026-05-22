/*
 * XREFs of ??$?0AEAY0CI@$$CBGAEAM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0CI@$$CBGAEAM@Z @ 0x1800256CC
 * Callers:
 *     _lambda_c0c3d577aad3ca08d159cb5956f28f0e_::operator() @ 0x180025484 (_lambda_c0c3d577aad3ca08d159cb5956f28f0e_--operator().c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x180025854 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        char *a1,
        _WORD *Src,
        _DWORD *a3)
{
  unsigned __int64 v6; // rdx
  char *v8; // rsi
  __int64 v9; // rbx

  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  if ( v6 <= *((_QWORD *)a1 + 3) )
  {
    v8 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v8 = *(char **)a1;
    *((_QWORD *)a1 + 2) = v6;
    v9 = 2 * v6;
    memmove_0(v8, Src, 2 * v6);
    *(_WORD *)&v8[v9] = 0;
  }
  else
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(a1);
  }
  *((_DWORD *)a1 + 8) = *a3;
  a1[36] = 2;
  return a1;
}
