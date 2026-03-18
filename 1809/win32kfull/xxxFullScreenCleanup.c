/*
 * XREFs of xxxFullScreenCleanup @ 0x1C011A6E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *xxxFullScreenCleanup()
{
  void *result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v6; // rcx
  struct _LARGE_STRING *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  result = PsGetCurrentThreadId();
  if ( result == ghSwitcher )
  {
    if ( gfGdiEnabled )
    {
      gdwPUDFlags &= ~0x20000000u;
      result = (void *)zzzLockWindowUpdate2(0LL, 1LL, v1, v2);
    }
    else
    {
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v10;
      v10[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      if ( v6 )
        v7 = *(struct _LARGE_STRING **)v6;
      else
        v7 = 0LL;
      xxxSendNotifyMessage(v6, 0x3Au, 2LL, v7, 1);
      result = (void *)ThreadUnlock1(v9, v8);
    }
    ghSwitcher = 0LL;
    gfRedoFullScreenSwitch = 0;
  }
  return result;
}
