/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A8AB0
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C0082170 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00821BC (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0162E04 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00874FC (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ebx
  struct _KTHREAD *v15; // rbx
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v22 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v22) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL) = *((_DWORD *)a1 + 23);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL) = *((_DWORD *)a1 + 24);
      v8 = KeGetCurrentThread();
      v9 = *(_QWORD *)(W32GetThreadWin32Thread(v8) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v8) + 280) + 20LL) = *(_DWORD *)(v9 + 4);
      v10 = KeGetCurrentThread();
      v11 = *(_QWORD *)(W32GetThreadWin32Thread(v10) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v10) + 280) + 24LL) = *(_DWORD *)(v11 + 8);
      vSpTlSpriteStateDirectDriverAccess(a1, v3, v12);
      **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v22);
      v13 = *((_DWORD *)a1 + 23);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v13;
      v14 = *((_DWORD *)a1 + 24);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v14;
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v22) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL) = *((_DWORD *)a1 + 25);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL) = *((_DWORD *)a1 + 26);
    v15 = KeGetCurrentThread();
    v16 = *(_QWORD *)(W32GetThreadWin32Thread(v15) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v15) + 280) + 20LL) = *(_DWORD *)(v16 + 12);
    v17 = KeGetCurrentThread();
    v18 = *(_QWORD *)(W32GetThreadWin32Thread(v17) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v17) + 280) + 24LL) = *(_DWORD *)(v18 + 16);
    vSpTlSpriteStateDirectDriverAccess(a1, 0LL, v19);
    **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v22);
    v20 = *((_DWORD *)a1 + 25);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v20;
    v21 = *((_DWORD *)a1 + 26);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v21;
    *((_DWORD *)a1 + 22) = 0;
  }
}
