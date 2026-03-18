/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012C5D4
 * Callers:
 *     GreHideSprites @ 0x1C012C590 (GreHideSprites.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0095630 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C012C658 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  __int64 v3; // rdx
  HDEV v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 *v9[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v10; // [rsp+F0h] [rbp+8h] BYREF

  v10 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v9, (struct PDEVOBJ *)&v10);
  v4 = v10;
  v5 = *((_QWORD *)v10 + 12);
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 24);
      v8 = *(_DWORD *)v5 | 0x10;
      if ( !a2 )
        v8 = *(_DWORD *)v5 & 0xFFFFFFEF;
      *(_DWORD *)v5 = v8;
      bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 1);
      v5 = v7;
    }
    while ( v7 );
  }
  v6 = *((_DWORD *)v4 + 292);
  if ( a2 )
  {
    if ( v6 )
      vSpUnhook((struct _SPRITESTATE *)(v4 + 22));
  }
  else if ( !v6 )
  {
    vSpHook((struct _SPRITESTATE *)(v4 + 22));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v9, v3);
}
