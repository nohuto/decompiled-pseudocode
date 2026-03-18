/*
 * XREFs of ?clear@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800DA0E8
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x1800D9C50 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800DA240 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
    a1,
    *(_QWORD *)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = *a1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
