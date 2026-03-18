/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AD2C
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A514 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020C0EC (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C021EF8C (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagFREELIST *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v11; // rcx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    memset(v12, 0, 24);
    v5 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v4, v12, (__int64)FreeListFree, a4);
      if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            v7,
            v6,
            0xEu,
            0x37u,
            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
            *((_QWORD *)v4 + 1));
        xxxClientFreeDDEHandle(*((_QWORD *)v4 + 1), *((unsigned int *)v4 + 4));
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9);
      *(_QWORD *)(ThreadWin32Thread + 16) = v12[0];
      v11 = v4;
      v4 = *(struct tagFREELIST **)v4;
      Win32FreePool(v11);
    }
    while ( v4 );
  }
}
