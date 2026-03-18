/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8
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
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(__int64 **this, __int64 a2)
{
  __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rbp
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  struct _KTHREAD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  struct _KTHREAD *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rax
  struct _KTHREAD *v35; // r14
  __int64 v36; // rbx
  __int64 *v37; // rax
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rax
  int v43; // ebx
  int v44; // ebx
  _OWORD *v45; // rcx
  __int128 v46; // [rsp+20h] [rbp-C8h]
  __int128 v47; // [rsp+30h] [rbp-B8h]
  __int128 v48; // [rsp+40h] [rbp-A8h]
  __int128 v49; // [rsp+50h] [rbp-98h]
  __int128 v50; // [rsp+60h] [rbp-88h]
  __int128 v51; // [rsp+70h] [rbp-78h]
  __int128 v52; // [rsp+80h] [rbp-68h]
  __int128 v53; // [rsp+90h] [rbp-58h]
  __int128 v54; // [rsp+A0h] [rbp-48h]
  __int128 v55; // [rsp+B0h] [rbp-38h]
  __int64 *v56; // [rsp+C0h] [rbp-28h]
  __int64 v57; // [rsp+F0h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v3 = *this;
    v57 = **this;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2)
      && (v5 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v6 = *v5) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v57)
      && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
    {
      v9 = KeGetCurrentThread();
      v10 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v9);
        if ( ThreadWin32Thread )
          v10 = *ThreadWin32Thread;
      }
      v13 = *(_QWORD *)(v10 + 280);
      v14 = 0LL;
      *(_DWORD *)(v13 + 12) = *((_DWORD *)v3 + 25);
      v15 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v11) )
      {
        v17 = (__int64 *)PsGetThreadWin32Thread(v15);
        if ( v17 )
          v14 = *v17;
      }
      v18 = *(_QWORD *)(v14 + 280);
      v19 = 0LL;
      *(_DWORD *)(v18 + 16) = *((_DWORD *)v3 + 26);
      v20 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v16) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v23 )
          v19 = *v23;
      }
      v24 = KeGetCurrentThread();
      v25 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v21) )
      {
        v27 = (__int64 *)PsGetThreadWin32Thread(v24);
        if ( v27 )
          v25 = *v27;
      }
      v28 = *(_QWORD *)(v19 + 280);
      v29 = 0LL;
      v30 = *(_QWORD *)(v25 + 280);
      *(_DWORD *)(v30 + 20) = *(_DWORD *)(v28 + 12);
      v31 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v26) )
      {
        v34 = (__int64 *)PsGetThreadWin32Thread(v31);
        if ( v34 )
          v29 = *v34;
      }
      v35 = KeGetCurrentThread();
      v36 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v32) )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v35);
        if ( v37 )
          v36 = *v37;
      }
      *(_DWORD *)(*(_QWORD *)(v36 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v29 + 280) + 16LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v3, 0);
      v38 = KeGetCurrentThread();
      v39 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40) )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v38);
        if ( v42 )
          v39 = *v42;
      }
      **(_DWORD **)(v39 + 280) = 0;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v57);
      v43 = *((_DWORD *)v3 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v3[4]) + 112) = v43;
      v44 = *((_DWORD *)v3 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v3[4]) + 100) = v44;
      *((_DWORD *)v3 + 22) = 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v46 = *((_OWORD *)this + 1);
    v47 = *((_OWORD *)this + 2);
    v48 = *((_OWORD *)this + 3);
    v49 = *((_OWORD *)this + 4);
    v50 = *((_OWORD *)this + 5);
    v51 = *((_OWORD *)this + 6);
    v52 = *((_OWORD *)this + 7);
    v53 = *((_OWORD *)this + 8);
    v54 = *((_OWORD *)this + 9);
    v55 = *((_OWORD *)this + 10);
    v56 = this[22];
    v45 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *v45 = v46;
    v45[1] = v47;
    v45[2] = v48;
    v45[3] = v49;
    v45[4] = v50;
    v45[5] = v51;
    v45[6] = v52;
    v45 += 8;
    *(v45 - 1) = v53;
    *v45 = v54;
    v45[1] = v55;
    *((_QWORD *)v45 + 4) = v56;
  }
}
