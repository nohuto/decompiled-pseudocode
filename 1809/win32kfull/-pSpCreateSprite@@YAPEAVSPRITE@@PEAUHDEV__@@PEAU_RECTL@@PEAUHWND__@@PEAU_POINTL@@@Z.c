/*
 * XREFs of ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0095E04 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02628EC (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C02656F4 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02658BC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0265CDC (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C02660C0 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C009601C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096970 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _RECTL *a2, HWND a3, struct _RECTL *a4)
{
  _DWORD *v4; // rbx
  HDEV v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // rdx
  struct _RECTL *v11; // rax
  LONG top; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v17[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v18; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v18 = a1;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v18);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v18);
    v8 = v18 + 22;
    v9 = PALLOCMEM2(0x110uLL, 544240455LL, 1);
    v4 = v9;
    if ( v9 )
    {
      if ( a2 )
      {
        v9[44] = a2->right - a2->left;
        v9[45] = a2->bottom - a2->top;
        v11 = a4;
        if ( !a4 )
          v11 = a2;
        v4[28] = v11->left;
        if ( a4 )
          top = a4->top;
        else
          top = a2->top;
      }
      else
      {
        v9[44] = 0;
        v9[45] = 0;
        v9[28] = 0x80000000;
        top = 0x80000000;
      }
      v4[29] = top;
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v8;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v13 = *((_QWORD *)v8 + 140);
      if ( *((_QWORD *)v8 + 1) == v13 )
      {
        *((_QWORD *)v4 + 3) = v13;
        if ( v13 )
          *(_QWORD *)(v13 + 32) = v4;
        else
          *((_QWORD *)v8 + 2) = v4;
        *((_QWORD *)v8 + 1) = v4;
      }
      else if ( v13 )
      {
        *(_QWORD *)(*(_QWORD *)(v13 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v13 + 32);
        *((_QWORD *)v4 + 3) = v13;
        *(_QWORD *)(v13 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v8 + 2);
        *(_QWORD *)(*((_QWORD *)v8 + 2) + 24LL) = v4;
        *((_QWORD *)v8 + 2) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v8);
      v14 = *((_QWORD *)v8 + 3);
      *((_QWORD *)v8 + 3) = v4;
      *((_QWORD *)v4 + 5) = v14;
      if ( v14 )
        *(_QWORD *)(v14 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v17, v10);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  }
  return (struct SPRITE *)v4;
}
