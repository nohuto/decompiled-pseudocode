/*
 * XREFs of ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x18039DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowManagementScenario@KioskPositioner@@AEAAXW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x18039E968 (-SetWindowManagementScenario@KioskPositioner@@AEAAXW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z.c)
 */

__int64 __fastcall KioskPositioner::PerformDelayedInitialization(KioskPositioner *this)
{
  __int64 result; // rax
  char *v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  v2 = (char *)this - 40;
  try
  {
    KioskPositioner::SetWindowManagementScenario(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23C,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
