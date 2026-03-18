/*
 * XREFs of _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180072624
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1800EDC00 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x18007276C (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x180072874 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(_QWORD **a1)
{
  _QWORD **v1; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 55;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase(
    a1 + 55,
    &v4,
    *a1[56],
    a1[56]);
  std::_Deallocate<16,0>(v1[1], 56LL);
  std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
    a1 + 53,
    &v4,
    *a1[53],
    a1[53]);
  std::_Deallocate<16,0>(a1[53], 40LL);
  std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
    a1 + 51,
    &v4,
    *a1[51],
    a1[51]);
  return std::_Deallocate<16,0>(a1[51], 40LL);
}
