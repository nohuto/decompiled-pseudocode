/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0087CF8
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rsi
  __int64 *v14; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
    return 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0LL;
  v7 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess(a1) || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
    return 0LL;
  v11 = 0LL;
  v12 = KeGetCurrentThread();
  v13 = *(_QWORD *)a1 + 88LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v14 )
      v11 = *v14;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 280) + 32LL) == v13 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v5;
}
