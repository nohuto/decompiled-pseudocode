/*
 * XREFs of NtUserLayoutCompleted @ 0x1C00FF110
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     GreWindowLayoutComplete @ 0x1C00FF220 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C01C5734 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C0240834 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 TopLevelWindow; // rax
  void *v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v17;
    v17[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v16 = (void *)ReferenceDwmApiPort(v9, v8, v10);
      DwmAsyncCancelRotationDelay(v16);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v12 = *(_QWORD *)(TopLevelWindow + 40);
        v11 = *(_WORD *)(v12 + 42) & 0x3FFF;
        if ( (_DWORD)v11 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v12, v11, v13);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
