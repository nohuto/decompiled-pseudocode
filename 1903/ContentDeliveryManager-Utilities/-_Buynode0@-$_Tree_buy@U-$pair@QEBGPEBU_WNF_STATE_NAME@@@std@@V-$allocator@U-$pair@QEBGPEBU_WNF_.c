/*
 * XREFs of ?_Buynode0@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@XZ @ 0x18007C7E8
 * Callers:
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18007C30C (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Buynode@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18007CACC (--$_Buynode@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF38 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode0(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  if ( !result )
    std::_Xbad_alloc();
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
