/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164
 * Callers:
 *     EngControlSprites @ 0x1C02823C0 (EngControlSprites.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003E928 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027B054 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027B16C (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  HDEV v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  struct SPRITE *v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct SPRITE *v16; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v17; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[96]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v20[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v21; // [rsp+188h] [rbp+80h] BYREF
  struct _RECTL v22; // [rsp+198h] [rbp+90h] BYREF

  v17 = a1;
  *(_QWORD *)&v21.left = 0LL;
  *(_QWORD *)&v21.right = 0LL;
  *(_QWORD *)&v22.left = 0LL;
  *(_QWORD *)&v22.right = 0LL;
  v5 = a3;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v20, (struct PDEVOBJ *)&v17, a3, a4);
  v6 = v17 + 22;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18, a2, (struct _SPRITESTATE *)(v17 + 22));
  v7 = *((_DWORD *)a2 + 46);
  if ( v5 == 1 )
  {
    v8 = v7 | 0x1000000;
    *((_DWORD *)a2 + 46) = v8;
    if ( (v8 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v6 + 10), &v22) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v19, (struct _SPRITESTATE *)v6, &v22, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v19, &v16, &v21);
        if ( v16 )
          INVOKEOFFCOPYBITS(
            &gptlZero,
            *((struct _SURFOBJ **)v6 + 4),
            (struct _POINTL *)v16 + 21,
            *((struct _SURFOBJ **)v16 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v21,
            (struct _POINTL *)&v21);
      }
      while ( v9 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v19);
    }
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v7 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v6 + 10), &v22) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v19, (struct _SPRITESTATE *)v6, &v22, 0, 0LL);
      do
      {
        v10 = ENUMAREAS::bEnum((ENUMAREAS *)v19, &v16, &v21);
        v11 = v16;
        v12 = v10;
        if ( v16 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v11 + 21,
              *((struct _SURFOBJ **)v11 + 20),
              &gptlZero,
              *((struct _SURFOBJ **)v6 + 4),
              (struct _CLIPOBJ *)a2,
              0LL,
              &v21,
              (struct _POINTL *)&v21);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v19, &v16) )
              break;
            v11 = v16;
          }
        }
      }
      while ( v12 );
      vSpRedrawArea((struct _SPRITESTATE *)v6, &v22, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v19);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v20, v13, v14, v15);
}
