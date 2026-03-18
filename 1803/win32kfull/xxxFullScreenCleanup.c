/*
 * XREFs of xxxFullScreenCleanup @ 0x1C00FC3E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *xxxFullScreenCleanup()
{
  void *result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v4; // rcx
  struct _LARGE_STRING *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  result = PsGetCurrentThreadId();
  if ( result == ghSwitcher )
  {
    if ( gfGdiEnabled )
    {
      gdwPUDFlags &= ~0x20000000u;
      result = (void *)zzzLockWindowUpdate2(0LL, 1LL);
    }
    else
    {
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v9;
      v9[1] = v1;
      if ( v1 )
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
      v4 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      if ( v4 )
        v5 = *(struct _LARGE_STRING **)v4;
      else
        v5 = 0LL;
      xxxSendNotifyMessage(v4, 0x3Au, 2uLL, v5, 1);
      result = (void *)ThreadUnlock1(v7, v6, v8);
    }
    ghSwitcher = 0LL;
    gfRedoFullScreenSwitch = 0;
  }
  return result;
}
