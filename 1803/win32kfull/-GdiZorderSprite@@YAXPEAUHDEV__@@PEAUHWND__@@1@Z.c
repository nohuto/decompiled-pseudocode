/*
 * XREFs of ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C024B480
 * Callers:
 *     GreZorderSprite @ 0x1C0077AAC (GreZorderSprite.c)
 * Callees:
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0250548 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02505B0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0255FD4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 */

void __fastcall GdiZorderSprite(HDEV a1, HWND a2, HWND a3)
{
  HDEV v4; // rbx
  __int64 v6; // rbp
  struct _SPRITESTATE *v7; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v9; // r9
  HDEV v10; // r10
  const struct _SPRITESTATE *v11; // rcx
  struct _METASPRITE *MetaSprite; // rax
  __int64 v13; // r10
  __int64 v14; // rdx
  struct _METASPRITE *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _SPRITESTATE *v18; // rcx
  struct SPRITE *v19; // rax
  struct SPRITE *v20; // r9
  HDEV v21; // [rsp+40h] [rbp+8h] BYREF
  char v22; // [rsp+58h] [rbp+20h] BYREF

  v21 = a1;
  v4 = a1 + 20;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v22, (struct PDEVOBJ *)&v21);
  if ( *((_DWORD *)v4 + 15) )
  {
    v6 = 0LL;
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 8 * v6) + 80LL), a3, 0LL);
      Sprite = pSpGetSprite(v7, a2, 0LL);
      vSpZorderSprite(v10, Sprite, v9);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)v4 + 15) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v4, a3, 0LL);
    MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
    v14 = *((_QWORD *)v4 + 9);
    v15 = MetaSprite;
    if ( MetaSprite && v14 )
    {
      if ( (struct _METASPRITE *)v14 == MetaSprite )
      {
        *((_QWORD *)v4 + 9) = *(_QWORD *)(v14 + 8);
      }
      else
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v14 + 8);
          if ( (struct _METASPRITE *)v14 == v15 )
            break;
          v16 = v14;
          v14 = *(_QWORD *)(v14 + 8);
          if ( !v17 )
            goto LABEL_14;
        }
        *(_QWORD *)(v16 + 8) = v17;
      }
      *(_QWORD *)(v14 + 8) = 0LL;
LABEL_14:
      if ( !*((_QWORD *)v15 + 1) )
      {
        if ( v13 )
        {
          *((_QWORD *)v15 + 1) = *(_QWORD *)(v13 + 8);
          *(_QWORD *)(v13 + 8) = v15;
        }
        else
        {
          *((_QWORD *)v15 + 1) = *((_QWORD *)v4 + 9);
          *((_QWORD *)v4 + 9) = v15;
        }
      }
    }
  }
  else
  {
    pSpGetSprite((struct _SPRITESTATE *)v4, a3, 0LL);
    v19 = pSpGetSprite(v18, a2, 0LL);
    vSpZorderSprite(*(HDEV *)v4, v19, v20);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v22);
}
