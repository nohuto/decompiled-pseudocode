/*
 * XREFs of NtUserLayoutCompleted @ 0x1C011D170
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     GreWindowLayoutComplete @ 0x1C011D2A0 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C01EA9B8 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C0258060 (DwmAsyncCancelRotationDelay.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 TopLevelWindow; // rax
  void *v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v15;
    v15[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v14 = (void *)ReferenceDwmApiPort(v9, v8);
      DwmAsyncCancelRotationDelay(v14);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v11 = *(_QWORD *)(TopLevelWindow + 40);
        v10 = *(_WORD *)(v11 + 42) & 0x2FFF;
        if ( (_DWORD)v10 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v11, v10);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
