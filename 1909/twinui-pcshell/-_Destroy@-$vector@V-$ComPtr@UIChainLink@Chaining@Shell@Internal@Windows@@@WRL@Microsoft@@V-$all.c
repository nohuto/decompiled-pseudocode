/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@0@Z @ 0x18016A340
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow__std::allocator_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow__const_&__::_1_::catch$32 @ 0x1801600CC (_std--vector_Microsoft--WRL--ComPtr_IXamlExplorerHostWindow__std--allocator_Microsoft--WRL--ComP.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDiscoverRecentItem__&__::_1_::catch$32 @ 0x1801FE207 (_std--vector_Microsoft--WRL--ComPtr_IDiscoverRecentItem__std--allocator_Microsoft--WRL--ComPtr_I.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$32 @ 0x1802873F6 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4++);
    while ( v4 != a3 );
  }
  return result;
}
