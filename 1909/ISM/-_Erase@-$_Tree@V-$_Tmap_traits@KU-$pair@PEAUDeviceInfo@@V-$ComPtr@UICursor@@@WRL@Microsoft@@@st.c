/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@Z @ 0x18013C598
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@Z @ 0x18013C598 (-_Erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@st.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18013C660 (-erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@Z @ 0x18013C598 (-_Erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@st.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Erase(
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
      std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Erase(
        a1,
        *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)v4;
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2 + 6);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x38);
      v2 = (__int64 *)v4;
    }
    while ( !*(_BYTE *)(v4 + 25) );
  }
}
