/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0222EE0
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0222EE0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0222EE0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  int v9; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 136) || (*(_BYTE *)(v2 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    v3 = 1;
  }
  v5 = *((_QWORD *)a1 + 11);
  v6 = v5;
  while ( v5 )
  {
    v6 = v5;
    v5 = *(_QWORD *)(v5 + 64);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v6;
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    do
    {
      v9 = xxxCompositedTraverse((struct tagWND *)v6);
      v6 = *(_QWORD *)(v6 + 72);
      if ( v9 )
        v3 = 1;
    }
    while ( ThreadLockExchange(v6, (__int64)v11) && v6 );
  }
  ThreadUnlock1(ThreadWin32Thread, v7);
  return v3;
}
