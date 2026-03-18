/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C003B950
 * Callers:
 *     xxxDoPaint @ 0x1C003B610 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C003B950 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C003B950 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2, __int64 a3)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v11; // rax
  struct tagWND *v12; // rdi
  struct tagWND *v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v4 = a1;
  v17 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v16 = *(_QWORD *)(v5 + 408);
  *(_QWORD *)(v5 + 408) = &v16;
  v17 = v4;
  if ( !v4 )
    return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
  HMLockObject(v4);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v4 + 2) == a2 )
    {
      v8 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v8 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v4);
        v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        ThreadLockExchange(v4, &v16);
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v8 + 136) || (*(_BYTE *)(v8 + 17) & 0x10) != 0 )
        break;
    }
    v8 = *((_QWORD *)v4 + 14);
    if ( v8 )
    {
      v11 = xxxInternalDoPaint((struct tagWND *)v8, a2);
      v12 = v11;
      if ( v11 )
      {
        if ( v11 == v4 )
          return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
        ThreadUnlock1(v8, v7, v9);
        return v12;
      }
    }
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    v13 = v17;
    v17 = v4;
    if ( v4 )
      HMLockObject(v4);
    if ( v13 )
      HMUnlockObject(v13);
LABEL_17:
    if ( !v4 )
      return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
  }
  if ( (*(_BYTE *)(v8 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
  v14 = *((_QWORD *)v4 + 11);
  if ( !v14 )
    return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v14 + 16) == a2 )
    {
      v8 = *(_QWORD *)(v14 + 40);
      if ( (*(_QWORD *)(v8 + 136) || (*(_BYTE *)(v8 + 17) & 0x10) != 0) && (*(_BYTE *)(v8 + 24) & 0x20) == 0 )
        break;
    }
    v14 = *(_QWORD *)(v14 + 88);
    if ( !v14 )
      return (struct tagWND *)ThreadUnlock1(v8, v7, v9);
  }
  ThreadUnlock1(v8, v7, v9);
  return (struct tagWND *)v14;
}
