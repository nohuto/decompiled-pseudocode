/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDiscoverRecentItem__&___ptr64__::_1_::catch$32 @ 0x180198053
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@0@Z @ 0x18019656C (-_Destroy@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDiscoverRecentItem______ptr64__::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 136),
    *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
