/*
 * XREFs of std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800726C4
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800C671C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800C6890 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800C6890.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800CC7A4 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x18007276C (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x180072874 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(
        void **a1,
        void **a2,
        __int64 a3)
{
  void **v4; // rdi
  void **result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a1 != a2 )
  {
    v8 = a3;
    v4 = a1 + 53;
    do
    {
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase(
        v4 + 2,
        &v8,
        *(_QWORD *)v4[3],
        v4[3]);
      operator delete(v4[3], 0x38uLL);
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
        v4,
        &v6,
        *(_QWORD *)*v4,
        *v4);
      operator delete(*v4, 0x28uLL);
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
        v4 - 2,
        &v7,
        *(_QWORD *)*(v4 - 2),
        *(v4 - 2));
      operator delete(*(v4 - 2), 0x28uLL);
      v4 += 60;
      result = v4 - 53;
    }
    while ( v4 - 53 != a2 );
  }
  return result;
}
