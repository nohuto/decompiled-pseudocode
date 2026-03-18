/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C003E320 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027B7DC (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027E920 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027EAE8 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C027EE30 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027EF08 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027F2EC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C003D694 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C003D708 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  SURFOBJ *v9; // rax
  SURFOBJ *v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  W32PIDLOCK *v18; // rbp
  int v19; // eax
  _BYTE v20[192]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v16)) )
  {
LABEL_3:
    v8 = *((_QWORD *)a1 + 16);
    if ( hsurf )
    {
      if ( !v8 )
        goto LABEL_36;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
      {
        vSpDeleteShape(a1);
        v8 = *((_QWORD *)a1 + 16);
      }
      if ( !v8 )
      {
LABEL_36:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v9 = EngLockSurface(hsurf);
          v10 = v9;
          if ( v9 )
          {
            if ( v9->iType == 3 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 116) & 1) != 0 )
            {
              EngUnlockSurface(v10);
              v10 = 0LL;
            }
            if ( v10 )
            {
              v11 = *(_DWORD *)a1 | 0x40;
              *((_QWORD *)a1 + 16) = v10;
              *(_DWORD *)a1 = v11;
              if ( a3 )
                *(_DWORD *)a1 = v11 | 0x80;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v10->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v10->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
              v13 = *(_QWORD *)(v12 + 128);
              if ( v13 )
                INC_SHARE_REF_CNT(*(_QWORD *)(v12 + 128));
              v14 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = v13;
              v21 = *v14;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v20, (struct PDEVOBJ *)&v21);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v20);
            }
          }
        }
      }
    }
    else if ( v8 )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  v18 = (W32PIDLOCK *)(v17 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 272));
  if ( !*(_DWORD *)(v16 + 324) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v18);
    goto LABEL_3;
  }
  *(_QWORD *)(v16 + 328) = UserGetHDEV();
  *(_QWORD *)(v16 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v16 + 344) = hsurf;
  memset((void *)(v16 + 352), 0, 0x88uLL);
  v19 = *(_DWORD *)(v16 + 112);
  *(_QWORD *)(v16 + 488) = 0LL;
  if ( (v19 & 0x2000000) == 0 )
    *(_DWORD *)(v16 + 112) = v19 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v18);
  return 1LL;
}
