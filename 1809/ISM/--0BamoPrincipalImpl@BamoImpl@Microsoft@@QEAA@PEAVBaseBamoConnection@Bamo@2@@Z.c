/*
 * XREFs of ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180029EF4 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0ControllerNavigationManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800300B4 (--0ControllerNavigationManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003CA58 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180047EE8 (--0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180091960 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18009BA98 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18009BC64 (-CreateDataSource@AnimationDataProvider@@QEAA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x1800DA5B4 (--0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1800E9424 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x1800E9CE4 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 24LL))(a2)
                 + 64);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 28LL),
         this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x263,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18001B30ALL);
  }
  return this;
}
