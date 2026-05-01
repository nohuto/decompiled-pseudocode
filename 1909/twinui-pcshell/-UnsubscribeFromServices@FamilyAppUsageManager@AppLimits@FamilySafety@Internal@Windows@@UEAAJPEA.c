/*
 * XREFs of ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800B3C50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800B3980 (-StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::UnsubscribeFromServices(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking(
         (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)((char *)this + 72),
         (__int64)a2,
         a3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v4);
  try
  {
    v6 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x45,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v5);
  }
  return result;
}
