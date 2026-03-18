/*
 * XREFs of NtUserLayoutCompleted @ 0x1C0125030
 * Callers:
 *     <none>
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     GreWindowLayoutComplete @ 0x1C0125184 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C0200508 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C02719CC (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 TopLevelWindow; // rax
  void *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v14 = (void *)ReferenceDwmApiPort(v7, v6, v8);
      DwmAsyncCancelRotationDelay(v14);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v10 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v10 + 42) & 0x3FFF;
        if ( (_DWORD)v9 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v10, v9, v11);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
