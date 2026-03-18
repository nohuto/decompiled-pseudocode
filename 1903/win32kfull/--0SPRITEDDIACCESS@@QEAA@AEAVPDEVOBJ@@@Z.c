/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C003D834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C003E5EC (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0042CC4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0138774 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027BF68 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027E080 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027E224 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027EAE8 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027EF08 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02831A0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00434F8 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0043CF4 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(
        SPRITEDDIACCESS *this,
        struct PDEVOBJ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rsi
  __int64 *v16; // rax
  int v17; // eax
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  struct _KTHREAD *v22; // rbp
  __int64 *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // r14
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbp
  struct _KTHREAD *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  struct _KTHREAD *v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rax
  struct _KTHREAD *v50; // r15
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rcx
  struct _KTHREAD *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  struct _KTHREAD *v65; // r15
  __int64 v66; // rbp
  __int64 *v67; // rax
  struct _KTHREAD *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rax
  int v74; // ebx
  int v75; // ebx
  __int64 v77; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v8 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v8 + 104) || *(_DWORD *)(v8 + 108)) )
  {
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v9, v10, v11) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v16 )
        v15 = *v16;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 280) + 32LL) == *(_QWORD *)this )
      v17 = **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    else
      v17 = 0;
    *((_DWORD *)this + 2) = v17;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    v18 = (char *)*(unsigned int *)(*(_QWORD *)this + 88LL);
    *((_DWORD *)this + 2) = (_DWORD)v18;
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v9 = 128LL;
    v20 = *(_QWORD *)(v19 + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v20;
    *((_OWORD *)this + 2) = *(_OWORD *)(v20 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v20 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v20 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v20 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v20 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v20 + 96);
    v18 = (char *)this + 144;
    *((_OWORD *)this + 8) = *(_OWORD *)(v20 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v20 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v20 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v20 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v21 = *(_QWORD *)this;
    v77 = **(_QWORD **)this;
    v22 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v9, v10, v11)
      && (v23 = (__int64 *)PsGetThreadWin32Thread(v22)) != 0LL
      && (v24 = *v23) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v77)
      && (*(_DWORD *)(v24 + 104) || *(_DWORD *)(v24 + 108)) )
    {
      v29 = KeGetCurrentThread();
      v30 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
      {
        v34 = (__int64 *)PsGetThreadWin32Thread(v29);
        if ( v34 )
          v30 = *v34;
      }
      v35 = *(_QWORD *)(v30 + 280);
      v36 = 0LL;
      *(_DWORD *)(v35 + 4) = *(_DWORD *)(v21 + 92);
      v37 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v31, v32, v33) )
      {
        v41 = (__int64 *)PsGetThreadWin32Thread(v37);
        if ( v41 )
          v36 = *v41;
      }
      v42 = *(_QWORD *)(v36 + 280);
      v43 = 0LL;
      *(_DWORD *)(v42 + 8) = *(_DWORD *)(v21 + 96);
      v44 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v38, v39, v40) )
      {
        v49 = (__int64 *)PsGetThreadWin32Thread(v44);
        if ( v49 )
          v43 = *v49;
      }
      v50 = KeGetCurrentThread();
      v51 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v46, v45, v47, v48) )
      {
        v55 = (__int64 *)PsGetThreadWin32Thread(v50);
        if ( v55 )
          v51 = *v55;
      }
      v56 = *(_QWORD *)(v43 + 280);
      v57 = 0LL;
      v58 = *(_QWORD *)(v51 + 280);
      *(_DWORD *)(v58 + 20) = *(_DWORD *)(v56 + 4);
      v59 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v58, v52, v53, v54) )
      {
        v64 = (__int64 *)PsGetThreadWin32Thread(v59);
        if ( v64 )
          v57 = *v64;
      }
      v65 = KeGetCurrentThread();
      v66 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v61, v60, v62, v63) )
      {
        v67 = (__int64 *)PsGetThreadWin32Thread(v65);
        if ( v67 )
          v66 = *v67;
      }
      *(_DWORD *)(*(_QWORD *)(v66 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v57 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v21, 1);
      v68 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v70, v69, v71, v72) )
      {
        v73 = (__int64 *)PsGetThreadWin32Thread(v68);
        if ( v73 )
          v4 = *v73;
      }
      **(_DWORD **)(v4 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v77);
      v74 = *(_DWORD *)(v21 + 92);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v21 + 32)) + 112) = v74;
      v75 = *(_DWORD *)(v21 + 96);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v21 + 32)) + 100) = v75;
      *(_DWORD *)(v21 + 88) = 1;
    }
  }
  return this;
}
