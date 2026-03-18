/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C003D324
 * Callers:
 *     vSpDisableSpritesWrap @ 0x1C003D310 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C003D488 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047FEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void *__fastcall vSpDisableSprites(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  REGION *v9; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1 + 88;
  v4 = *(_QWORD *)(a1 + 1208);
  *(_QWORD *)(v2 + 1120) = 0LL;
  *(_QWORD *)(v2 + 1112) = 0LL;
  *(_DWORD *)(v2 + 1084) = 0;
  if ( v4 )
  {
    do
    {
      v11 = *(_QWORD *)(v4 + 24);
      vSpDeleteSprite((struct SPRITE *)v4);
      v4 = v11;
    }
    while ( v11 );
  }
  vSpDeleteExMirror(*(HDEV *)v2);
  if ( a2 != 2 )
    vSpDeleteSurface(*(SURFOBJ **)(v2 + 1024));
  v12 = *(_QWORD *)(v2 + 696);
  v13 = *(_QWORD *)(v2 + 704);
  v14 = *(_QWORD *)(v2 + 864);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  GreDeleteObject(*(_QWORD *)(v2 + 1056));
  v5 = *(_QWORD *)(v2 + 136);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(void **)(v2 + 64);
  if ( v6 )
    EngFreeMem(v6);
  v7 = *(REGION **)(v2 + 1032);
  if ( v7 )
    REGION::vDeleteREGION(v7);
  v8 = *(REGION **)(v2 + 1040);
  if ( v8 )
    REGION::vDeleteREGION(v8);
  v9 = *(REGION **)(v2 + 1048);
  if ( v9 )
    REGION::vDeleteREGION(v9);
  if ( *(_QWORD *)(v2 + 120) )
    GreDeleteSemaphore();
  if ( *(_QWORD *)(v2 + 128) )
    GreDeleteSemaphore();
  return memset((void *)v2, 0, 0x540uLL);
}
