/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Do_call @ 0x18015E9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18015C2E8 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Do_call(
        __int64 a1,
        void ***a2)
{
  void **v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  IUnknown *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    &v7,
    *(_QWORD *)(a1 + 8));
  return anonymous_namespace_::CreateD3D12ResourcesInternal(&v7, &v6, v2);
}
