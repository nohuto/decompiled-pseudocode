/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0045958
 * Callers:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rsi
  __int64 *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    return 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0LL;
  v6 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess(a1) || !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 108) )
    return 0LL;
  v9 = 0LL;
  v10 = KeGetCurrentThread();
  v11 = *(_QWORD *)a1 + 88LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    v12 = (__int64 *)PsGetThreadWin32Thread(v10);
    if ( v12 )
      v9 = *v12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 280) + 32LL) == v11 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v4;
}
