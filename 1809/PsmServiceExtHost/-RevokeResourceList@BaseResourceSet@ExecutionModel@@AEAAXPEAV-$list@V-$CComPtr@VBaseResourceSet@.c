/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800632C8
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001F550 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180003014 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180006B8C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::ExternalResourceSet *a1,
        _QWORD *a2)
{
  _QWORD *i; // rbx
  ExecutionModel::ExternalResourceSet *v4; // rdi
  ExecutionModel::ExternalResourceSet *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  for ( i = (_QWORD *)*a2; i != a2; i = (_QWORD *)*i )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v5, i[2]);
    v4 = v5;
    ExecutionModel::ExternalResourceSet::Revoke(v5, 0);
    if ( v4 )
      (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
