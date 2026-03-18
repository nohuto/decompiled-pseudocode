/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009AB80
 * Callers:
 *     xxxDoPaint @ 0x1C009A840 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009AB80 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009AB80 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2, __int64 a3, __int64 a4)
{
  struct tagWND *v5; // rbx
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v12; // rax
  struct tagWND *v13; // rdi
  struct tagWND *v14; // rdi
  __int64 v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v5 = a1;
  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v17 = *(_QWORD *)(v6 + 408);
  *(_QWORD *)(v6 + 408) = &v17;
  v18 = v5;
  if ( !v5 )
    return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
  HMLockObject(v5);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v5 + 2) == a2 )
    {
      v9 = *((_QWORD *)v5 + 5);
      if ( (*(_BYTE *)(v9 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v5);
        v5 = (struct tagWND *)*((_QWORD *)v5 + 11);
        ThreadLockExchange(v5, &v17);
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0 )
        break;
    }
    v9 = *((_QWORD *)v5 + 14);
    if ( v9 )
    {
      v12 = xxxInternalDoPaint((struct tagWND *)v9, a2);
      v13 = v12;
      if ( v12 )
      {
        if ( v12 == v5 )
          return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
        ThreadUnlock1(v9, v8, v10);
        return v13;
      }
    }
    v5 = (struct tagWND *)*((_QWORD *)v5 + 11);
    v14 = v18;
    v18 = v5;
    if ( v5 )
      HMLockObject(v5);
    if ( v14 )
      HMUnlockObject(v14);
LABEL_17:
    if ( !v5 )
      return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
  }
  if ( (*(_BYTE *)(v9 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
  v15 = *((_QWORD *)v5 + 11);
  if ( !v15 )
    return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v15 + 16) == a2 )
    {
      v9 = *(_QWORD *)(v15 + 40);
      if ( (*(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0) && (*(_BYTE *)(v9 + 24) & 0x20) == 0 )
        break;
    }
    v15 = *(_QWORD *)(v15 + 88);
    if ( !v15 )
      return (struct tagWND *)ThreadUnlock1(v9, v8, v10);
  }
  ThreadUnlock1(v9, v8, v10);
  return (struct tagWND *)v15;
}
