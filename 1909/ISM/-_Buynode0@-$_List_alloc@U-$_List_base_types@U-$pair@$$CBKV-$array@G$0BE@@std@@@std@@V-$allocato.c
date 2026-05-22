/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A4058
 * Callers:
 *     ??$_Buynode@AEBKV?$array@G$0BE@@std@@@?$_List_buy@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@1@PEAU21@0AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800A32A8 (--$_Buynode@AEBKV-$array@G$0BE@@std@@@-$_List_buy@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@V-$all.c)
 *     ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A358C (--0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
