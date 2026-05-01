/*
 * XREFs of ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x1802958E4
 * Callers:
 *     ?_GetViews@ViewEventDispatcher@@AEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18029386C (-_GetViews@ViewEventDispatcher@@AEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@She.c)
 *     ?GetViews@WindowEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18029D3A0 (-GetViews@WindowEventDispatcher@@UEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180294F6C (-_Reallocate_exactly@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
             (char **)a1,
             a2);
  }
  return result;
}
