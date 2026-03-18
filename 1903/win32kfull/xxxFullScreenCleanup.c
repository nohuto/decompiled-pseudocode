/*
 * XREFs of xxxFullScreenCleanup @ 0x1C0123E60
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _LIST_ENTRY *xxxFullScreenCleanup()
{
  struct _LIST_ENTRY *result; // rax
  int v1; // edx
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // rcx
  struct _LARGE_STRING *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

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
      result = (struct _LIST_ENTRY *)zzzLockWindowUpdate2(0LL, 1u, v3);
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 4;
        WPP_RECORDER_SF_(v2, v1, 12, 11, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
      }
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      v15 = v4;
      if ( v4 )
        HMLockObject(v4);
      v9 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      if ( v9 )
        v10 = *(struct _LARGE_STRING **)v9;
      else
        v10 = 0LL;
      xxxSendNotifyMessage(v9, 0x3Au, 2uLL, v10, 1);
      result = (struct _LIST_ENTRY *)ThreadUnlock1(v12, v11, v13);
    }
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 0;
  }
  return result;
}
