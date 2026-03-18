/*
 * XREFs of ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0253B90 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255D2C (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255E1C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bConcurrent(struct _SPRITESTATE *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = *(_QWORD *)a1;
  v5 = ThreadWin32Thread;
  v6 = 0;
  v8 = v4;
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8)
    && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    return 1;
  }
  return v6;
}
