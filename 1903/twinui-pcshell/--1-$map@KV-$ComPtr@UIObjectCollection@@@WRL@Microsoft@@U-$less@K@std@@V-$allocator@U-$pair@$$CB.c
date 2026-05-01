/*
 * XREFs of ??1?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180394178
 * Callers:
 *     _ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d____::_1_::dtor$0 @ 0x180393C30 (_ShellPositionerManager--DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d____--_1_-.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x18039366C (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$.c)
 */

void __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::~map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>(
        __int64 ***a1)
{
  __int64 *v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
    a1,
    &v2,
    **a1,
    (__int64 *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
