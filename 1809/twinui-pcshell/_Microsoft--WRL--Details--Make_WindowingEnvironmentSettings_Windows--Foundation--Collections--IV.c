/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowingEnvironmentSettings_Windows::Foundation::Collections::IVectorView_Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting_____ptr64______ptr64_std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)__&___ptr64__::_1_::dtor$0 @ 0x1802222FE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E6C (--1-$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_WindowingEnvironmentSettings_Windows::Foundation::Collections::IVectorView_Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting_____ptr64______ptr64_std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_unsigned_int_______ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentSettings>::~ComPtr<WindowingEnvironmentSettings>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
