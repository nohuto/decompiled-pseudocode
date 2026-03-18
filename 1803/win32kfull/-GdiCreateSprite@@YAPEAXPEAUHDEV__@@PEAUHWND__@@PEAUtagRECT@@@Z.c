/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0249D28
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C007D4E8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0250344 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // ecx
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  struct _POINTL *v11; // r9
  HDEV v12; // rcx
  struct SPRITE *Sprite; // rax
  int v14; // eax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF
  HDEV v17; // [rsp+60h] [rbp+8h] BYREF
  struct _POINTL v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v17);
  v7 = v17;
  v8 = *((_DWORD *)v17 + 35);
  if ( v8 )
  {
    v9 = PALLOCMEM2((unsigned int)(8 * v8 + 32), 1836086087LL, 0);
    if ( v9 )
    {
      v10 = 0;
      if ( *((_DWORD *)v7 + 35) )
      {
        while ( 1 )
        {
          v11 = 0LL;
          v12 = *(HDEV *)(*((_QWORD *)v7 + 18) + 8LL * v10);
          if ( a3 )
          {
            v11 = &v18;
            v18.x = a3->left - *((_DWORD *)v12 + 644);
            v18.y = a3->top - *((_DWORD *)v12 + 645);
          }
          Sprite = pSpCreateSprite(v12, a3, a2, v11);
          if ( !Sprite )
            break;
          v9[v10++ + 3] = Sprite;
          *((_QWORD *)Sprite + 1) = v9;
          if ( v10 >= *((_DWORD *)v7 + 35) )
            goto LABEL_8;
        }
        while ( v10 )
          vSpDeleteSprite((struct SPRITE *)v9[--v10 + 3]);
        Win32FreePool(v9);
      }
      else
      {
LABEL_8:
        *v9 = a2;
        v14 = *((_DWORD *)v7 + 35);
        *((_DWORD *)v9 + 4) = 0;
        v6 = (struct SPRITE *)v9;
        *((_DWORD *)v9 + 5) = v14;
        v9[1] = *((_QWORD *)v7 + 19);
        *((_QWORD *)v7 + 19) = v9;
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  return v6;
}
