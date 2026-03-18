/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0043CF4
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rsi
  __int64 *v16; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    return 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0LL;
  v8 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess(a1) || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
    return 0LL;
  v13 = 0LL;
  v14 = KeGetCurrentThread();
  v15 = *(_QWORD *)a1 + 88LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
  {
    v16 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v16 )
      v13 = *v16;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 280) + 32LL) == v15 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v6;
}
