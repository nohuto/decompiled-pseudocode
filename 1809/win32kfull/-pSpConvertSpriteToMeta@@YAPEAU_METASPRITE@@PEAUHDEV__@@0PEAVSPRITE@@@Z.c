/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02658BC
 * Callers:
 *     vSpDynamicModeChange @ 0x1C0096050 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0096494 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0265148 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0266E08 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  unsigned int v9; // ebp
  struct SPRITE *Sprite; // rax
  __int64 v11; // rdx
  struct SPRITE *v12; // r15
  HDEV v13; // rcx
  LONG v14; // r8d
  __int64 v15; // rdx
  unsigned int i; // ebp
  _DWORD *v17; // rax
  __int64 *v19[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v20; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v21; // [rsp+138h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v8 = a1[37];
    if ( v8 )
    {
      v7 = PALLOCMEM2((unsigned int)(8 * v8 + 32), 1836086087LL, 0);
      if ( v7 )
      {
        v9 = 0;
        if ( a1[37] )
        {
          while ( 1 )
          {
            v20 = *(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v9);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v19, (struct PDEVOBJ *)&v20);
            Sprite = pSpCreateSprite(v20, 0LL, *((HWND *)a3 + 9), 0LL);
            v12 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v12 + 24) = *((_QWORD *)a3 + 24);
            v13 = v20;
            *((_QWORD *)a3 + 24) = 0LL;
            v14 = *((_DWORD *)a3 + 28) + a2[646] - *((_DWORD *)v13 + 646);
            v21.y = *((_DWORD *)a3 + 29) + a2[647] - *((_DWORD *)v13 + 647);
            v21.x = v14;
            if ( !(unsigned int)bSpUpdatePosition(v12, &v21, 0, 0) )
            {
              vSpDeleteSprite(v12);
              break;
            }
            v7[v9 + 3] = v12;
            *((_QWORD *)v12 + 1) = v7;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v19, v15);
            if ( ++v9 >= a1[37] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v19, v11);
          while ( v9 )
            vSpDeleteSprite((struct SPRITE *)v7[--v9 + 3]);
          Win32FreePool(v7);
          v7 = 0LL;
        }
        else
        {
LABEL_8:
          *v7 = *((_QWORD *)a3 + 9);
          *((_DWORD *)v7 + 5) = a1[37];
          *((_DWORD *)v7 + 4) = 0;
          v7[1] = *((_QWORD *)a1 + 20);
          *((_QWORD *)a1 + 20) = v7;
          if ( (*(_DWORD *)a3 & 0x40) != 0 )
          {
            for ( i = 0; i < a1[37]; ++i )
              pSpHintSpriteShape((struct SPRITE *)v7[i + 3], *((HSURF *)a3 + 30), 0);
            *((_DWORD *)v7 + 4) |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            if ( a1[37] )
            {
              do
              {
                v17 = (_DWORD *)v7[v3 + 3];
                *v17 |= 0x100u;
                vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v3++));
              }
              while ( v3 < a1[37] );
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
