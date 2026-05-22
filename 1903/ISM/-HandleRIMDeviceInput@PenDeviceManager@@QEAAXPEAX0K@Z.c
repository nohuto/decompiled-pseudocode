/*
 * XREFs of ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x180128370
 * Callers:
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800A5290 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     ?ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z @ 0x18012A2F8 (-ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z.c)
 */

void __fastcall PenDeviceManager::HandleRIMDeviceInput(PenDeviceManager *this, void *a2, void *a3, unsigned int a4)
{
  __int64 v7; // rbx
  struct _GUID v8; // xmm6
  PenDevice *v9; // rcx
  __int64 v10; // rdx
  struct _GUID v11; // [rsp+20h] [rbp-40h] BYREF
  struct _GUID v12; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&v12.Data1 = a2;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    (__int64)this + 64,
    (__int64)&v11,
    (unsigned __int8 *)&v12);
  v7 = *(_QWORD *)&v11.Data1;
  if ( *(_QWORD *)&v11.Data1 != *((_QWORD *)this + 9) )
  {
    v8 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v11.Data1 + 24LL)
                                                                         + 8LL)
                                                             + 24LL))(*(_QWORD *)(*(_QWORD *)&v11.Data1 + 24LL) + 8LL);
    *(_QWORD *)&v11.Data1 = 0LL;
    *(_QWORD *)v11.Data4 = 0LL;
    v9 = *(PenDevice **)(v7 + 24);
    v12 = v8;
    PenDevice::ProcessPenUpdatePayload(v9, a3, a4, &v11);
    v10 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&v8.Data1;
    if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&v8.Data1 )
      v10 = *(_QWORD *)v11.Data4 - *(_QWORD *)v12.Data4;
    if ( v10 )
    {
      PenDeviceManager::RepopulateActiveBamoForId(this, &v12);
      PenDeviceManager::RepopulateActiveBamoForId(this, &v11);
    }
  }
}
