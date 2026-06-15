/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x1800FB414
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x180074162 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005EC24 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FBA98 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPlaybackNotifier::~CPlaybackNotifier(void **this)
{
  char *v2; // rdi
  _QWORD *v3; // rbx

  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  v2 = (char *)(this + 10);
  v3 = this[10];
  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Erase(
    this + 10,
    v3[1]);
  *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v3;
  **(_QWORD **)v2 = v3;
  *(_QWORD *)(*(_QWORD *)v2 + 16LL) = v3;
  this[11] = 0LL;
  std::_Deallocate<16,0>(this[10], (const struct std::nothrow_t *)0x48);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
