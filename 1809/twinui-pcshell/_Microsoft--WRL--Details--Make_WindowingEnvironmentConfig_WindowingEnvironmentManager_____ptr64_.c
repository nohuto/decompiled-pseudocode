/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_const_&___ptr64_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel_____ptr64_enum_WindowingEnvironmentType_&___ptr64__::_1_::dtor$0 @ 0x180253F0F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ @ 0x180254708 (--1-$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_const_____ptr64_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel_____ptr64_enum_WindowingEnvironmentType_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentConfig>::~ComPtr<WindowingEnvironmentConfig>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
