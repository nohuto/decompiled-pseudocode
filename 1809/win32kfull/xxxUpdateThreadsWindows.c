/*
 * XREFs of xxxUpdateThreadsWindows @ 0x1C01EC6DC
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     xxxUpdateWindows @ 0x1C0227800 (xxxUpdateWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01EA8F8 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateThreadsWindows(__int64 a1, __int64 a2, HRGN a3)
{
  __int64 v4; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v7;
  for ( v7[1] = 0LL; v4; v4 = *(_QWORD *)(v4 + 64) )
  {
    ThreadLockExchangeAlways(v4, (__int64)v7);
    if ( *(_QWORD *)(v4 + 16) == a1 )
      xxxInternalUpdateWindow((struct tagWND *)v4, 1u);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND *)v4, a3);
  }
  return ThreadUnlock1(a1, a2);
}
