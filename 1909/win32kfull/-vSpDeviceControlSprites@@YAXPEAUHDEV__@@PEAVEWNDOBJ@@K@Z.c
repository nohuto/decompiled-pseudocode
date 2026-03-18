/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C027FAA4
 * Callers:
 *     EngControlSprites @ 0x1C0281D00 (EngControlSprites.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00829E8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0162410 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162C6C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027A994 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027AAAC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, __int64 a3)
{
  int v4; // ebx
  HDEV v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct SPRITE *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct SPRITE *v14; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v15; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v16[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[96]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v18[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v19; // [rsp+188h] [rbp+80h] BYREF
  struct _RECTL v20; // [rsp+198h] [rbp+90h] BYREF

  v15 = a1;
  *(_QWORD *)&v19.left = 0LL;
  *(_QWORD *)&v19.right = 0LL;
  *(_QWORD *)&v20.left = 0LL;
  *(_QWORD *)&v20.right = 0LL;
  v4 = a3;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v15, a3);
  v5 = v15 + 22;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v16, a2, (struct _SPRITESTATE *)(v15 + 22));
  v6 = *((_DWORD *)a2 + 46);
  if ( v4 == 1 )
  {
    v7 = v6 | 0x1000000;
    *((_DWORD *)a2 + 46) = v7;
    if ( (v7 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v20) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, (struct _SPRITESTATE *)v5, &v20, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v14, &v19);
        if ( v14 )
          INVOKEOFFCOPYBITS(
            &gptlZero,
            *((struct _SURFOBJ **)v5 + 4),
            (struct _POINTL *)v14 + 21,
            *((struct _SURFOBJ **)v14 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v19,
            (struct _POINTL *)&v19);
      }
      while ( v8 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
    }
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v6 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v20) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, (struct _SPRITESTATE *)v5, &v20, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v14, &v19);
        v10 = v14;
        v11 = v9;
        if ( v14 )
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
              &v19,
              (struct _POINTL *)&v19);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v17, &v14) )
              break;
            v10 = v14;
          }
        }
      }
      while ( v11 );
      vSpRedrawArea((struct _SPRITESTATE *)v5, &v20, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v16);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v12, v13);
}
