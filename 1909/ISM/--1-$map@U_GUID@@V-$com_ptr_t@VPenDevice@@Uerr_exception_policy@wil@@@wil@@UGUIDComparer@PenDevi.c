/*
 * XREFs of ??1?$map@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x180127718
 * Callers:
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$2 @ 0x1801276AD (_PenDeviceManager--PenDeviceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180129A0C (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@.c)
 */

void __fastcall std::map<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>::~map<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
