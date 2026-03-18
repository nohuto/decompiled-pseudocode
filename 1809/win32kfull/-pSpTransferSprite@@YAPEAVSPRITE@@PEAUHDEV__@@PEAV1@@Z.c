/*
 * XREFs of ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C02660C0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C0096050 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0096494 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0265148 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0266E08 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpTransferSprite(HDEV a1, struct SPRITE *a2)
{
  HWND v2; // r8
  struct SPRITE *v3; // rbx
  struct SPRITE *Sprite; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  LONG v9; // r8d
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 v13; // rax
  __int64 j; // rcx
  struct _POINTL v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)*((_QWORD *)a2 + 9);
  v3 = 0LL;
  if ( !v2 || (Sprite = pSpCreateSprite(a1, 0LL, v2, 0LL), (v3 = Sprite) == 0LL) )
  {
LABEL_5:
    v10 = *((_QWORD *)a2 + 1);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 16) |= 4u;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v10 + 20); i = (unsigned int)(i + 1) )
      {
        if ( *(struct SPRITE **)(v10 + 8 * i + 24) == a2 )
          *(_QWORD *)(v10 + 8 * i + 24) = 0LL;
      }
    }
    goto LABEL_10;
  }
  v7 = (__int64 *)*((_QWORD *)a2 + 2);
  v15 = (struct _POINTL)*((_QWORD *)a2 + 14);
  v8 = *v7;
  v9 = v15.x + *(_DWORD *)(v8 + 2584) - *((_DWORD *)a1 + 646);
  v15.y = *(_DWORD *)(v8 + 2588) + v15.y - *((_DWORD *)a1 + 647);
  v15.x = v9;
  bSpTransferShape(Sprite, a2);
  *((_QWORD *)v3 + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 24) = 0LL;
  if ( !(unsigned int)bSpUpdatePosition(v3, &v15, 0, 0) )
  {
    vSpDeleteSprite(v3);
    v3 = 0LL;
    goto LABEL_5;
  }
  v13 = *((_QWORD *)a2 + 1);
  if ( v13 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v13 + 20); j = (unsigned int)(j + 1) )
    {
      if ( *(struct SPRITE **)(v13 + 8 * j + 24) == a2 )
      {
        *(_QWORD *)(v13 + 8 * j + 24) = v3;
        *((_QWORD *)v3 + 1) = v13;
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
