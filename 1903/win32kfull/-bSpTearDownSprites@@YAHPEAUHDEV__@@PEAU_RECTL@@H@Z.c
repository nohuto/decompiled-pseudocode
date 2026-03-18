/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027E224
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273284 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027C3A4 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003E928 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161A18 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  unsigned int v6; // ebx
  HDEV v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  int v12; // r14d
  HDEV v14; // [rsp+38h] [rbp-D0h] BYREF
  struct SPRITE *v15; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v16[96]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v17[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v18; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v19; // [rsp+178h] [rbp+70h] BYREF

  v14 = a1;
  *(_QWORD *)&v19.left = 0LL;
  v4 = a3;
  *(_QWORD *)&v19.right = 0LL;
  *(_QWORD *)&v18.left = 0LL;
  *(_QWORD *)&v18.right = 0LL;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    v7 = a1 + 22;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v14, a3, a4);
    v11 = 0;
    if ( *((_DWORD *)v7 + 14) && bIntersect(a2, (const struct _RECTL *)(v7 + 10), &v18) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v7, &v18, 0, 0LL);
      do
      {
        v12 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v15, &v19);
        if ( v15 )
        {
          v11 = 1;
          vSpWriteToScreen((struct _SPRITESTATE *)v7, (struct _POINTL *)v15 + 21, *((struct _SURFOBJ **)v15 + 20), &v19);
        }
      }
      while ( v12 );
      if ( v4 )
        vSpComputeUnlockedRegion((struct _SPRITESTATE *)v7);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
    v6 = v11;
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v17, v8, v9, v10);
  }
  else
  {
    return 0;
  }
  return v6;
}
