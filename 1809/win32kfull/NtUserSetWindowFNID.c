/*
 * XREFs of NtUserSetWindowFNID @ 0x1C0117DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00AD82C (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
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
  __int64 v13; // rcx
  int v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v6 + 424) != CurrentProcessWin32Process )
    {
      v12 = 5LL;
LABEL_4:
      UserSetLastError(v12, v5, v7, v8);
      goto LABEL_16;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned int)IsWindowBeingDestroyed(v10) )
      {
LABEL_7:
        v12 = 87LL;
        goto LABEL_4;
      }
      if ( (unsigned int)PsGetWin32KFilterSet(v13, v5, v7) == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_7;
      }
      else if ( (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_7;
      }
      if ( (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) != 0 )
        goto LABEL_7;
      v15 = 0;
      if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(v10 + 305, &v15) )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("MSRC:61600 Unexpected FNID change");
        goto LABEL_7;
      }
    }
    v9 = 1LL;
    *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) |= a2;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
