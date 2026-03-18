/*
 * XREFs of _anonymous_namespace_::FramesReport::_FramesReport @ 0x18006C2A4
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x18006C1B0 (_anonymous_namespace_--SendFramesReports.c)
 *     _anonymous_namespace_::State::_State @ 0x180148818 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x18006C378 (-_Erase@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Erase @ 0x18006C3DC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_18006C3DC.c)
 */

void __fastcall anonymous_namespace_::FramesReport::_FramesReport(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = (_QWORD *)(a1 + 160);
  std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Erase(
    a1 + 160,
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL));
  *(_QWORD *)(*v1 + 8LL) = *v1;
  *(_QWORD *)*v1 = *v1;
  *(_QWORD *)(*v1 + 16LL) = *v1;
  v3 = (void *)*v1;
  v1[1] = 0LL;
  std::_Deallocate<16,0>(v3, 0x40uLL);
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Erase(
    a1 + 136,
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL));
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL) = *(_QWORD *)(a1 + 144);
  **(_QWORD **)(a1 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) = *(_QWORD *)(a1 + 144);
  v4 = *(void **)(a1 + 144);
  *(_QWORD *)(a1 + 152) = 0LL;
  std::_Deallocate<16,0>(v4, 0x30uLL);
  v5 = *(void **)(a1 + 112);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*(_QWORD *)(a1 + 128) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy((char **)(a1 + 16));
}
