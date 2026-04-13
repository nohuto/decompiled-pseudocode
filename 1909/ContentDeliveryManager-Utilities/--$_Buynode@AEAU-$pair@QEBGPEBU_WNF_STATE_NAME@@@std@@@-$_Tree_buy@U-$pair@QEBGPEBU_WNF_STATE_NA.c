/*
 * XREFs of ??$_Buynode@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18007CC6C
 * Callers:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18007C8E8 (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@XZ @ 0x18007C988 (-_Buynode0@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V-$allocator@U-$pair@QEBGPEBU_WNF_.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &>(
        _QWORD *a1,
        _OWORD *a2)
{
  _QWORD *result; // rax

  result = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  *((_OWORD *)result + 2) = *a2;
  return result;
}
