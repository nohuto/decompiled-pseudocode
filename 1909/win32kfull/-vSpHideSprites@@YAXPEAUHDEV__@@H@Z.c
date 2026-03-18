/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0112774
 * Callers:
 *     GreHideSprites @ 0x1C0112730 (GreHideSprites.c)
 * Callees:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0081240 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C01127F8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  HDEV v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 *v11[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v12; // [rsp+F0h] [rbp+8h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12, a3);
  v6 = v12;
  v7 = *((_QWORD *)v12 + 12);
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v7 + 24);
      v10 = *(_DWORD *)v7 | 0x10;
      if ( !a2 )
        v10 = *(_DWORD *)v7 & 0xFFFFFFEF;
      *(_DWORD *)v7 = v10;
      bSpUpdatePosition((struct SPRITE *)v7, (struct _POINTL *)(v7 + 112), 0, 1);
      v7 = v9;
    }
    while ( v9 );
  }
  v8 = *((_DWORD *)v6 + 292);
  if ( a2 )
  {
    if ( v8 )
      vSpUnhook((struct _SPRITESTATE *)(v6 + 22));
  }
  else if ( !v8 )
  {
    vSpHook((struct _SPRITESTATE *)(v6 + 22));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v11, v4, v5);
}
