/*
 * XREFs of _lambda_41194f1b967ecfdcfc5ed7723d234191_::operator() @ 0x1801D6650
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_41194f1b967ecfdcfc5ed7723d234191___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1801DE270 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801DE270.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_41194f1b967ecfdcfc5ed7723d234191_::operator()(__int64 a1, __int64 a2, int a3)
{
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  int v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v10[1] = -2LL;
  v13 = 0LL;
  v12 = 0;
  if ( a3 == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v13);
    v12 = v5;
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v11);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 64LL))(v11, &v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v5 = v12;
  }
  v10[0] = v13;
  LODWORD(v11) = v5;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
    __fastfail(7u);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v6 + 16LL))(v6, &v11, v10);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
