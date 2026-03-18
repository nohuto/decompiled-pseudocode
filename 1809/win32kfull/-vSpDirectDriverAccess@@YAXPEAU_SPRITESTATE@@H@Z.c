/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00445A0
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C0096270 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00962BC (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C004515C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // r15d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct _KTHREAD *v16; // rbp
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  struct _KTHREAD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rax
  struct _KTHREAD *v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rax
  struct _KTHREAD *v36; // r14
  __int64 v37; // rbx
  __int64 *v38; // rax
  struct _KTHREAD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rax
  int v43; // ebx
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _KTHREAD *v47; // rbp
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  struct _KTHREAD *v53; // rbp
  __int64 v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbp
  struct _KTHREAD *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 *v61; // rax
  struct _KTHREAD *v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // rcx
  struct _KTHREAD *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 *v72; // rax
  struct _KTHREAD *v73; // r14
  __int64 v74; // rbx
  __int64 *v75; // rax
  struct _KTHREAD *v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 *v80; // rax
  int v81; // ebx
  int v82; // ebx
  __int64 v83; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v83 = *(_QWORD *)a1;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
    {
      v10 = KeGetCurrentThread();
      v11 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8) )
      {
        v13 = (__int64 *)PsGetThreadWin32Thread(v10);
        if ( v13 )
          v11 = *v13;
      }
      v14 = *(_QWORD *)(v11 + 280);
      v15 = 0LL;
      *(_DWORD *)(v14 + 4) = *((_DWORD *)a1 + 23);
      v16 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v12) )
      {
        v18 = (__int64 *)PsGetThreadWin32Thread(v16);
        if ( v18 )
          v15 = *v18;
      }
      v19 = *(_QWORD *)(v15 + 280);
      v20 = 0LL;
      *(_DWORD *)(v19 + 8) = *((_DWORD *)a1 + 24);
      v21 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v17) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v24 )
          v20 = *v24;
      }
      v25 = KeGetCurrentThread();
      v26 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22) )
      {
        v28 = (__int64 *)PsGetThreadWin32Thread(v25);
        if ( v28 )
          v26 = *v28;
      }
      v29 = *(_QWORD *)(v20 + 280);
      v30 = 0LL;
      v31 = *(_QWORD *)(v26 + 280);
      *(_DWORD *)(v31 + 20) = *(_DWORD *)(v29 + 4);
      v32 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v27) )
      {
        v35 = (__int64 *)PsGetThreadWin32Thread(v32);
        if ( v35 )
          v30 = *v35;
      }
      v36 = KeGetCurrentThread();
      v37 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
      {
        v38 = (__int64 *)PsGetThreadWin32Thread(v36);
        if ( v38 )
          v37 = *v38;
      }
      *(_DWORD *)(*(_QWORD *)(v37 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v30 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess(a1, v3);
      v39 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40) )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v39);
        if ( v42 )
          v2 = *v42;
      }
      **(_DWORD **)(v2 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83);
      v43 = *((_DWORD *)a1 + 23);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v43;
      v44 = *((_DWORD *)a1 + 24);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v44;
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    v47 = KeGetCurrentThread();
    v48 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v46, v45) )
    {
      v50 = (__int64 *)PsGetThreadWin32Thread(v47);
      if ( v50 )
        v48 = *v50;
    }
    v51 = *(_QWORD *)(v48 + 280);
    v52 = 0LL;
    *(_DWORD *)(v51 + 12) = *((_DWORD *)a1 + 25);
    v53 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v51, v49) )
    {
      v55 = (__int64 *)PsGetThreadWin32Thread(v53);
      if ( v55 )
        v52 = *v55;
    }
    v56 = *(_QWORD *)(v52 + 280);
    v57 = 0LL;
    *(_DWORD *)(v56 + 16) = *((_DWORD *)a1 + 26);
    v58 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v56, v54) )
    {
      v61 = (__int64 *)PsGetThreadWin32Thread(v58);
      if ( v61 )
        v57 = *v61;
    }
    v62 = KeGetCurrentThread();
    v63 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v60, v59) )
    {
      v65 = (__int64 *)PsGetThreadWin32Thread(v62);
      if ( v65 )
        v63 = *v65;
    }
    v66 = *(_QWORD *)(v57 + 280);
    v67 = 0LL;
    v68 = *(_QWORD *)(v63 + 280);
    *(_DWORD *)(v68 + 20) = *(_DWORD *)(v66 + 12);
    v69 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v68, v64) )
    {
      v72 = (__int64 *)PsGetThreadWin32Thread(v69);
      if ( v72 )
        v67 = *v72;
    }
    v73 = KeGetCurrentThread();
    v74 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v71, v70) )
    {
      v75 = (__int64 *)PsGetThreadWin32Thread(v73);
      if ( v75 )
        v74 = *v75;
    }
    *(_DWORD *)(*(_QWORD *)(v74 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v67 + 280) + 16LL);
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    v76 = KeGetCurrentThread();
    v77 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v79, v78) )
    {
      v80 = (__int64 *)PsGetThreadWin32Thread(v76);
      if ( v80 )
        v77 = *v80;
    }
    **(_DWORD **)(v77 + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83);
    v81 = *((_DWORD *)a1 + 25);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) = v81;
    v82 = *((_DWORD *)a1 + 26);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 100) = v82;
    *((_DWORD *)a1 + 22) = 0;
  }
}
