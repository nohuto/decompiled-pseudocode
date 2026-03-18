/*
 * XREFs of vSpUnTearDownSprites @ 0x1C0269FD0
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0259D10 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0262D9C (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0267774 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpUnTearDownSprites(const struct _RECTL *a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *p_right; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  __int64 v8; // rdx
  struct SPRITE *v9; // [rsp+30h] [rbp-D0h] BYREF
  const struct _RECTL *v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v12[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v13; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v14; // [rsp+170h] [rbp+70h] BYREF

  p_right = (struct _SPRITESTATE *)&a1[5].right;
  v10 = a1;
  if ( a1[9].left && bIntersect(a2, a1 + 8, &v13) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v10);
    if ( a3 )
      vSpComputeUnlockedRegion(p_right);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v11, p_right, &v13, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v11, &v9, &v14);
      v6 = v9;
      v7 = v5;
      if ( v9 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(p_right, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v14);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v11, &v9) )
            break;
          v6 = v9;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea(p_right, &v13, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v11);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v12, v8);
  }
}
