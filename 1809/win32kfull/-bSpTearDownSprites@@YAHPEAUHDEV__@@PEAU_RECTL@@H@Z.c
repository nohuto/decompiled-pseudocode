/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026500C
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C02599A4 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0262D28 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159A60 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, int a3)
{
  unsigned int v5; // ebx
  HDEV v6; // rdi
  __int64 v7; // rdx
  int v8; // esi
  int v9; // r14d
  HDEV v11; // [rsp+38h] [rbp-D0h] BYREF
  struct SPRITE *v12; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v13[96]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v14[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v15; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v16; // [rsp+178h] [rbp+70h] BYREF

  v11 = a1;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    v6 = a1 + 22;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v11);
    v8 = 0;
    if ( *((_DWORD *)v6 + 14) && bIntersect(a2, (const struct _RECTL *)(v6 + 10), &v15) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v13, (struct _SPRITESTATE *)v6, &v15, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v13, &v12, &v16);
        if ( v12 )
        {
          v8 = 1;
          vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v12 + 21, *((struct _SURFOBJ **)v12 + 20), &v16);
        }
      }
      while ( v9 );
      if ( a3 )
        vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v13);
    }
    v5 = v8;
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v14, v7);
  }
  else
  {
    return 0;
  }
  return v5;
}
