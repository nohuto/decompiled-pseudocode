/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@IV?$allocator@I@std@@@std@@@std@@QEAAPEAU?$_List_node@IPEAX@2@PEAU32@0@Z @ 0x180033804
 * Callers:
 *     ??$_Buynode@AEBI@?$_List_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_List_node@IPEAX@1@PEAU21@0AEBI@Z @ 0x180030464 (--$_Buynode@AEBI@-$_List_buy@IV-$allocator@I@std@@@std@@QEAAPEAU-$_List_node@IPEAX@1@PEAU21@0AEB.c)
 *     ??0?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@I@1@@Z @ 0x180030C6C (--0-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allocator.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<unsigned int>>::_Buynode0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
