/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x1800383C8
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180038178 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x180038218 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Erase @ 0x1800384C0 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0340 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180171654 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_180171654.c)
 */

_QWORD *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD **v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // r10
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  __int64 *v12; // r15
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v4 = (_QWORD **)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 8);
  v7 = a3;
  if ( a3 == (_QWORD *)*v6 && a4 == v6 )
  {
    v10 = (__int64 *)v6[1];
    v11 = *(_QWORD **)(a1 + 8);
    v12 = v10;
    if ( !*((_BYTE *)v10 + 25) )
    {
      do
      {
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Erase(
          a1,
          v12[2]);
        v12 = (__int64 *)*v12;
        std::_Deallocate<16,0>(v10, 56LL);
        v10 = v12;
      }
      while ( !*((_BYTE *)v12 + 25) );
      v11 = *v4;
    }
    v11[1] = v6;
    **v4 = v6;
    (*v4)[2] = v6;
    v4[1] = 0LL;
    *a2 = **v4;
  }
  else
  {
    while ( v7 != a4 )
    {
      std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v18);
      v17 = v14;
      std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v17);
      v16 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract(
              v4,
              v15);
      std::_Deallocate<16,0>(v16, 56LL);
      v7 = v18;
    }
    *a2 = v7;
  }
  return a2;
}
