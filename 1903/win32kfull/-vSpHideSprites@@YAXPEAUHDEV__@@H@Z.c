/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0138774
 * Callers:
 *     GreHideSprites @ 0x1C0138730 (GreHideSprites.c)
 * Callees:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003D040 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C01387F8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HDEV v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edx
  __int64 *v13[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v14; // [rsp+F0h] [rbp+8h] BYREF

  v14 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v14, a3, a4);
  v8 = v14;
  v9 = *((_QWORD *)v14 + 12);
  if ( v9 )
  {
    do
    {
      v11 = *(_QWORD *)(v9 + 24);
      v12 = *(_DWORD *)v9 | 0x10;
      if ( !a2 )
        v12 = *(_DWORD *)v9 & 0xFFFFFFEF;
      *(_DWORD *)v9 = v12;
      bSpUpdatePosition((struct SPRITE *)v9, (struct _POINTL *)(v9 + 112), 0, 1);
      v9 = v11;
    }
    while ( v11 );
  }
  v10 = *((_DWORD *)v8 + 292);
  if ( a2 )
  {
    if ( v10 )
      vSpUnhook((struct _SPRITESTATE *)(v8 + 22));
  }
  else if ( !v10 )
  {
    vSpHook((struct _SPRITESTATE *)(v8 + 22));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v13, v5, v6, v7);
}
