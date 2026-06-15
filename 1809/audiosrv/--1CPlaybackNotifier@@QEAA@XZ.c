/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x1800EF940
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x18006F3B0 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005211C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@2@0@Z @ 0x1800F0494 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 */

void __fastcall CPlaybackNotifier::~CPlaybackNotifier(void **this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::erase(
    this + 10,
    &v2,
    *(_QWORD *)this[10]);
  std::_Deallocate<16,0>(this[10], (const struct std::nothrow_t *)0x48);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
