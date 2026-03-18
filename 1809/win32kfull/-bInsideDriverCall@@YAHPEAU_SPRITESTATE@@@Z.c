/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00F511C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v9 = *(_QWORD *)a1;
  v4 = ThreadWin32Thread;
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9);
  v5 = 0;
  if ( v4 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    if ( *(struct _SPRITESTATE **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 280) + 32LL) == a1 )
      return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7) + 280);
  }
  else
  {
    return *((unsigned int *)a1 + 22);
  }
  return v5;
}
