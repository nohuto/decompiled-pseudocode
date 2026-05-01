/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate_ @ 0x1801F2488
 * Callers:
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1801F2644 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationMo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate::CompletionDelegate @ 0x1801F2808 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_enum_Windows--ApplicationM.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x1801F2A24 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate::RuntimeClassInitialize @ 0x1801F304C (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_enum_Windows-_ea_1801F304C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate_(
        __int64 *a1)
{
  void *v2; // rax
  int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v6 = wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate::CompletionDelegate(v2);
    v4 = v6;
    v3 = wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus_____::_2_::CompletionDelegate::RuntimeClassInitialize(v6);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
