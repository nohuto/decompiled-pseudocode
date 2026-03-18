/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00E1720
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v14 = *(_QWORD *)a1;
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
  if ( v4 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    v9 = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
    {
      v12 = (__int64 *)PsGetThreadWin32Thread(v9);
      if ( v12 )
        v10 = *v12;
    }
    if ( *(struct _SPRITESTATE **)(*(_QWORD *)(v10 + 280) + 32LL) == a1 )
      return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 280);
  }
  else
  {
    return *((unsigned int *)a1 + 22);
  }
  return v3;
}
