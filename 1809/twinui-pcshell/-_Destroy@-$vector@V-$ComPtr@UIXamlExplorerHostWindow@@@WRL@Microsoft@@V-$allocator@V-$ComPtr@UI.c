/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@0@Z @ 0x18019656C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDiscoverRecentItem__&___ptr64__::_1_::catch$32 @ 0x180198053 (_std--vector_Microsoft--WRL--ComPtr_IDiscoverRecentItem__std--allocator_Microsoft--WRL--ComPtr_I.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$32 @ 0x180210692 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper__.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow__std::allocator_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow__const_&___ptr64__::_1_::catch$32 @ 0x18025975C (_std--vector_Microsoft--WRL--ComPtr_IXamlExplorerHostWindow__std--allocator_Microsoft--WRL--ComP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Destroy(
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
