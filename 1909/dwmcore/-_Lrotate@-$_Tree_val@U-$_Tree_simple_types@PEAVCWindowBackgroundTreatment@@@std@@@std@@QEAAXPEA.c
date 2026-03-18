/*
 * XREFs of ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18001A5F0
 * Callers:
 *     ??$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@1@_NPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@1@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A460 (--$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@@Z @ 0x180166A24 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAPEAU.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>::_Lrotate(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = *v2;
  if ( !*(_BYTE *)(*v2 + 25LL) )
    *(_QWORD *)(*v2 + 8LL) = a2;
  v2[1] = *(_QWORD *)(a2 + 8);
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = *(_QWORD **)(a2 + 8);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
  }
  *v2 = a2;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
