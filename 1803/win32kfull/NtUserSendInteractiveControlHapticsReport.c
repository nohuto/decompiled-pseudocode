/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C01F4670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C020CEB0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rbx
  __int64 v6; // rdx
  BOOL v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v12; // rax
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v13; // rsi
  InteractiveControlManager *v14; // rax

  v4 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    ProbeForRead(a3, v4, 1u);
    v12 = (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)Win32AllocPoolWithQuota(v4, 1768452949LL);
    v13 = v12;
    if ( v12 )
    {
      memmove(v12, (const void *)a3, v4);
      if ( (_DWORD)v4 == 16 )
      {
        v14 = InteractiveControlManager::Instance();
        v7 = InteractiveControlManager::SendDeviceHapticsOutput(v14, a1, v13) >= 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
