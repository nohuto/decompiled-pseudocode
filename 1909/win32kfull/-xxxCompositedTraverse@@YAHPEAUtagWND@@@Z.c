/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023AE40
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023AE40 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023AE40 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    v3 = 1;
  }
  v6 = *((_QWORD *)a1 + 14);
  v7 = v6;
  while ( v6 )
  {
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 88);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
  v14 = v7;
  if ( v7 )
  {
    HMLockObject(v7);
    do
    {
      v11 = xxxCompositedTraverse((struct tagWND *)v7);
      v7 = *(_QWORD *)(v7 + 96);
      if ( v11 )
        v3 = 1;
    }
    while ( ThreadLockExchange(v7, (__int64)&v13) && v7 );
  }
  ThreadUnlock1(ThreadWin32Thread, v8, v10);
  return v3;
}
