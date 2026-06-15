/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E20B0
 * Callers:
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$0 @ 0x18006D1D0 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$1 @ 0x18006D250 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$1.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$5 @ 0x18006F160 (_CAudioResourceManager--DestroyStream_--_1_--dtor$5.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$4 @ 0x18006FB5F (_CConstraintModel--Initialize_--_1_--dtor$4.c)
 *     _std::_List_buy_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_Buynode_unsigned_short_____ptr64_unsigned_short_____ptr64__::_1_::dtor$1 @ 0x180136A6E (_std--_List_buy_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigne_ea_180136A6E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v1 + 2));
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
