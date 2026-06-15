/*
 * XREFs of _std::_Tree_std::_Tmap_traits__GUID_HmdInfo_std::less__GUID__std::allocator_std::pair__GUID_const__HmdInfo____0___::_Insert_nohint_std::pair__GUID_const__HmdInfo__&_std::_Tree_node_std::pair__GUID_const__HmdInfo__void_______::_1_::catch$22 @ 0x180125398
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@Z @ 0x1801272D8 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U.c)
 */

void __fastcall __noreturn std::_Tree_std::_Tmap_traits__GUID_HmdInfo_std::less__GUID__std::allocator_std::pair__GUID_const__HmdInfo____0___::_Insert_nohint_std::pair__GUID_const__HmdInfo____std::_Tree_node_std::pair__GUID_const__HmdInfo__void_______::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_node(
    a1,
    *(_QWORD *)(a2 + 176));
  throw;
}
