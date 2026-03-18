/*
 * XREFs of xxxUpdateThreadsWindows @ 0x1C0202278
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     xxxUpdateWindows @ 0x1C023EEE0 (xxxUpdateWindows.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200190 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateThreadsWindows(__int64 a1, __int64 a2, HRGN a3)
{
  __int64 v4; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 i; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v4 = a2;
  i = 0LL;
  v9 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v7;
  for ( i = 0LL; v4; v4 = *(_QWORD *)(v4 + 88) )
  {
    ThreadLockExchangeAlways(v4, (__int64)&v7);
    if ( *(_QWORD *)(v4 + 16) == a1 )
      xxxInternalUpdateWindow((struct tagWND *)v4, 1u);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND *)v4, a3);
  }
  return ThreadUnlock1(a1, a2, a3);
}
