/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0045DE4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0096494 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0096990 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012C5D4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C02622D8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02628EC (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0264E68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026500C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02658BC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0265CDC (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C026700C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0269FD0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C004515C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0045958 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rsi
  __int64 *v12; // rax
  int v13; // eax
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  struct _KTHREAD *v18; // rbp
  __int64 *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KTHREAD *v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbp
  struct _KTHREAD *v29; // r14
  __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  struct _KTHREAD *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rax
  struct _KTHREAD *v38; // r15
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rcx
  struct _KTHREAD *v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // rax
  struct _KTHREAD *v49; // r15
  __int64 v50; // rbp
  __int64 *v51; // rax
  struct _KTHREAD *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // rax
  int v56; // ebx
  int v57; // ebx
  __int64 v59; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v6 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    v10 = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v7) )
    {
      v12 = (__int64 *)PsGetThreadWin32Thread(v10);
      if ( v12 )
        v11 = *v12;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 280) + 32LL) == *(_QWORD *)this )
      v13 = **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    else
      v13 = 0;
    *((_DWORD *)this + 2) = v13;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    v14 = (char *)*(unsigned int *)(*(_QWORD *)this + 88LL);
    *((_DWORD *)this + 2) = (_DWORD)v14;
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7 = 128LL;
    v16 = *(_QWORD *)(v15 + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v16;
    *((_OWORD *)this + 2) = *(_OWORD *)(v16 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v16 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v16 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v16 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v16 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v16 + 96);
    v14 = (char *)this + 144;
    *((_OWORD *)this + 8) = *(_OWORD *)(v16 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v16 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v16 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v16 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v17 = *(_QWORD *)this;
    v59 = **(_QWORD **)this;
    v18 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v7)
      && (v19 = (__int64 *)PsGetThreadWin32Thread(v18)) != 0LL
      && (v20 = *v19) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v59)
      && (*(_DWORD *)(v20 + 104) || *(_DWORD *)(v20 + 108)) )
    {
      v23 = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v21) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v23);
        if ( v26 )
          v24 = *v26;
      }
      v27 = *(_QWORD *)(v24 + 280);
      v28 = 0LL;
      *(_DWORD *)(v27 + 4) = *(_DWORD *)(v17 + 92);
      v29 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v25) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v29);
        if ( v31 )
          v28 = *v31;
      }
      v32 = *(_QWORD *)(v28 + 280);
      v33 = 0LL;
      *(_DWORD *)(v32 + 8) = *(_DWORD *)(v17 + 96);
      v34 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v30) )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v34);
        if ( v37 )
          v33 = *v37;
      }
      v38 = KeGetCurrentThread();
      v39 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v35) )
      {
        v41 = (__int64 *)PsGetThreadWin32Thread(v38);
        if ( v41 )
          v39 = *v41;
      }
      v42 = *(_QWORD *)(v33 + 280);
      v43 = 0LL;
      v44 = *(_QWORD *)(v39 + 280);
      *(_DWORD *)(v44 + 20) = *(_DWORD *)(v42 + 4);
      v45 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v44, v40) )
      {
        v48 = (__int64 *)PsGetThreadWin32Thread(v45);
        if ( v48 )
          v43 = *v48;
      }
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v47, v46) )
      {
        v51 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v51 )
          v50 = *v51;
      }
      *(_DWORD *)(*(_QWORD *)(v50 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v43 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v17, 1);
      v52 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v54, v53) )
      {
        v55 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v55 )
          v2 = *v55;
      }
      **(_DWORD **)(v2 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v59);
      v56 = *(_DWORD *)(v17 + 92);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v17 + 32)) + 112) = v56;
      v57 = *(_DWORD *)(v17 + 96);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v17 + 32)) + 100) = v57;
      *(_DWORD *)(v17 + 88) = 1;
    }
  }
  return this;
}
