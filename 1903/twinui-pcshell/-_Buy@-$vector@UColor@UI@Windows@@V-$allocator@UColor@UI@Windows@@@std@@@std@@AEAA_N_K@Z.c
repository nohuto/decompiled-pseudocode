/*
 * XREFs of ?_Buy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z @ 0x180402A44
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEBUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x180402730 (--$_Range_construct_or_tidy@PEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UCol.c)
 *     ??$_Assign_range@PEAUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x180402AB4 (--$_Assign_range@PEAUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180402EF4 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@_KAEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x180402F9C (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@_KAEBV-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<Windows::UI::Color>::_Buy(_QWORD *a1, unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  _QWORD *v5; // rax

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = 4 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(4 * a2);
    *a1 = v5;
    a1[1] = v5;
    result = 1;
    a1[2] = v4 + *a1;
  }
  return result;
}
