/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180061B48
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180061AF0 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180044418 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180061C1C (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180061E90 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18006B658 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForPoolAcquire(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  struct IUnknown *v5; // rbx
  struct IUnknown *v10; // rdx
  struct IUnknown *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  v5 = 0LL;
  v11 = 0LL;
  while ( v4 != a1 )
  {
    v10 = (struct IUnknown *)v4[2];
    if ( v5 != v10 )
    {
      ATL::AtlComPtrAssign(&v11, v10);
      v5 = v11;
    }
    if ( (unsigned int)RmpPolicyTryGetRevokeAction(v5, a3, &v12) )
    {
      if ( (BYTE4(v5[180].lpVtbl[33].Release) & 1) != 0 )
        HAM_ACTIVITY_RM_CONTEXT::RequestStop(
          (HAM_ACTIVITY_RM_CONTEXT *)v5[229].lpVtbl,
          (unsigned __int64)v5[234].lpVtbl);
      else
        ExecutionModel::ResourceSet::Revoke(v5, v12, a2, -1LL, a4);
    }
    v4 = (_QWORD *)*v4;
  }
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
}
