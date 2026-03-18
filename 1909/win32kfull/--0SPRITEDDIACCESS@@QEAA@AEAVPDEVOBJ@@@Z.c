/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00676D0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0081A34 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00824CC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00826AC (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0085780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00866D4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0086CC8 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0112774 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B290 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027B8A8 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027CED0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027D9C0 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027DB64 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027E428 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027E848 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C027FAA4 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281034 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0282AE0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00874FC (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0087CF8 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rsi
  __int64 *v14; // rax
  int v15; // eax
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  struct _KTHREAD *v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KTHREAD *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbp
  struct _KTHREAD *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  struct _KTHREAD *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 *v43; // rax
  struct _KTHREAD *v44; // r15
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rcx
  struct _KTHREAD *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v56; // rax
  struct _KTHREAD *v57; // r15
  __int64 v58; // rbp
  __int64 *v59; // rax
  struct _KTHREAD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 *v64; // rax
  int v65; // ebx
  int v66; // ebx
  __int64 v68; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v7 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
  {
    v12 = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v8, v9) )
    {
      v14 = (__int64 *)PsGetThreadWin32Thread(v12);
      if ( v14 )
        v13 = *v14;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v13 + 280) + 32LL) == *(_QWORD *)this )
      v15 = **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    else
      v15 = 0;
    *((_DWORD *)this + 2) = v15;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    v16 = (char *)*(unsigned int *)(*(_QWORD *)this + 88LL);
    *((_DWORD *)this + 2) = (_DWORD)v16;
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v8 = 128LL;
    v18 = *(_QWORD *)(v17 + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v18;
    *((_OWORD *)this + 2) = *(_OWORD *)(v18 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v18 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v18 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v18 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v18 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v18 + 96);
    v16 = (char *)this + 144;
    *((_OWORD *)this + 8) = *(_OWORD *)(v18 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v18 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v18 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v18 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v19 = *(_QWORD *)this;
    v68 = **(_QWORD **)this;
    v20 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v8, v9)
      && (v21 = (__int64 *)PsGetThreadWin32Thread(v20)) != 0LL
      && (v22 = *v21) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v68)
      && (*(_DWORD *)(v22 + 104) || *(_DWORD *)(v22 + 108)) )
    {
      v26 = KeGetCurrentThread();
      v27 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23, v25) )
      {
        v30 = (__int64 *)PsGetThreadWin32Thread(v26);
        if ( v30 )
          v27 = *v30;
      }
      v31 = *(_QWORD *)(v27 + 280);
      v32 = 0LL;
      *(_DWORD *)(v31 + 4) = *(_DWORD *)(v19 + 92);
      v33 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v28, v29) )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(v33);
        if ( v36 )
          v32 = *v36;
      }
      v37 = *(_QWORD *)(v32 + 280);
      v38 = 0LL;
      *(_DWORD *)(v37 + 8) = *(_DWORD *)(v19 + 96);
      v39 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v34, v35) )
      {
        v43 = (__int64 *)PsGetThreadWin32Thread(v39);
        if ( v43 )
          v38 = *v43;
      }
      v44 = KeGetCurrentThread();
      v45 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40, v42) )
      {
        v48 = (__int64 *)PsGetThreadWin32Thread(v44);
        if ( v48 )
          v45 = *v48;
      }
      v49 = *(_QWORD *)(v38 + 280);
      v50 = 0LL;
      v51 = *(_QWORD *)(v45 + 280);
      *(_DWORD *)(v51 + 20) = *(_DWORD *)(v49 + 4);
      v52 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v51, v46, v47) )
      {
        v56 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v56 )
          v50 = *v56;
      }
      v57 = KeGetCurrentThread();
      v58 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v54, v53, v55) )
      {
        v59 = (__int64 *)PsGetThreadWin32Thread(v57);
        if ( v59 )
          v58 = *v59;
      }
      *(_DWORD *)(*(_QWORD *)(v58 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v50 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v19, 1);
      v60 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v62, v61, v63) )
      {
        v64 = (__int64 *)PsGetThreadWin32Thread(v60);
        if ( v64 )
          v3 = *v64;
      }
      **(_DWORD **)(v3 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v68);
      v65 = *(_DWORD *)(v19 + 92);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v19 + 32)) + 112) = v65;
      v66 = *(_DWORD *)(v19 + 96);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v19 + 32)) + 100) = v66;
      *(_DWORD *)(v19 + 88) = 1;
    }
  }
  return this;
}
