/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0064D10
 * Callers:
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0064D10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0064D10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct tagWND *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct tagWND *v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v10; // rcx
  struct tagWND *v11; // rax
  struct tagWND *v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v16; // [rsp+28h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v15 = *(_QWORD *)(v5 + 408);
  *(_QWORD *)(v5 + 408) = &v15;
  v16 = v4;
  if ( !v4 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
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
        ThreadLockExchange(v4, &v15);
        goto LABEL_18;
      }
      if ( *((_QWORD *)v7 + 17) || (*((_BYTE *)v7 + 17) & 0x10) != 0 )
        break;
    }
    v10 = (struct tagWND *)*((_QWORD *)v4 + 11);
    if ( v10 )
    {
      v11 = xxxInternalDoPaint(v10, a2);
      v12 = v11;
      if ( v11 )
      {
        if ( v11 == v4 )
          return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
        ThreadUnlock1(v7, v6, v8);
        return v12;
      }
    }
    v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
    v7 = v16;
    v16 = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal(v7, v6, v8);
    }
LABEL_18:
    if ( !v4 )
      return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  }
  if ( (*((_BYTE *)v7 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  v13 = *((_QWORD *)v4 + 8);
  if ( !v13 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v13 + 16) == a2 )
    {
      v7 = *(struct tagWND **)(v13 + 40);
      if ( (*((_QWORD *)v7 + 17) || (*((_BYTE *)v7 + 17) & 0x10) != 0) && (*((_BYTE *)v7 + 24) & 0x20) == 0 )
        break;
    }
    v13 = *(_QWORD *)(v13 + 64);
    if ( !v13 )
      return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  }
  ThreadUnlock1(v7, v6, v8);
  return (struct tagWND *)v13;
}
