/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023B460
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023B460 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023B460 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v6 + 136) || (*(_BYTE *)(v6 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    v4 = 1;
  }
  v7 = *((_QWORD *)a1 + 14);
  v8 = v7;
  while ( v7 )
  {
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 88);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v8;
  if ( v8 )
  {
    HMLockObject(v8);
    do
    {
      v12 = xxxCompositedTraverse((struct tagWND *)v8);
      v8 = *(_QWORD *)(v8 + 96);
      if ( v12 )
        v4 = 1;
    }
    while ( ThreadLockExchange(v8, (__int64)&v14) && v8 );
  }
  ThreadUnlock1(ThreadWin32Thread, v9, v11);
  return v4;
}
