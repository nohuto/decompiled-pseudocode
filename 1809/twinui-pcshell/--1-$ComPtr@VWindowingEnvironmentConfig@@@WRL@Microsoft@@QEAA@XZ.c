/*
 * XREFs of ??1?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ @ 0x180254708
 * Callers:
 *     _Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_const_&___ptr64_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel_____ptr64_enum_WindowingEnvironmentType_&___ptr64__::_1_::dtor$0 @ 0x180253F0F (_Microsoft--WRL--Details--Make_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_.c)
 *     _wil::MakeOrThrow_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_const_&___ptr64_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel_____ptr64_enum_WindowingEnvironmentType_&___ptr64__::_1_::dtor$0 @ 0x180254153 (_wil--MakeOrThrow_WindowingEnvironmentConfig_WindowingEnvironmentManager_____ptr64_const_-___ptr.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowingEnvironmentConfig>::~ComPtr<WindowingEnvironmentConfig>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release(
             result,
             a2);
  }
  return result;
}
