/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D5308
 * Callers:
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x1800D4EDC (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     ??$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x1800D52A0 (--$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_List_buy@U-$pair@$$CBUtagMsgRout.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
