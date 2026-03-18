/*
 * XREFs of _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800DA124
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180069B5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180069D54 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180069D54.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1800F1630 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800DA240 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear @ 0x1800DA29C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800DA29C.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi
  void *v7; // rcx
  void **v8; // rbx
  _QWORD *v9; // rax
  _BYTE *v10; // rsi
  _BYTE *v11; // rdi

  v1 = a1 + 55;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear(a1 + 55);
  std::_Deallocate<16,0>((void *)v1[1], 0x30uLL);
  v3 = a1 + 53;
  v4 = (_QWORD *)a1[53];
  v5 = (_BYTE *)v4[1];
  v6 = v5;
  if ( !v5[25] )
  {
    do
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        a1 + 53,
        *((_QWORD *)v6 + 2));
      v6 = *(_BYTE **)v6;
      operator delete(v5, 0x20uLL);
      v5 = v6;
    }
    while ( !v6[25] );
    v4 = (_QWORD *)*v3;
  }
  v4[1] = v4;
  *(_QWORD *)*v3 = *v3;
  *(_QWORD *)(*v3 + 16LL) = *v3;
  v7 = (void *)*v3;
  a1[54] = 0LL;
  std::_Deallocate<16,0>(v7, 0x20uLL);
  v8 = (void **)(a1 + 51);
  v9 = (_QWORD *)a1[51];
  v10 = (_BYTE *)v9[1];
  v11 = v10;
  if ( !v10[25] )
  {
    do
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        a1 + 51,
        *((_QWORD *)v11 + 2));
      v11 = *(_BYTE **)v11;
      operator delete(v10, 0x20uLL);
      v10 = v11;
    }
    while ( !v11[25] );
    v9 = *v8;
  }
  v9[1] = v9;
  *(_QWORD *)*v8 = *v8;
  *((_QWORD *)*v8 + 2) = *v8;
  a1[52] = 0LL;
  std::_Deallocate<16,0>(*v8, 0x20uLL);
}
