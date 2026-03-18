/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00819A0
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C008D7B0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0081A34 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // ecx
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rcx
  struct _POINTL *v13; // r9
  HDEV v14; // rcx
  struct SPRITE *Sprite; // rax
  int v16; // eax
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _POINTL v18; // [rsp+60h] [rbp+8h] BYREF
  HDEV v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v17, (struct PDEVOBJ *)&v19);
  v7 = v19;
  v8 = *((_DWORD *)v19 + 37);
  if ( v8 )
  {
    v10 = PALLOCMEM2((unsigned int)(8 * v8 + 32));
    if ( v10 )
    {
      v11 = 0;
      if ( *((_DWORD *)v7 + 37) )
      {
        while ( 1 )
        {
          v12 = *((_QWORD *)v7 + 19);
          v13 = 0LL;
          v18 = 0LL;
          v14 = *(HDEV *)(v12 + 8LL * v11);
          if ( a3 )
          {
            v13 = &v18;
            v18.x = a3->left - *((_DWORD *)v14 + 646);
            v18.y = a3->top - *((_DWORD *)v14 + 647);
          }
          Sprite = pSpCreateSprite(v14, a3, a2, v13);
          if ( !Sprite )
            break;
          *(_QWORD *)(v10 + 8LL * v11++ + 24) = Sprite;
          *((_QWORD *)Sprite + 1) = v10;
          if ( v11 >= *((_DWORD *)v7 + 37) )
            goto LABEL_10;
        }
        while ( v11 )
          vSpDeleteSprite(*(struct SPRITE **)(v10 + 8LL * --v11 + 24));
        Win32FreePool(v10);
      }
      else
      {
LABEL_10:
        *(_QWORD *)v10 = a2;
        v16 = *((_DWORD *)v7 + 37);
        *(_DWORD *)(v10 + 16) = 0;
        v6 = (struct SPRITE *)v10;
        *(_DWORD *)(v10 + 20) = v16;
        *(_QWORD *)(v10 + 8) = *((_QWORD *)v7 + 20);
        *((_QWORD *)v7 + 20) = v10;
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v17);
  return v6;
}
