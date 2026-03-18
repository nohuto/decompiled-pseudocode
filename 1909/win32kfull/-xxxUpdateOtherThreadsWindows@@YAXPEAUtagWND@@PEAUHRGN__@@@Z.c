/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200190
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200190 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202278 (xxxUpdateThreadsWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200190 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  xxxRedrawHungWindow(a1, (__int64)a2);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = *((_QWORD *)a1 + 14);
    v7 = gptiCurrent;
    v8 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v8;
    v9 = 0LL;
    while ( v6 )
    {
      ThreadLockExchangeAlways(v6, (__int64)&v8);
      xxxUpdateOtherThreadsWindows((struct tagWND *)v6, a2);
      v6 = *(_QWORD *)(v6 + 88);
    }
    ThreadUnlock1(v7, v4, v5);
  }
}
