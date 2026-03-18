/*
 * XREFs of ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027F2EC
 * Callers:
 *     vSpDynamicModeChange @ 0x1C003DD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C003D834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027E370 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027FF60 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpTransferSprite(HDEV a1, struct SPRITE *a2)
{
  HWND v2; // r8
  struct SPRITE *v3; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 i; // rcx
  __int64 v11; // rax
  __int64 j; // rcx
  struct _POINTL v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)*((_QWORD *)a2 + 9);
  v3 = 0LL;
  if ( !v2 || (Sprite = pSpCreateSprite(a1, 0LL, v2, 0LL), (v3 = Sprite) == 0LL) )
  {
LABEL_5:
    v8 = *((_QWORD *)a2 + 1);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) |= 4u;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 20); i = (unsigned int)(i + 1) )
      {
        if ( *(struct SPRITE **)(v8 + 8 * i + 24) == a2 )
          *(_QWORD *)(v8 + 8 * i + 24) = 0LL;
      }
    }
    goto LABEL_10;
  }
  v13 = (struct _POINTL)*((_QWORD *)a2 + 14);
  v7 = **((_QWORD **)a2 + 2);
  v13.x += *(_DWORD *)(v7 + 2584) - *((_DWORD *)a1 + 646);
  v13.y += *(_DWORD *)(v7 + 2588) - *((_DWORD *)a1 + 647);
  bSpTransferShape(Sprite, a2);
  *((_QWORD *)v3 + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 24) = 0LL;
  if ( !(unsigned int)bSpUpdatePosition(v3, &v13, 0, 0) )
  {
    vSpDeleteSprite(v3);
    v3 = 0LL;
    goto LABEL_5;
  }
  v11 = *((_QWORD *)a2 + 1);
  if ( v11 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v11 + 20); j = (unsigned int)(j + 1) )
    {
      if ( *(struct SPRITE **)(v11 + 8 * j + 24) == a2 )
      {
        *(_QWORD *)(v11 + 8 * j + 24) = v3;
        *((_QWORD *)v3 + 1) = v11;
      }
    }
  }
LABEL_10:
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( v3 )
      pSpHintSpriteShape(v3, *((HSURF *)a2 + 30), 0);
    pSpHintSpriteShape(a2, 0LL, 0);
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 && v3 )
  {
    *(_DWORD *)v3 |= 0x100u;
    vSpCreateExMirror(**((HDEV **)v3 + 2));
  }
  vSpDeleteSprite(a2);
  return v3;
}
