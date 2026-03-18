/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C0233F20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C024EF34 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, __int128 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  BOOL v8; // ebx
  __int64 v9; // rcx
  InteractiveControlManager *v10; // rax
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  v12 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v12 = *a3;
    v10 = InteractiveControlManager::Instance();
    v8 = InteractiveControlManager::SendDeviceHapticsOutput(
           v10,
           a1,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v12) >= 0;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, 16LL, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
