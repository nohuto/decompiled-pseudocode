/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C026700C
 * Callers:
 *     EngControlSprites @ 0x1C0269210 (EngControlSprites.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C026197C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0261AF4 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, int a3)
{
  HDEV v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct SPRITE *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  struct SPRITE *v13; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v14; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v15[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v16[96]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v17[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v18; // [rsp+188h] [rbp+80h] BYREF
  struct _RECTL v19; // [rsp+198h] [rbp+90h] BYREF

  v14 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v14);
  v5 = v14 + 22;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15, a2, (struct _SPRITESTATE *)(v14 + 22));
  v6 = *((_DWORD *)a2 + 46);
  if ( a3 == 1 )
  {
    v7 = v6 | 0x1000000;
    *((_DWORD *)a2 + 46) = v7;
    if ( (v7 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v13, &v18);
        if ( v13 )
          INVOKEOFFCOPYBITS(
            &gptlZero,
            *((struct _SURFOBJ **)v5 + 4),
            (struct _POINTL *)v13 + 21,
            *((struct _SURFOBJ **)v13 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v18,
            (struct _POINTL *)&v18);
      }
      while ( v8 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v6 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v13, &v18);
        v10 = v13;
        v11 = v9;
        if ( v13 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v10 + 21,
              *((struct _SURFOBJ **)v10 + 20),
              &gptlZero,
              *((struct _SURFOBJ **)v5 + 4),
              (struct _CLIPOBJ *)a2,
              0LL,
              &v18,
              (struct _POINTL *)&v18);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v16, &v13) )
              break;
            v10 = v13;
          }
        }
      }
      while ( v11 );
      vSpRedrawArea((struct _SPRITESTATE *)v5, &v19, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v17, v12);
}
