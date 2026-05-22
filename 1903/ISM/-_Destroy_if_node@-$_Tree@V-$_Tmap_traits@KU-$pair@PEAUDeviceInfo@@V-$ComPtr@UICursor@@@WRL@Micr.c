/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@Z @ 0x18013C52C
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@1@1@Z @ 0x180028E38 (--$_Insert_at@AEAU-$pair@$$CBKU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor________0___::_Insert_hint_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor______&_std::_Tree_node_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor______void_______::_1_::catch$41 @ 0x18003DD55 (_std--_Tree_std--_Tmap_traits_unsigned_long_std--pair_DeviceInfo___Microsoft--WRL--ComPtr_ICurso.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor________0___::_Insert_nohint_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor______&_std::_Tree_node_std::pair_unsigned_long_const__std::pair_DeviceInfo___Microsoft::WRL::ComPtr_ICursor______void_______::_1_::catch$22 @ 0x180139F6F (_std--_Tree_std--_Tmap_traits_unsigned_long_std--pair_DeviceInfo___Microsoft--WRL--_ea_180139F6F.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a2 + 6);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
