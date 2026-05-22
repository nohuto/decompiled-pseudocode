/*
 * XREFs of ??1PenDeviceManager@@UEAA@XZ @ 0x1801277F8
 * Callers:
 *     ??_EPenDeviceManager@@UEAAPEAXI@Z @ 0x180127980 (--_EPenDeviceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXXZ @ 0x180129844 (-clear@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180129A0C (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@.c)
 */

void __fastcall PenDeviceManager::~PenDeviceManager(PenDeviceManager *this)
{
  void **v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &PenDeviceManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoPenDeviceManagerPrincipal::`vftable'{for `IPenDeviceManagerPrincipal'};
  v2 = (void **)((char *)this + 128);
  std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
    (char *)this + 128,
    &v9,
    **((_QWORD **)this + 16));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::clear((char *)this + 72);
  std::_Deallocate<16,0>(*((void **)this + 9), (const struct std::nothrow_t *)0x20);
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, v4, v5, v6);
}
