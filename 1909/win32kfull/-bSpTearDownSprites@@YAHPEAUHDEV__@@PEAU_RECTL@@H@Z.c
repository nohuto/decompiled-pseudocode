/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027DB64
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0272B74 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027BCE4 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00829E8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01629E8 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, __int64 a3)
{
  int v3; // r15d
  unsigned int v5; // ebx
  HDEV v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // esi
  int v10; // r14d
  HDEV v12; // [rsp+38h] [rbp-D0h] BYREF
  struct SPRITE *v13; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[96]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v15[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v16; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v17; // [rsp+178h] [rbp+70h] BYREF

  v12 = a1;
  *(_QWORD *)&v17.left = 0LL;
  v3 = a3;
  *(_QWORD *)&v17.right = 0LL;
  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    v6 = a1 + 22;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v15, (struct PDEVOBJ *)&v12, a3);
    v9 = 0;
    if ( *((_DWORD *)v6 + 14) && bIntersect(a2, (const struct _RECTL *)(v6 + 10), &v16) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v14, (struct _SPRITESTATE *)v6, &v16, 0, 0LL);
      do
      {
        v10 = ENUMAREAS::bEnum((ENUMAREAS *)v14, &v13, &v17);
        if ( v13 )
        {
          v9 = 1;
          vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v13 + 21, *((struct _SURFOBJ **)v13 + 20), &v17);
        }
      }
      while ( v10 );
      if ( v3 )
        vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v14);
    }
    v5 = v9;
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v15, v7, v8);
  }
  else
  {
    return 0;
  }
  return v5;
}
