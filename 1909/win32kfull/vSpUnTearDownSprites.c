/*
 * XREFs of vSpUnTearDownSprites @ 0x1C0282AE0
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0272EE8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027BD58 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00829E8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0162410 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162C6C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0280230 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpUnTearDownSprites(const struct _RECTL *a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *p_right; // rbx
  __int64 v5; // r8
  int v6; // eax
  struct SPRITE *v7; // r8
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct SPRITE *v11; // [rsp+30h] [rbp-D0h] BYREF
  const struct _RECTL *v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v14[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v15; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v16; // [rsp+170h] [rbp+70h] BYREF

  v12 = a1;
  p_right = (struct _SPRITESTATE *)&a1[5].right;
  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  if ( a1[9].left && bIntersect(a2, a1 + 8, &v15) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v12, v5);
    if ( a3 )
      vSpComputeUnlockedRegion(p_right);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v13, p_right, &v15, 0, 0LL);
    do
    {
      v6 = ENUMAREAS::bEnum((ENUMAREAS *)v13, &v11, &v16);
      v7 = v11;
      v8 = v6;
      if ( v11 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(p_right, (struct _POINTL *)v7 + 21, *((struct _SURFOBJ **)v7 + 20), &v16);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v13, &v11) )
            break;
          v7 = v11;
        }
      }
    }
    while ( v8 );
    vSpRedrawArea(p_right, &v15, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v13);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v14, v9, v10);
  }
}
