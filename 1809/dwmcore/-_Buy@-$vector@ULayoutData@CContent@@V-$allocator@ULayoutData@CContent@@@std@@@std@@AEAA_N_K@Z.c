/*
 * XREFs of ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x18019550C
 * Callers:
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x180194DC8 (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<CContent::LayoutData>::_Buy(__int64 *a1, unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  __int64 v5; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x666666666666666LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v4 = 40 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(40 * a2);
    *a1 = v5;
    a1[1] = v5;
    a1[2] = v4 + v5;
    return 1;
  }
  return result;
}
