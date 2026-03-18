/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@0@Z @ 0x1801987C8
 * Callers:
 *     ??$emplace_front@AEAIAEAI@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAAAEAU?$pair@$$CBII@1@AEAI0@Z @ 0x180197A34 (--$emplace_front@AEAIAEAI@-$list@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@Q.c)
 *     ??0DataSourceProxy@@QEAA@XZ @ 0x180250DB0 (--0DataSourceProxy@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,unsigned int>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
