/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0255FD4
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C024B480 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FE1C0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE3AC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0254F24 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(_QWORD *a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _POINTL *v13; // rdx
  struct _SPRITESTATE *v14[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v15; // [rsp+F0h] [rbp+8h] BYREF

  v15 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v15);
  v6 = a1[11];
  if ( a2 && v6 )
  {
    if ( (struct SPRITE *)v6 == a2 )
    {
      a1[11] = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = 0LL;
      else
        a1[12] = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      v8 = (char *)a2 + 24;
      v9 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v8 = (char *)a2 + 24;
      v10 = *((_QWORD *)a2 + 4);
      if ( (struct SPRITE *)a1[12] == a2 )
        a1[12] = v10;
      else
        *(_QWORD *)(*(_QWORD *)v8 + 32LL) = v10;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *(_QWORD *)v8;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
      v9 = 0LL;
    }
    if ( !v9 && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *(_QWORD *)v8 = *((_QWORD *)a3 + 3);
        v12 = *((_QWORD *)a3 + 3);
        if ( v12 )
          *(_QWORD *)(v12 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( (struct SPRITE *)a1[12] == a3 )
          a1[12] = a2;
      }
      else
      {
        *(_QWORD *)v8 = a1[11];
        v11 = a1[11];
        if ( v11 )
          *(_QWORD *)(v11 + 32) = a2;
        else
          a1[12] = a2;
        a1[11] = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 10));
      vSpRemoveAllSpriteOverlapPresents(a1, v13);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 49) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 10));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v14);
}
