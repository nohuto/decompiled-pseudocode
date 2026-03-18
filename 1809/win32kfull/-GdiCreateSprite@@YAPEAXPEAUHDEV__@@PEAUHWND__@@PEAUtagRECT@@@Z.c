/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0095E04
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00CC540 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // ecx
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  struct _POINTL *v12; // r9
  HDEV v13; // rcx
  struct SPRITE *Sprite; // rax
  int v15; // eax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF
  HDEV v17; // [rsp+60h] [rbp+8h] BYREF
  struct _POINTL v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v17);
  v7 = v17;
  v8 = *((_DWORD *)v17 + 37);
  if ( v8 )
  {
    v10 = PALLOCMEM2((unsigned int)(8 * v8 + 32), 1836086087LL, 0);
    if ( v10 )
    {
      v11 = 0;
      if ( *((_DWORD *)v7 + 37) )
      {
        while ( 1 )
        {
          v12 = 0LL;
          v13 = *(HDEV *)(*((_QWORD *)v7 + 19) + 8LL * v11);
          if ( a3 )
          {
            v12 = &v18;
            v18.x = a3->left - *((_DWORD *)v13 + 646);
            v18.y = a3->top - *((_DWORD *)v13 + 647);
          }
          Sprite = pSpCreateSprite(v13, a3, a2, v12);
          if ( !Sprite )
            break;
          v10[v11++ + 3] = Sprite;
          *((_QWORD *)Sprite + 1) = v10;
          if ( v11 >= *((_DWORD *)v7 + 37) )
            goto LABEL_10;
        }
        while ( v11 )
          vSpDeleteSprite((struct SPRITE *)v10[--v11 + 3]);
        Win32FreePool(v10);
      }
      else
      {
LABEL_10:
        *v10 = a2;
        v15 = *((_DWORD *)v7 + 37);
        *((_DWORD *)v10 + 4) = 0;
        v6 = (struct SPRITE *)v10;
        *((_DWORD *)v10 + 5) = v15;
        v10[1] = *((_QWORD *)v7 + 20);
        *((_QWORD *)v7 + 20) = v10;
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
