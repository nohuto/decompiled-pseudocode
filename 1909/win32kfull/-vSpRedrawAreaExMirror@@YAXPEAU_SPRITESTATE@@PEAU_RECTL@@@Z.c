/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02806F4
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0085780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C008183C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0162630 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0162AFC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0162BD0 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162C6C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0162CB8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162DB0 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027C9E4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0281A98 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // r14d
  struct _SURFOBJ *Composite; // rdi
  struct SPRITE *v9; // rsi
  struct _SURFOBJ *v10; // rdx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v12; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[96]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v18; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v19; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v20; // [rsp+118h] [rbp+18h]
  __int64 v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+160h] [rbp+60h]
  __int64 v24; // [rsp+170h] [rbp+70h]
  int v25; // [rsp+178h] [rbp+78h]

  *(_QWORD *)&v18.left = 0LL;
  *(_QWORD *)&v18.right = 0LL;
  v5 = *(_QWORD *)a1;
  v13 = 0LL;
  if ( (*(_DWORD *)(v5 + 40) & 0x400) == 0 )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = 1;
    v24 = 0LL;
    v20 = 0LL;
    v25 = 0;
    v6 = bConcurrent(a1, (__int64)a2, a3);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v19, v6, *((struct REGION **)a1 + 87), (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v19.rclBounds) )
    {
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v14, *((struct _SURFOBJ **)a1 + 4));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v15, *((struct _SURFOBJ **)a1 + 166));
      INVOKEOFFCOPYBITS(
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 166),
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v19,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v15 )
        GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
      if ( v14 )
        GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, a1, a2, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v12, &v18);
      if ( v12 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v17, &v12) )
      {
        Composite = psoSpGetComposite(a1, &v18, &StartingIndex);
        if ( !Composite )
          break;
        v9 = v12;
        v13.x = -v18.left;
        v10 = (struct _SURFOBJ *)*((_QWORD *)v12 + 20);
        v13.y = -v18.top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v15, v10);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v14, Composite);
        INVOKEOFFCOPYBITS(
          &v13,
          Composite,
          (struct _POINTL *)v9 + 21,
          *((struct _SURFOBJ **)v9 + 20),
          0LL,
          0LL,
          &v18,
          (struct _POINTL *)&v18);
        if ( v14 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
          v14 = 0LL;
        }
        if ( v15 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
          v15 = 0LL;
        }
        while ( 1 )
        {
          if ( (*(_DWORD *)v9 & 0x100) == 0 )
            vSpComposite(v9, &v13, Composite, &v18);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v17, &v12) )
            break;
          v9 = v12;
        }
        vSpWriteToExMirror(a1, &v13, Composite, &v18);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
        }
      }
    }
    while ( v7 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v19);
  }
}
