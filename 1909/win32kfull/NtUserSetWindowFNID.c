/*
 * XREFs of NtUserSetWindowFNID @ 0x1C008CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C001C5B0 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process )
    {
      v13 = 5LL;
LABEL_4:
      UserSetLastError(v13, v10, v11, v12);
      goto LABEL_16;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned int)IsWindowBeingDestroyed(v8) )
      {
LABEL_7:
        v13 = 87LL;
        goto LABEL_4;
      }
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_7;
      }
      else if ( (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_7;
      }
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF) != 0 )
        goto LABEL_7;
      v15 = 0;
      if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(v8 + 321, &v15) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
        goto LABEL_7;
      }
    }
    v7 = 1LL;
    *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) |= a2;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
