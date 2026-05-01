/*
 * XREFs of ?add_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800B3E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800B0A5C (-Add@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::add_AppUsageStateChanged(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  char *v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (char *)(a1 + 64);
  try
  {
    wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::Add(
      v3,
      a2,
      a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v4);
  }
  return result;
}
