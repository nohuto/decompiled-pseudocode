/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027EAE8
 * Callers:
 *     vSpDynamicModeChange @ 0x1C003DD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C003D834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027E370 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027FF60 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  struct SPRITE *Sprite; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct SPRITE *v16; // r15
  HDEV v17; // rcx
  LONG v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int i; // ebp
  _DWORD *v23; // rax
  __int64 *v25[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v26; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v27; // [rsp+138h] [rbp+20h] BYREF

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
        v11 = 0;
        if ( a1[37] )
        {
          while ( 1 )
          {
            v26 = *(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v11);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v25, (struct PDEVOBJ *)&v26, v9, v10);
            Sprite = pSpCreateSprite(v26, 0LL, *((HWND *)a3 + 9), 0LL);
            v16 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v16 + 24) = *((_QWORD *)a3 + 24);
            v17 = v26;
            *((_QWORD *)a3 + 24) = 0LL;
            v18 = *((_DWORD *)a3 + 28) + a2[646] - *((_DWORD *)v17 + 646);
            v27.y = *((_DWORD *)a3 + 29) + a2[647] - *((_DWORD *)v17 + 647);
            v27.x = v18;
            if ( !(unsigned int)bSpUpdatePosition(v16, &v27, 0, 0) )
            {
              vSpDeleteSprite(v16);
              break;
            }
            v7[v11 + 3] = v16;
            *((_QWORD *)v16 + 1) = v7;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v25, v19, v20, v21);
            if ( ++v11 >= a1[37] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v25, v13, v14, v15);
          while ( v11 )
            vSpDeleteSprite((struct SPRITE *)v7[--v11 + 3]);
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
                v23 = (_DWORD *)v7[v3 + 3];
                *v23 |= 0x100u;
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
