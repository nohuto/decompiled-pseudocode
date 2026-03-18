/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C0009F40
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(__int64 a1, int a2)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v5 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) )
        {
          v6 = *(_QWORD *)(v5 + 40);
          if ( (*(_BYTE *)(v6 + 24) & 8) == 0 && (*(_BYTE *)(v6 + 20) & 0x20) == 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v8 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v8;
            v9 = v5;
            HMLockObject(v5);
            xxxSetWindowPos((struct tagWND *)v5, 0, 0, 16403);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL);
  if ( a2
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0
    && !(unsigned int)IsThreadHung(*(_QWORD *)(a1 + 16), 0LL) )
  {
    PostEventMessageEx(*(struct tagTHREADINFO **)(a1 + 16), 274, 61728LL, 0LL, 0LL);
  }
  return 1LL;
}
