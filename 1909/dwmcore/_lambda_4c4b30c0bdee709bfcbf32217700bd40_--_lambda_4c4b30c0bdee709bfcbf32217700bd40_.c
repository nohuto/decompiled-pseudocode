/*
 * XREFs of _lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_ @ 0x18015A46C
 * Callers:
 *     CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x18015A27C (CAsyncTask_CD3DDeviceLevel1--D3D12Resources_--Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___.c)
 *     std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Copy @ 0x18015D220 (std--_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceL_ea_18015D220.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(a1, *a2);
  v4 = a2[1];
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
