/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C024A3D4 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C024A5E0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C024FEE0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02500A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0250870 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02509A4 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0250D74 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0252F34 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0254E9C (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  W32PIDLOCK *v10; // rbp
  int v11; // eax
  __int64 v13; // rcx
  SURFOBJ *v14; // rax
  SURFOBJ *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rax
  struct _SPRITESTATE *v20[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v8)) )
  {
LABEL_13:
    v13 = *((_QWORD *)a1 + 16);
    if ( hsurf )
    {
      if ( !v13 )
        goto LABEL_35;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
      {
        vSpDeleteShape(a1);
        v13 = *((_QWORD *)a1 + 16);
      }
      if ( !v13 )
      {
LABEL_35:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v14 = EngLockSurface(hsurf);
          v15 = v14;
          if ( v14 )
          {
            if ( v14->iType == 3 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 116) & 1) != 0 )
            {
              EngUnlockSurface(v15);
              v15 = 0LL;
            }
            if ( v15 )
            {
              v16 = *(_DWORD *)a1 | 0x40;
              *((_QWORD *)a1 + 16) = v15;
              *(_DWORD *)a1 = v16;
              if ( a3 )
                *(_DWORD *)a1 = v16 | 0x80;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v15->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v15->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
              v18 = *(_QWORD *)(v17 + 128);
              if ( v18 )
                INC_SHARE_REF_CNT(*(_QWORD *)(v17 + 128));
              v19 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = v18;
              v21 = *v19;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v20, (struct PDEVOBJ *)&v21);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v20);
            }
          }
        }
      }
    }
    else if ( v13 )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  v10 = (W32PIDLOCK *)(v9 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 272));
  if ( !*(_DWORD *)(v8 + 324) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v10);
    goto LABEL_13;
  }
  *(_QWORD *)(v8 + 328) = UserGetHDEV();
  *(_QWORD *)(v8 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 344) = hsurf;
  memset((void *)(v8 + 352), 0, 0x88uLL);
  v11 = *(_DWORD *)(v8 + 112);
  *(_QWORD *)(v8 + 488) = 0LL;
  if ( (v11 & 0x2000000) == 0 )
    *(_DWORD *)(v8 + 112) = v11 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v10);
  return 1LL;
}
