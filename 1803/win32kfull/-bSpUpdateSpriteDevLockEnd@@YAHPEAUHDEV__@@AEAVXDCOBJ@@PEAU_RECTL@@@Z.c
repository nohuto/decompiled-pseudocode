/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C024FC50
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0250548 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02505B0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
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
  int v12; // r10d
  struct _METASPRITE *MetaSprite; // r12
  unsigned int v14; // r14d
  struct SPRITE *Sprite; // rcx
  HDC *v16; // r9
  struct tagSIZE v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0;
  if ( (a1[10] & 0x400) == 0 )
  {
    v7 = (HDEV)(a1 + 20);
    v8 = a1[35];
    v9 = (const struct _SPRITESTATE *)(a1 + 20);
    v10 = (struct tagSIZE)(*a2)[65];
    v11 = (HWND)(*a2)[60];
    v18 = v10;
    if ( v8 )
    {
      MetaSprite = pSpGetMetaSprite(v9, v11, 0LL);
      if ( MetaSprite )
      {
        v6 = 1;
        v14 = 0;
        if ( v12 )
        {
          do
            v6 &= bSpUpdateSprite(
                    *((struct SPRITE **)MetaSprite + v14++ + 3),
                    0LL,
                    0LL,
                    &v18,
                    **a2,
                    &gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    a3);
          while ( v14 < *((_DWORD *)v7 + 15) );
        }
      }
    }
    else
    {
      Sprite = pSpGetSprite(v9, v11, 0LL);
      if ( Sprite )
        return (unsigned int)bSpUpdateSprite(Sprite, 0LL, 0LL, &v18, *v16, &gptlZero, 0, 0LL, 0x40200000u, a3);
    }
    return v6;
  }
  return v3;
}
