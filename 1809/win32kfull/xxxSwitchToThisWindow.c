/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C0006C70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagWND *a1, int a2)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v5 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) )
        {
          v6 = *(_QWORD *)(v5 + 40);
          if ( (*(_BYTE *)(v6 + 24) & 8) == 0 && (*(_BYTE *)(v6 + 20) & 0x20) == 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v8;
            v8[1] = v5;
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
            xxxSetWindowPos((struct tagWND *)v5, 0, 0, 16403);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 1, 0);
  if ( a2
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0
    && !(unsigned int)IsThreadHung(*((_QWORD *)a1 + 2), 0LL) )
  {
    PostEventMessageEx(*((struct tagTHREADINFO **)a1 + 2), 274, 61728LL, 0LL, 0LL);
  }
  return 1LL;
}
