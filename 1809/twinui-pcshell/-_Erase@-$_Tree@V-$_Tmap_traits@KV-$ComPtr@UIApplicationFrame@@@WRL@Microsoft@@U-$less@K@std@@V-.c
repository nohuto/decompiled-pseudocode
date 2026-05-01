/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18033369C
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18033369C (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x180333700 (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18033369C (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi

  v2 = a2;
  v4 = (__int64)a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Erase(
        a1,
        *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)v4;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 5);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = (__int64 *)v4;
    }
    while ( !*(_BYTE *)(v4 + 25) );
  }
}
