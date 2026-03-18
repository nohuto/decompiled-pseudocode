/*
 * XREFs of ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C02627F4
 * Callers:
 *     GrePtInSprite @ 0x1C00A28B0 (GrePtInSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C009693C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0264E68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265B68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiPtInSprite(HDEV a1, HWND a2, int a3, int a4)
{
  unsigned int v7; // ebx
  HDEV v8; // rsi
  const struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *MetaSprite; // rbp
  int v11; // r9d
  unsigned int v12; // edi
  __int64 v13; // rax
  struct SPRITE *Sprite; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v17);
  v8 = v17;
  v9 = (const struct _SPRITESTATE *)(v17 + 22);
  if ( *((_DWORD *)v17 + 37) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL);
    if ( MetaSprite )
    {
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)v8 + 19) + 8LL * v12);
          if ( (unsigned int)bSpPtInSprite(
                               *((struct SPRITE **)MetaSprite + v12 + 3),
                               a3 - *(_DWORD *)(v13 + 2584),
                               a4 - *(_DWORD *)(v13 + 2588)) )
            break;
          if ( ++v12 >= *((_DWORD *)v8 + 37) )
            goto LABEL_10;
        }
        v7 = 1;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v9, a2, 0LL);
    if ( Sprite )
      v7 = bSpPtInSprite(Sprite, a3, a4);
  }
LABEL_10:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  return v7;
}
