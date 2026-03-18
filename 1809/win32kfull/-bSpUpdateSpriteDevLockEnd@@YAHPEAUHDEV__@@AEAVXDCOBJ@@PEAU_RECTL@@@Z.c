/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C015AD40
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C015ABFC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265B68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall bSpUpdateSpriteDevLockEnd(HDEV a1, HDC **a2, struct _RECTL *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  HDC *v7; // r8
  HDEV v8; // rsi
  int v9; // r9d
  struct tagSIZE v10; // rax
  HWND v11; // rdx
  __int64 v12; // rcx
  int v14; // r9d
  struct _METASPRITE *MetaSprite; // r12
  unsigned int v16; // r14d
  struct tagSIZE v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0;
  if ( ((_DWORD)a1[10] & 0x400) == 0 )
  {
    v7 = *a2;
    v8 = a1 + 22;
    v9 = *((_DWORD *)a1 + 37);
    v10 = (struct tagSIZE)(*a2)[64];
    v11 = (HWND)(*a2)[59];
    v17 = v10;
    if ( v9 )
    {
      MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)(a1 + 22), v11, 0LL);
      if ( MetaSprite )
      {
        v6 = 1;
        v16 = 0;
        if ( v14 )
        {
          do
            v6 &= bSpUpdateSprite(
                    *((struct SPRITE **)MetaSprite + v16++ + 3),
                    0LL,
                    0LL,
                    &v17,
                    **a2,
                    &gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    a3);
          while ( v16 < *((_DWORD *)v8 + 15) );
        }
      }
    }
    else if ( v11 )
    {
      v12 = *((_QWORD *)a1 + 12);
      if ( v12 )
      {
        do
        {
          if ( *(HWND *)(v12 + 72) == v11 && (*(_DWORD *)v12 & 0x400) == 0 )
            break;
          v12 = *(_QWORD *)(v12 + 24);
        }
        while ( v12 );
        if ( v12 )
          return (unsigned int)bSpUpdateSprite(
                                 (struct SPRITE *)v12,
                                 0LL,
                                 0LL,
                                 &v17,
                                 *v7,
                                 &gptlZero,
                                 0,
                                 0LL,
                                 0x40200000u,
                                 a3);
      }
    }
    return v6;
  }
  return v3;
}
