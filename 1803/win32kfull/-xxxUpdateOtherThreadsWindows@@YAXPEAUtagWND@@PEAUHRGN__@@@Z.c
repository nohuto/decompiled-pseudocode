/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01C5560
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01C5560 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C01C83A4 (xxxUpdateThreadsWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01C5560 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  xxxRedrawHungWindow(a1, (__int64)a2);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = *((_QWORD *)a1 + 11);
    v7 = gptiCurrent;
    v8[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v8;
    v8[1] = 0LL;
    while ( v6 )
    {
      ThreadLockExchangeAlways(v6, (__int64)v8);
      xxxUpdateOtherThreadsWindows((struct tagWND *)v6, a2);
      v6 = *(_QWORD *)(v6 + 64);
    }
    ThreadUnlock1(v7, v4, v5);
  }
}
