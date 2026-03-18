/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00E1924 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00E1960 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00E19E8 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C02498CC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C024CA70 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C024CB88 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C02511BC (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255D2C (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  int v9; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v11; // rdi
  struct SPRITE *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v16; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v20; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v21; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+108h] [rbp+8h]
  __int64 v23; // [rsp+120h] [rbp+20h]
  int v24; // [rsp+128h] [rbp+28h]
  int v25; // [rsp+150h] [rbp+50h]
  __int64 v26; // [rsp+160h] [rbp+60h]
  int v27; // [rsp+168h] [rbp+68h]

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    v25 = 1;
    v23 = 0LL;
    v24 = 0;
    v26 = 0LL;
    v22 = 0LL;
    v27 = 0;
    v4 = bConcurrent(a1, (__int64)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v21, v4, *((struct REGION **)a1 + 87), (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v21.rclBounds) )
    {
      v5 = *((_QWORD *)a1 + 4);
      v6 = 0LL;
      if ( v5
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5) + 112) & 0x200) == 0 )
      {
        v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v5);
        GreLockDisplayDevice(*(_QWORD *)(v6 + 48));
      }
      v7 = *((_QWORD *)a1 + 166);
      v8 = 0LL;
      if ( v7
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 166)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) & 0x200) == 0 )
      {
        v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7);
        GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
      }
      INVOKEOFFCOPYBITS(
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 166),
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v21,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v8 )
        GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
      if ( v6 )
        GreUnlockDisplayDevice(*(_QWORD *)(v6 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v19, a1, a2, 0, 0LL);
    do
    {
      v9 = ENUMAREAS::bEnum((ENUMAREAS *)v19, &v16, &v20);
      if ( v16 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v19, &v16) )
      {
        Composite = psoSpGetComposite(a1, &v20, &StartingIndex);
        if ( !Composite )
          break;
        v11 = 0LL;
        v12 = v16;
        v17.x = -v20.left;
        v13 = *((_QWORD *)v16 + 20);
        v17.y = -v20.top;
        if ( v13
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
        {
          v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
          GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
        }
        v14 = 0LL;
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
        {
          v14 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
          GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
        }
        INVOKEOFFCOPYBITS(
          &v17,
          Composite,
          (struct _POINTL *)v12 + 21,
          *((struct _SURFOBJ **)v12 + 20),
          0LL,
          0LL,
          &v20,
          (struct _POINTL *)&v20);
        if ( v14 )
          GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
        if ( v11 )
          GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v12 & 0x100) == 0 )
            vSpComposite(v12, &v17, Composite, &v20);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v19, &v16) )
            break;
          v12 = v16;
        }
        vSpWriteToExMirror(a1, &v17, Composite, &v20);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
        }
      }
    }
    while ( v9 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v19);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v21);
  }
}
