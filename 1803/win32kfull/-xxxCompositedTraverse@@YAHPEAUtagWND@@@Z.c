/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C01FADEC
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C01FADEC (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C01FADEC (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v9; // r8
  int v10; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v12;
  v12[1] = v6;
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    do
    {
      v10 = xxxCompositedTraverse((struct tagWND *)v6);
      v6 = *(_QWORD *)(v6 + 72);
      if ( v10 )
        v3 = 1;
    }
    while ( ThreadLockExchange(v6, (__int64)v12) && v6 );
  }
  ThreadUnlock1(ThreadWin32Thread, v7, v9);
  return v3;
}
