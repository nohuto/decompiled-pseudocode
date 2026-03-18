/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C010C540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C010C600 (_RegisterPointerDeviceNotifications.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v6 + 416) == CurrentProcessWin32Process )
    {
      if ( a2
        && (v13 = *(_QWORD *)(gptiCurrent + 416LL), gbEnforceUIPI)
        && (unsigned int)*(_QWORD *)(v13 + 872) < 0x2000 )
      {
        EtwTraceUIPISystemError(v13, 0LL, 9LL);
        UserSetLastError(5LL, v14);
      }
      else
      {
        v9 = RegisterPointerDeviceNotifications(v10, a2);
      }
    }
    else
    {
      v9 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
