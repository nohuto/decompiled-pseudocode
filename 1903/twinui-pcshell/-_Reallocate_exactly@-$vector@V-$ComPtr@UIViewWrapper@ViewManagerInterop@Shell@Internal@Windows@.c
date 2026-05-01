/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180275A9C
 * Callers:
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x180276414 (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rcx
  char *v6; // rax
  char *v7; // r10
  char *v8; // rcx
  signed __int64 v9; // r9

  v4 = (a1[1] - *a1) >> 3;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = a1[1];
  v8 = *a1;
  if ( *a1 != v7 )
  {
    v9 = v6 - v8;
    do
    {
      *(_QWORD *)&v8[v9] = 0LL;
      if ( &v8[v9] != v8 )
      {
        *(_QWORD *)&v8[v9] = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0LL;
      }
      v8 += 8;
    }
    while ( v8 != v7 );
  }
  return std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array((__int64)a1, (__int64)v6, v4, a2);
}
