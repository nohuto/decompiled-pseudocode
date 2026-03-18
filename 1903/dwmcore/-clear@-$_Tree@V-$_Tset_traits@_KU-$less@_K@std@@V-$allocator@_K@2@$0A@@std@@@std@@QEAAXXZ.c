/*
 * XREFs of ?clear@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800725E0
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180072148 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x180072818 (-_Erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IEAAXPEAU-$_.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::clear(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Erase(
    a1,
    *(_QWORD *)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v1;
  *(_QWORD *)*a1 = v1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v1;
  a1[1] = 0LL;
  return result;
}
