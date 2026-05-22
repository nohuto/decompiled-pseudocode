/*
 * XREFs of ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180128E9C
 * Callers:
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800A5190 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180129970 (-erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@w_ea_180129970.c)
 */

void __fastcall PenDeviceManager::RemoveRIMDevice(PenDeviceManager *this, void *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  const struct _GUID *v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    (__int64)this + 64,
    (__int64)&v7,
    (unsigned __int8 *)&v8);
  v3 = v7;
  if ( v7 != *((_QWORD *)this + 9) )
  {
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
      (char *)this + 64,
      &v8);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 24LL))(*(_QWORD *)(v3 + 24) + 8LL);
    v5 = *v4 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *v4 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v5 = v4[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v5 )
    {
      v6 = (const struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 24LL))(*(_QWORD *)(v3 + 24) + 8LL);
      PenDeviceManager::RepopulateActiveBamoForId(this, v6);
    }
  }
}
