/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C013EFB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C013F084 (_RegisterPointerDeviceNotifications.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]

  v15 = -1;
  v14 = 0x2000;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 416) == CurrentProcessWin32Process )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, &v14) )
      {
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 9LL);
        UserSetLastError(5LL, v11, v12, v13);
      }
      else
      {
        v7 = RegisterPointerDeviceNotifications(v8, a2);
      }
    }
    else
    {
      v7 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
