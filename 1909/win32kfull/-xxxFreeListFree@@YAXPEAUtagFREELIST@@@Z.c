/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A264 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C020B98C (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020BE3C (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C021EA4C (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v7; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = a1;
    memset(v8, 0, 24);
    v2 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, v8, (__int64)FreeListFree);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            v4,
            v3,
            14,
            55,
            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
            *((_QWORD *)v1 + 1));
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v5);
      *(_QWORD *)(ThreadWin32Thread + 16) = v8[0];
      v7 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v7);
    }
    while ( v1 );
  }
}
