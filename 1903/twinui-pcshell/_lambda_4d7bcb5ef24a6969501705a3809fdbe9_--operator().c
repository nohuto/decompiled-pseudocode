/*
 * XREFs of _lambda_4d7bcb5ef24a6969501705a3809fdbe9_::operator() @ 0x18020D8E8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_4d7bcb5ef24a6969501705a3809fdbe9___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1802106A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1802106A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4d7bcb5ef24a6969501705a3809fdbe9_::operator()(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v10 = 0;
  if ( a3 != 1 )
  {
    v9 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v6(a2, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v9);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 64LL))(v9, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5 = v10;
  }
  LODWORD(v9) = v5;
  v7 = *(_QWORD *)(a1 + 112);
  if ( !v7 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, &v9);
}
