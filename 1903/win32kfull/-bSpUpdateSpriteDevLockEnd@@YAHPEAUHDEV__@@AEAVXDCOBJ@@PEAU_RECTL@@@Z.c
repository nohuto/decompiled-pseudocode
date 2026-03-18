/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C01628E4
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0162788 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C003F010 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C027ED94 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall bSpUpdateSpriteDevLockEnd(_DWORD *a1, HDC **a2, struct _RECTL *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  HDEV v7; // rsi
  int v8; // r10d
  const struct _SPRITESTATE *v9; // rcx
  struct tagSIZE v10; // rax
  HWND v11; // rdx
  struct SPRITE *Sprite; // rcx
  HDC *v13; // r9
  int v15; // r10d
  struct _METASPRITE *MetaSprite; // r12
  unsigned int v17; // r14d
  struct tagSIZE v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0;
  if ( (a1[10] & 0x400) == 0 )
  {
    v7 = (HDEV)(a1 + 22);
    v8 = a1[37];
    v9 = (const struct _SPRITESTATE *)(a1 + 22);
    v10 = (struct tagSIZE)(*a2)[64];
    v11 = (HWND)(*a2)[59];
    v18 = v10;
    if ( v8 )
    {
      MetaSprite = pSpGetMetaSprite(v9, v11, 0LL);
      if ( MetaSprite )
      {
        v6 = 1;
        v17 = 0;
        if ( v15 )
        {
          do
            v6 &= bSpUpdateSprite(
                    *((struct SPRITE **)MetaSprite + v17++ + 3),
                    0LL,
                    0LL,
                    &v18,
                    **a2,
                    &gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    a3);
          while ( v17 < *((_DWORD *)v7 + 15) );
        }
      }
    }
    else
    {
      Sprite = pSpGetSprite(v9, v11, 0LL);
      if ( Sprite )
        return (unsigned int)bSpUpdateSprite(Sprite, 0LL, 0LL, &v18, *v13, &gptlZero, 0, 0LL, 0x40200000u, a3);
    }
    return v6;
  }
  return v3;
}
