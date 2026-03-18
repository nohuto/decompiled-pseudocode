/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources_____ptr64_::_Do_call @ 0x1801FD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1801FB898 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources_____ptr64_::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rdi
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
