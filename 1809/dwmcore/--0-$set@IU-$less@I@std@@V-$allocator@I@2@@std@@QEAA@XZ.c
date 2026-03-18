/*
 * XREFs of ??0?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18007AEF8
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x180001160 (_anonymous_namespace_--_dynamic_initializer_for___currentSequence__.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x1800C531C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std.c)
 */

_QWORD *__fastcall std::set<unsigned int>::set<unsigned int>(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
  return a1;
}
