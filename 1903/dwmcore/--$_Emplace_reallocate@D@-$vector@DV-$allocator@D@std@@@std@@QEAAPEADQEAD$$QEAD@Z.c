/*
 * XREFs of ??$_Emplace_reallocate@D@?$vector@DV?$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z @ 0x1800C72F0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@DV?$allocator@D@std@@@std@@AEAAXQEAD_K1@Z @ 0x1800C73B4 (-_Change_array@-$vector@DV-$allocator@D@std@@@std@@AEAAXQEAD_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800C7418 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<char>::_Emplace_reallocate<char>(const void **a1, _BYTE *a2, char *a3)
{
  signed __int64 v3; // rdi
  signed __int64 v5; // rax
  signed __int64 v8; // r14
  SIZE_T v9; // r15
  char *v10; // rsi
  char *v11; // rcx
  _BYTE *v12; // r8
  _BYTE *v13; // rdx
  size_t v14; // r8

  v3 = a2 - (_BYTE *)*a1;
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( v5 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)0x7FFFFFFFFFFFFFFFLL);
  v8 = v5 + 1;
  v9 = std::vector<char>::_Calculate_growth(a1, v5 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v10[v3] = *a3;
  v11 = v10;
  v12 = a1[1];
  v13 = *a1;
  if ( a2 == v12 )
  {
    v14 = v12 - v13;
  }
  else
  {
    memmove_0(v10, v13, a2 - (_BYTE *)*a1);
    v14 = (_BYTE *)a1[1] - a2;
    v13 = a2;
    v11 = &v10[v3 + 1];
  }
  memmove_0(v11, v13, v14);
  std::vector<char>::_Change_array(a1, v10, v8, v9);
  return (char *)*a1 + v3;
}
