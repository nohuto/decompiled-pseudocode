/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@2@PEAU32@0@Z @ 0x1800141E4
 * Callers:
 *     ??$_Buynode@KH@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0$$QEAK$$QEAH@Z @ 0x1800141A8 (--$_Buynode@KH@-$_List_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@QEAAPEA.c)
 *     ??0KeyboardModifierState@@AEAA@XZ @ 0x180018684 (--0KeyboardModifierState@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,unsigned long>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x18uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
