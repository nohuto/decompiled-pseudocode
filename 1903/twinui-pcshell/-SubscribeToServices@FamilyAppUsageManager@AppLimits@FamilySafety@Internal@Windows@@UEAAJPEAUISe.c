/*
 * XREFs of ?SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A5150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CreateAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@1234@W4ViewTrackingOption@1234@@Z @ 0x1800A6278 (-CreateAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$com_ptr_t@UIAppUsageTrack.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::SubscribeToServices(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v3 = (__int64 *)Windows::Internal::FamilySafety::AppLimits::CreateAppUsageTracker(&v9);
    v4 = *v3;
    *v3 = 0LL;
    v5 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3D,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v6);
  }
  return result;
}
