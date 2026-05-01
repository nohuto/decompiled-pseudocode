/*
 * XREFs of _lambda_db2cedfb0854aef668be6bda3030eb84_::operator() @ 0x1800AC038
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___::Run @ 0x1800ACFE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___--Run.c)
 * Callees:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800AD89C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

__int64 __fastcall lambda_db2cedfb0854aef668be6bda3030eb84_::operator()(__int64 *a1)
{
  __int64 v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *a1;
  try
  {
    result = Win32AppStateManager::UpdateAppViewWorker(v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x190,
             (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
             v2);
  }
  return result;
}
