/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40
 * Callers:
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct tagWND *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct tagWND *v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v9; // rcx
  struct tagWND *v10; // rax
  struct tagWND *v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+28h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v14 = *(_QWORD *)(v5 + 416);
  *(_QWORD *)(v5 + 416) = &v14;
  v15 = v4;
  if ( !v4 )
    return (struct tagWND *)ThreadUnlock1(v7, v6);
  _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v4 + 2) == a2 )
    {
      v7 = (struct tagWND *)*((_QWORD *)v4 + 5);
      if ( (*((_BYTE *)v7 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v4);
        v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
        ThreadLockExchange(v4, &v14);
        goto LABEL_18;
      }
      if ( *((_QWORD *)v7 + 17) || (*((_BYTE *)v7 + 17) & 0x10) != 0 )
        break;
    }
    v9 = (struct tagWND *)*((_QWORD *)v4 + 11);
    if ( v9 )
    {
      v10 = xxxInternalDoPaint(v9, a2);
      v11 = v10;
      if ( v10 )
      {
        if ( v10 == v4 )
          return (struct tagWND *)ThreadUnlock1(v7, v6);
        ThreadUnlock1(v7, v6);
        return v11;
      }
    }
    v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
    v7 = v15;
    v15 = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal(v7);
    }
LABEL_18:
    if ( !v4 )
      return (struct tagWND *)ThreadUnlock1(v7, v6);
  }
  if ( (*((_BYTE *)v7 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v7, v6);
  v12 = *((_QWORD *)v4 + 8);
  if ( !v12 )
    return (struct tagWND *)ThreadUnlock1(v7, v6);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v12 + 16) == a2 )
    {
      v7 = *(struct tagWND **)(v12 + 40);
      if ( (*((_QWORD *)v7 + 17) || (*((_BYTE *)v7 + 17) & 0x10) != 0) && (*((_BYTE *)v7 + 24) & 0x20) == 0 )
        break;
    }
    v12 = *(_QWORD *)(v12 + 64);
    if ( !v12 )
      return (struct tagWND *)ThreadUnlock1(v7, v6);
  }
  ThreadUnlock1(v7, v6);
  return (struct tagWND *)v12;
}
