/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027E428
 * Callers:
 *     vSpDynamicModeChange @ 0x1C0081F50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0081A34 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00824CC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027DCB0 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027F8A0 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ebp
  struct SPRITE *Sprite; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct SPRITE *v14; // r15
  HDEV v15; // rcx
  LONG v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int i; // ebp
  _DWORD *v20; // rax
  __int64 *v22[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v23; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v24; // [rsp+138h] [rbp+20h] BYREF

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
        v10 = 0;
        if ( a1[37] )
        {
          while ( 1 )
          {
            v23 = *(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v10);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v22, (struct PDEVOBJ *)&v23, v9);
            Sprite = pSpCreateSprite(v23, 0LL, *((HWND *)a3 + 9), 0LL);
            v14 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v14 + 24) = *((_QWORD *)a3 + 24);
            v15 = v23;
            *((_QWORD *)a3 + 24) = 0LL;
            v16 = *((_DWORD *)a3 + 28) + a2[646] - *((_DWORD *)v15 + 646);
            v24.y = *((_DWORD *)a3 + 29) + a2[647] - *((_DWORD *)v15 + 647);
            v24.x = v16;
            if ( !(unsigned int)bSpUpdatePosition(v14, &v24, 0, 0) )
            {
              vSpDeleteSprite(v14);
              break;
            }
            v7[v10 + 3] = v14;
            *((_QWORD *)v14 + 1) = v7;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v22, v17, v18);
            if ( ++v10 >= a1[37] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v22, v12, v13);
          while ( v10 )
            vSpDeleteSprite((struct SPRITE *)v7[--v10 + 3]);
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
                v20 = (_DWORD *)v7[v3 + 3];
                *v20 |= 0x100u;
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
