/*
 * XREFs of _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800CC7A4
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x1800CC6B0 (_anonymous_namespace_--SendFramesReports.c)
 *     _anonymous_namespace_::State::_State @ 0x180172C38 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800726C4 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Erase @ 0x18007296C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800CC904 (-_Erase@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall anonymous_namespace_::FramesReport::_FramesReport(__int64 a1)
{
  void **v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rbx
  void **v7; // rdi
  void **v8; // rcx

  v1 = (void **)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 160);
  std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Erase(
    a1 + 160,
    *(_QWORD *)(v3 + 8));
  *((_QWORD *)*v1 + 1) = v3;
  *(_QWORD *)*v1 = v3;
  *((_QWORD *)*v1 + 2) = v3;
  v1[1] = 0LL;
  std::_Deallocate<16,0>(*v1, 0x40uLL);
  v4 = *(_QWORD *)(a1 + 144);
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Erase(
    a1 + 136,
    *(__int64 **)(v4 + 8));
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL) = v4;
  **(_QWORD **)(a1 + 144) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) = v4;
  *(_QWORD *)(a1 + 152) = 0LL;
  std::_Deallocate<16,0>(*(void **)(a1 + 144), 0x38uLL);
  v6 = *(void ***)(a1 + 112);
  if ( v6 )
  {
    v7 = *(void ***)(a1 + 120);
    if ( v6 != v7 )
    {
      do
      {
        if ( *v6 )
          operator delete(*v6, 0x70uLL);
        ++v6;
      }
      while ( v6 != v7 );
      v6 = *(void ***)(a1 + 112);
    }
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 128) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v8 = *(void ***)(a1 + 16);
  if ( v8 )
  {
    std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v8, *(void ***)(a1 + 24), v5);
    std::_Deallocate<16,0>(*(void **)(a1 + 16), 480 * ((*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) / 480LL));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
