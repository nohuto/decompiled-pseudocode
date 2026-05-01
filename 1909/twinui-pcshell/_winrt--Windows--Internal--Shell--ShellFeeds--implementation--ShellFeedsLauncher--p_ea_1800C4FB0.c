/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$10 @ 0x1800C4FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 144) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~2u;
    return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 32));
  }
  return result;
}
