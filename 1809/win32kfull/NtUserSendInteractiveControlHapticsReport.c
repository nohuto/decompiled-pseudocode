/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C021BDB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02362D8 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, __int128 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  BOOL v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  InteractiveControlManager *v13; // rax
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v15 = *a3;
    v13 = InteractiveControlManager::Instance();
    v8 = InteractiveControlManager::SendDeviceHapticsOutput(
           v13,
           a1,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v15) >= 0;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, 16LL, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
