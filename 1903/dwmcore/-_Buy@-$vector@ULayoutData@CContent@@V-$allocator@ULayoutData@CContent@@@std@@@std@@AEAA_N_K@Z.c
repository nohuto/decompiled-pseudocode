/*
 * XREFs of ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x1801CB7C0
 * Callers:
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801CAEF0 (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char __fastcall std::vector<CContent::LayoutData>::_Buy(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  __int64 v5; // rax

  result = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x666666666666666LL )
      std::_Xlength_error((const char *)a1);
    v4 = 40 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(40 * a2);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v4 + v5;
    return 1;
  }
  return result;
}
