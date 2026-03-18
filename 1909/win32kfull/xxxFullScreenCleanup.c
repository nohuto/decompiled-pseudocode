/*
 * XREFs of xxxFullScreenCleanup @ 0x1C00FE790
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _LIST_ENTRY *xxxFullScreenCleanup()
{
  struct _LIST_ENTRY *result; // rax
  int v1; // edx
  int v2; // ecx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v7; // rcx
  struct _LARGE_STRING *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  result = (struct _LIST_ENTRY *)PsGetCurrentThreadId();
  if ( result == WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    if ( gfGdiEnabled )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 4;
        WPP_RECORDER_SF_(v2, v1, 12, 10, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
      }
      gdwPUDFlags &= ~0x20000000u;
      result = (struct _LIST_ENTRY *)zzzLockWindowUpdate2(0LL);
    }
    else
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 4;
        WPP_RECORDER_SF_(v2, v1, 12, 11, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
      }
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
      v12 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
      v13 = v3;
      if ( v3 )
        HMLockObject(v3);
      v7 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      if ( v7 )
        v8 = *(struct _LARGE_STRING **)v7;
      else
        v8 = 0LL;
      xxxSendNotifyMessage(v7, 0x3Au, 2LL, v8, 1);
      result = (struct _LIST_ENTRY *)ThreadUnlock1(v10, v9, v11);
    }
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 0;
  }
  return result;
}
