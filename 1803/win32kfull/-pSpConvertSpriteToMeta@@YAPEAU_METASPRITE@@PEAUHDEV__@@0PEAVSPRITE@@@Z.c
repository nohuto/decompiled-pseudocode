/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02500A0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00FDD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C024E2F4 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0250344 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0252D38 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  unsigned int v9; // ebp
  struct SPRITE *Sprite; // rax
  struct SPRITE *v11; // r15
  HDEV v12; // rcx
  LONG v13; // r8d
  unsigned int i; // ebp
  _DWORD *v15; // rax
  struct _SPRITESTATE *v17[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v18; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v19; // [rsp+138h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v8 = a1[35];
    if ( v8 )
    {
      v7 = PALLOCMEM2((unsigned int)(8 * v8 + 32), 1836086087LL, 0);
      if ( v7 )
      {
        v9 = 0;
        if ( a1[35] )
        {
          while ( 1 )
          {
            v18 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v9);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v18);
            Sprite = pSpCreateSprite(v18, 0LL, *((HWND *)a3 + 9), 0LL);
            v11 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v11 + 24) = *((_QWORD *)a3 + 24);
            v12 = v18;
            *((_QWORD *)a3 + 24) = 0LL;
            v13 = *((_DWORD *)a3 + 28) + a2[644] - *((_DWORD *)v12 + 644);
            v19.y = *((_DWORD *)a3 + 29) + a2[645] - *((_DWORD *)v12 + 645);
            v19.x = v13;
            if ( !(unsigned int)bSpUpdatePosition(v11, &v19, 0, 0) )
            {
              vSpDeleteSprite(v11);
              break;
            }
            v7[v9 + 3] = v11;
            *((_QWORD *)v11 + 1) = v7;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
            if ( ++v9 >= a1[35] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
          while ( v9 )
            vSpDeleteSprite((struct SPRITE *)v7[--v9 + 3]);
          Win32FreePool(v7);
          v7 = 0LL;
        }
        else
        {
LABEL_8:
          *v7 = *((_QWORD *)a3 + 9);
          *((_DWORD *)v7 + 5) = a1[35];
          *((_DWORD *)v7 + 4) = 0;
          v7[1] = *((_QWORD *)a1 + 19);
          *((_QWORD *)a1 + 19) = v7;
          if ( (*(_DWORD *)a3 & 0x40) != 0 )
          {
            for ( i = 0; i < a1[35]; ++i )
              pSpHintSpriteShape((struct SPRITE *)v7[i + 3], *((HBITMAP *)a3 + 30), 0);
            *((_DWORD *)v7 + 4) |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            if ( a1[35] )
            {
              do
              {
                v15 = (_DWORD *)v7[v3 + 3];
                *v15 |= 0x100u;
                vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v3++));
              }
              while ( v3 < a1[35] );
            }
            *((_DWORD *)v7 + 4) |= 0x100u;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v7;
}
