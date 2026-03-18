/*
 * XREFs of ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800D7E4C
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x1800013D0 (_anonymous_namespace_--_dynamic_initializer_for___currentSequence__.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@XZ @ 0x18003DFCC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@.c)
 */

__int64 *__fastcall std::set<unsigned __int64>::set<unsigned __int64>(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode();
  return a1;
}
