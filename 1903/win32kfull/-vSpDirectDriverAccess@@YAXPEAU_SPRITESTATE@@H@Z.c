/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005ED8C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C003DF70 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003DFBC (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00434F8 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v9; // rbx
  __int64 v10; // rdi
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  int v16; // ebx
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rdi
  struct _KTHREAD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  v25 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  if ( v4 )
  {
    if ( v7 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25) && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL) = *((_DWORD *)a1 + 23);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL) = *((_DWORD *)a1 + 24);
      v9 = KeGetCurrentThread();
      v10 = *(_QWORD *)(W32GetThreadWin32Thread(v9) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v9) + 280) + 20LL) = *(_DWORD *)(v10 + 4);
      v11 = KeGetCurrentThread();
      v12 = *(_QWORD *)(W32GetThreadWin32Thread(v11) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v11) + 280) + 24LL) = *(_DWORD *)(v12 + 8);
      vSpTlSpriteStateDirectDriverAccess(a1, v4, v13, v14);
      **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25);
      v15 = *((_DWORD *)a1 + 23);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v15;
      v16 = *((_DWORD *)a1 + 24);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v16;
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v7 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25) && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL) = *((_DWORD *)a1 + 25);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL) = *((_DWORD *)a1 + 26);
    v17 = KeGetCurrentThread();
    v18 = *(_QWORD *)(W32GetThreadWin32Thread(v17) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v17) + 280) + 20LL) = *(_DWORD *)(v18 + 12);
    v19 = KeGetCurrentThread();
    v20 = *(_QWORD *)(W32GetThreadWin32Thread(v19) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v19) + 280) + 24LL) = *(_DWORD *)(v20 + 16);
    vSpTlSpriteStateDirectDriverAccess(a1, 0LL, v21, v22);
    **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25);
    v23 = *((_DWORD *)a1 + 25);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v23;
    v24 = *((_DWORD *)a1 + 26);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v24;
    *((_DWORD *)a1 + 22) = 0;
  }
}
