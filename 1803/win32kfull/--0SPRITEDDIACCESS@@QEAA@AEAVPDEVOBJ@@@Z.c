/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C007A1D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010B444 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C024AD60 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C024E028 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C024E1C0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02500A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0250344 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02509A4 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0253134 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0255FD4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0256F80 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A474 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007AFEC (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rax

  *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v4 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    v9 = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v6) )
    {
      v12 = (__int64 *)PsGetThreadWin32Thread(v9);
      if ( v12 )
        v10 = *v12;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 280) + 32LL) == *(_QWORD *)this )
      v13 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 280);
    else
      v13 = 0;
    *((_DWORD *)this + 2) = v13;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)this + 88LL);
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v14;
    *((_OWORD *)this + 2) = *(_OWORD *)(v14 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v14 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v14 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v14 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v14 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v14 + 96);
    *((_OWORD *)this + 8) = *(_OWORD *)(v14 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v14 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v14 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v14 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
  return this;
}
