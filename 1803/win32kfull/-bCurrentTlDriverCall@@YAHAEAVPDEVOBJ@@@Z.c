/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007AFEC
 * Callers:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
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
  __int64 v12; // rdx
  __int64 *v13; // rax

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
  v11 = *(_QWORD *)a1 + 80LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(v10);
    if ( v13 )
      v9 = *v13;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 280) + 32LL) == v11 )
    return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 280);
  return v4;
}
