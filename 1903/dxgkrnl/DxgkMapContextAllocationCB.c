/*
 * XREFs of DxgkMapContextAllocationCB @ 0x1C022B560
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkMapContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 DxgAdapter; // rax
  __int64 v7; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v9);
  DxgAdapter = DpiGetDxgAdapter(a1, v4, v5);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2560) + 544LL) + 8LL)
                                                  + 832LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2560) + 552LL),
         a2);
  if ( v9[0] )
    KeUnstackDetachProcess(&ApcState);
  return v7;
}
