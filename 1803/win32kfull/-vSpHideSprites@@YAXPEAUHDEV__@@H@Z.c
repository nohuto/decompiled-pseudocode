/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010B444
 * Callers:
 *     GreHideSprites @ 0x1C010B400 (GreHideSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FDC0C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010B4C8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  HDEV v3; // rbx
  unsigned int *v4; // rcx
  int v5; // eax
  unsigned int *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _SPRITESTATE *v9[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v10; // [rsp+F0h] [rbp+8h] BYREF

  v10 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v9, (struct PDEVOBJ *)&v10);
  v3 = v10;
  v4 = (unsigned int *)*((_QWORD *)v10 + 11);
  if ( v4 )
  {
    do
    {
      v6 = (unsigned int *)*((_QWORD *)v4 + 3);
      v7 = *v4;
      if ( a2 )
        v8 = v7 | 0x10;
      else
        v8 = v7 & 0xFFFFFFEF;
      *v4 = v8;
      bSpUpdatePosition((struct SPRITE *)v4, (struct _POINTL *)v4 + 14, 0, 1);
      v4 = v6;
    }
    while ( v6 );
  }
  v5 = *((_DWORD *)v3 + 290);
  if ( a2 )
  {
    if ( v5 )
      vSpUnhook((struct _SPRITESTATE *)(v3 + 20));
  }
  else if ( !v5 )
  {
    vSpHook((struct _SPRITESTATE *)(v3 + 20));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v9);
}
