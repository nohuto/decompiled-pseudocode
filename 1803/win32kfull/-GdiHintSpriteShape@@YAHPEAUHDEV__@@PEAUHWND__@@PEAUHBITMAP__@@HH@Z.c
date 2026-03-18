/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C024A3D4
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0250548 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02505B0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0251274 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r15d
  HDEV v9; // r13
  BOOL v10; // esi
  struct _SPRITESTATE *v11; // rcx
  int v12; // r9d
  struct _METASPRITE *MetaSprite; // r14
  __int64 v14; // rbx
  __int128 *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // eax
  struct SPRITE *Sprite; // rax
  struct SPRITE *v20; // r14
  int v21; // ebx
  __int128 *v22; // rcx
  int v24; // [rsp+20h] [rbp-60h]
  HDEV v25; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  _BYTE v27[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  __int128 v30; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+40h]

  v25 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v25);
  v9 = v25;
  v10 = 0;
  v11 = (struct _SPRITESTATE *)(v25 + 20);
  if ( !*((_DWORD *)v25 + 35) )
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    v20 = Sprite;
    if ( Sprite )
    {
      v21 = *(_DWORD *)Sprite;
      v31 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v21 & 0x200) == 0 )
        v10 = (*(_DWORD *)v20 & 0x200) != 0;
      if ( a5 && !ERECTL::bEmpty((struct SPRITE *)((char *)v20 + 80)) )
      {
        v26 = *v22;
        v30 = v26;
        vSpAddAndCompactDirtyRect(v20, &v30);
      }
LABEL_25:
      if ( v10 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
      v7 = v31;
    }
    goto LABEL_28;
  }
  MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
  if ( !MetaSprite || (LODWORD(v14) = 0, !v12) )
  {
LABEL_28:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
    return v7;
  }
  while ( 1 )
  {
    *(_QWORD *)&v26 = *((_QWORD *)MetaSprite + (unsigned int)v14 + 3);
    v24 = *(_DWORD *)v26 & 0x200;
    v31 = pSpHintSpriteShape((struct SPRITE *)v26, a3, a4);
    if ( !v31 )
      break;
    if ( !v24 && (*(_DWORD *)v26 & 0x200) != 0 )
      v10 = 1;
    if ( a5 && !ERECTL::bEmpty((ERECTL *)(v26 + 80)) )
    {
      v28 = *v15;
      v29 = v28;
      vSpAddAndCompactDirtyRect(v16, &v29);
    }
    LODWORD(v14) = v14 + 1;
    if ( (unsigned int)v14 >= *((_DWORD *)v9 + 35) )
    {
      v17 = *((_DWORD *)MetaSprite + 4);
      if ( a3 )
        v18 = v17 | 0x40;
      else
        v18 = v17 & 0xFFFFFFBF;
      *((_DWORD *)MetaSprite + 4) = v18;
      goto LABEL_25;
    }
  }
  while ( (_DWORD)v14 )
  {
    v14 = (unsigned int)(v14 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v14 + 3), 0LL, a4);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  return v6;
}
