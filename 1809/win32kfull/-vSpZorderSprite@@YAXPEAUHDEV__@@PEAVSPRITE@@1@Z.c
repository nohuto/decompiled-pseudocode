/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0096990
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C00968A4 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C02622D8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096970 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C0096C58 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096E50 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  struct SPRITE *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v13; // [rsp+F0h] [rbp+8h] BYREF

  v13 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v13);
  v6 = (struct SPRITE *)*((_QWORD *)a1 + 12);
  if ( a2 && v6 )
  {
    if ( v6 == a2 )
    {
      *((_QWORD *)a1 + 12) = *((_QWORD *)v6 + 3);
      v7 = *((_QWORD *)v6 + 3);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = 0LL;
      else
        *((_QWORD *)a1 + 13) = 0LL;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 4) = 0LL;
      v6 = (struct SPRITE *)((char *)a2 + 24);
      v8 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v6 = (struct SPRITE *)((char *)a2 + 24);
      v11 = *((_QWORD *)a2 + 4);
      if ( *((struct SPRITE **)a1 + 13) == a2 )
        *((_QWORD *)a1 + 13) = v11;
      else
        *(_QWORD *)(*(_QWORD *)v6 + 32LL) = v11;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
      v8 = 0LL;
    }
    if ( !v8 && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *(_QWORD *)v6 = *((_QWORD *)a3 + 3);
        v10 = *((_QWORD *)a3 + 3);
        if ( v10 )
          *(_QWORD *)(v10 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( *((struct SPRITE **)a1 + 13) == a3 )
          *((_QWORD *)a1 + 13) = a2;
      }
      else
      {
        *(_QWORD *)v6 = *((_QWORD *)a1 + 12);
        v9 = *((_QWORD *)a1 + 12);
        if ( v9 )
          *(_QWORD *)(v9 + 32) = a2;
        else
          *((_QWORD *)a1 + 13) = a2;
        *((_QWORD *)a1 + 12) = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 22));
      vSpRemoveAllSpriteOverlapPresents(a1);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 51) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 22));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v12, (__int64)v6);
}
