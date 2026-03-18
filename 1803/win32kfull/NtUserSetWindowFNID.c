/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00FB970
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0070C58 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process )
    {
      v12 = 5LL;
LABEL_4:
      UserSetLastError(v12, v5);
      goto LABEL_13;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned __int16)(a2 - 673) > 9u
        || (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x3FFF) != 0
        || (unsigned int)IsWindowBeingDestroyed(v10) )
      {
        goto LABEL_11;
      }
      v14 = 0;
      if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(v10 + 293, &v14) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
LABEL_11:
        v12 = 87LL;
        goto LABEL_4;
      }
    }
    v9 = 1LL;
    *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) |= a2;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
