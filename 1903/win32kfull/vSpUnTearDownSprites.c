/*
 * XREFs of vSpUnTearDownSprites @ 0x1C02831A0
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02735F8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027C418 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003E928 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02808F0 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpUnTearDownSprites(const struct _RECTL *a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *p_right; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  struct SPRITE *v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct SPRITE *v13; // [rsp+30h] [rbp-D0h] BYREF
  const struct _RECTL *v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v16[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v17; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v18; // [rsp+170h] [rbp+70h] BYREF

  v14 = a1;
  p_right = (struct _SPRITESTATE *)&a1[5].right;
  *(_QWORD *)&v18.left = 0LL;
  *(_QWORD *)&v18.right = 0LL;
  *(_QWORD *)&v17.left = 0LL;
  *(_QWORD *)&v17.right = 0LL;
  if ( a1[9].left && bIntersect(a2, a1 + 8, &v17) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v14, v5, v6);
    if ( a3 )
      vSpComputeUnlockedRegion(p_right);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, p_right, &v17, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v13, &v18);
      v8 = v13;
      v9 = v7;
      if ( v13 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(p_right, (struct _POINTL *)v8 + 21, *((struct _SURFOBJ **)v8 + 20), &v18);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v13) )
            break;
          v8 = v13;
        }
      }
    }
    while ( v9 );
    vSpRedrawArea(p_right, &v17, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v16, v10, v11, v12);
  }
}
