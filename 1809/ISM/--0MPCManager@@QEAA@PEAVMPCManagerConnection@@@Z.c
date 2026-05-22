/*
 * XREFs of ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003CA58
 * Callers:
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003C720 (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18003D28C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exceptio.c)
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18003EE20 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MPCManager *__fastcall MPCManager::MPCManager(MPCManager *this, struct MPCManagerConnection *a2)
{
  BamoMPCManagerPrincipal *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  struct BamoMPCConstantManagerClientPrincipal *Instance; // rdx

  *(_QWORD *)this = &BamoMPCManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (MPCManager *)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  v5 = (_QWORD *)((char *)this + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManager *)((char *)this + 16), a2);
  *v5 = &BamoImpl::BamoMPCManagerPrincipalImpl::`vftable';
  v5[5] = 0LL;
  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v4 = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(struct MPCManagerConnection *))(*(_QWORD *)a2 + 24LL))(a2)
                                                    + 8));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buyheadnode(v6);
  Instance = MPCConstantManager::GetInstance();
  BamoMPCManagerPrincipal::SetMPCConstantManagerClient(v4, Instance);
  return this;
}
