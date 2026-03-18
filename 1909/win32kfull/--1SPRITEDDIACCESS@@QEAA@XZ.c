/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198
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
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(__int64 **this, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct _KTHREAD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  struct _KTHREAD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  struct _KTHREAD *v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rax
  struct _KTHREAD *v42; // r14
  __int64 v43; // rbx
  __int64 *v44; // rax
  struct _KTHREAD *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // rax
  int v51; // ebx
  int v52; // ebx
  _OWORD *v53; // rcx
  __int128 v54; // [rsp+20h] [rbp-C8h]
  __int128 v55; // [rsp+30h] [rbp-B8h]
  __int128 v56; // [rsp+40h] [rbp-A8h]
  __int128 v57; // [rsp+50h] [rbp-98h]
  __int128 v58; // [rsp+60h] [rbp-88h]
  __int128 v59; // [rsp+70h] [rbp-78h]
  __int128 v60; // [rsp+80h] [rbp-68h]
  __int128 v61; // [rsp+90h] [rbp-58h]
  __int128 v62; // [rsp+A0h] [rbp-48h]
  __int128 v63; // [rsp+B0h] [rbp-38h]
  __int64 *v64; // [rsp+C0h] [rbp-28h]
  __int64 v65; // [rsp+F0h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v4 = *this;
    v65 = **this;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3)
      && (v6 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v7 = *v6) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v65)
      && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
    {
      v11 = KeGetCurrentThread();
      v12 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v11);
        if ( ThreadWin32Thread )
          v12 = *ThreadWin32Thread;
      }
      v16 = *(_QWORD *)(v12 + 280);
      v17 = 0LL;
      *(_DWORD *)(v16 + 12) = *((_DWORD *)v4 + 25);
      v18 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v13, v14) )
      {
        v21 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v21 )
          v17 = *v21;
      }
      v22 = *(_QWORD *)(v17 + 280);
      v23 = 0LL;
      *(_DWORD *)(v22 + 16) = *((_DWORD *)v4 + 26);
      v24 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v19, v20) )
      {
        v28 = (__int64 *)PsGetThreadWin32Thread(v24);
        if ( v28 )
          v23 = *v28;
      }
      v29 = KeGetCurrentThread();
      v30 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v29);
        if ( v33 )
          v30 = *v33;
      }
      v34 = *(_QWORD *)(v23 + 280);
      v35 = 0LL;
      v36 = *(_QWORD *)(v30 + 280);
      *(_DWORD *)(v36 + 20) = *(_DWORD *)(v34 + 12);
      v37 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v31, v32) )
      {
        v41 = (__int64 *)PsGetThreadWin32Thread(v37);
        if ( v41 )
          v35 = *v41;
      }
      v42 = KeGetCurrentThread();
      v43 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40) )
      {
        v44 = (__int64 *)PsGetThreadWin32Thread(v42);
        if ( v44 )
          v43 = *v44;
      }
      *(_DWORD *)(*(_QWORD *)(v43 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v35 + 280) + 16LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v4, 0);
      v45 = KeGetCurrentThread();
      v46 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v48, v47, v49) )
      {
        v50 = (__int64 *)PsGetThreadWin32Thread(v45);
        if ( v50 )
          v46 = *v50;
      }
      **(_DWORD **)(v46 + 280) = 0;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v65);
      v51 = *((_DWORD *)v4 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v4[4]) + 112) = v51;
      v52 = *((_DWORD *)v4 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v4[4]) + 100) = v52;
      *((_DWORD *)v4 + 22) = 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v54 = *((_OWORD *)this + 1);
    v55 = *((_OWORD *)this + 2);
    v56 = *((_OWORD *)this + 3);
    v57 = *((_OWORD *)this + 4);
    v58 = *((_OWORD *)this + 5);
    v59 = *((_OWORD *)this + 6);
    v60 = *((_OWORD *)this + 7);
    v61 = *((_OWORD *)this + 8);
    v62 = *((_OWORD *)this + 9);
    v63 = *((_OWORD *)this + 10);
    v64 = this[22];
    v53 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *v53 = v54;
    v53[1] = v55;
    v53[2] = v56;
    v53[3] = v57;
    v53[4] = v58;
    v53[5] = v59;
    v53[6] = v60;
    v53 += 8;
    *(v53 - 1) = v61;
    *v53 = v62;
    v53[1] = v63;
    *((_QWORD *)v53 + 4) = v64;
  }
}
