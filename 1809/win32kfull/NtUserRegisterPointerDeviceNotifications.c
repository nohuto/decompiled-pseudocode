/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C0133DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C0133E90 (_RegisterPointerDeviceNotifications.c)
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
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v6 + 424) == CurrentProcessWin32Process )
    {
      if ( a2
        && (v12 = *(_QWORD *)(gptiCurrent + 424LL), gbEnforceUIPI)
        && (unsigned int)*(_QWORD *)(v12 + 880) < 0x2000 )
      {
        EtwTraceUIPISystemError(v12, 0LL, 9LL);
        UserSetLastError(5LL, v13, v14, v15);
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
