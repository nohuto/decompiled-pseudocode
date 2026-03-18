/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0096494
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00963A8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0262164 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C02656F4 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02658BC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0265C04 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0265CDC (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C02660C0 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000B3D4 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C009583C (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v15; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  W32PIDLOCK *v19; // rbp
  int v20; // eax
  __int64 *v21[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v17)) )
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
              v22 = *v14;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v22);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v15);
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
  v19 = (W32PIDLOCK *)(v18 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 272));
  if ( !*(_DWORD *)(v17 + 324) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v19);
    goto LABEL_3;
  }
  *(_QWORD *)(v17 + 328) = UserGetHDEV();
  *(_QWORD *)(v17 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v17 + 344) = hsurf;
  memset((void *)(v17 + 352), 0, 0x88uLL);
  v20 = *(_DWORD *)(v17 + 112);
  *(_QWORD *)(v17 + 488) = 0LL;
  if ( (v20 & 0x2000000) == 0 )
    *(_DWORD *)(v17 + 112) = v20 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v19);
  return 1LL;
}
