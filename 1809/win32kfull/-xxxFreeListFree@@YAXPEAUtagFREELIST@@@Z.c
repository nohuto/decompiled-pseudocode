/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F4358
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F3E54 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01F4DF4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxClientFreeDDEHandle @ 0x1C0207600 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, v6, (__int64)FreeListFree);
      if ( !v2 )
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
      *(_QWORD *)(ThreadWin32Thread + 16) = v6[0];
      v5 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v5);
    }
    while ( v1 );
  }
}
