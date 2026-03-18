/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0280DB4
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0161B2C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0161C00 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0161CE8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161DE0 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027D0A4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282158 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int v7; // eax
  int v8; // r14d
  struct _SURFOBJ *Composite; // rdi
  struct SPRITE *v10; // rsi
  struct _SURFOBJ *v11; // rdx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[96]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v19; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v20; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v21; // [rsp+118h] [rbp+18h]
  __int64 v22; // [rsp+130h] [rbp+30h]
  int v23; // [rsp+138h] [rbp+38h]
  int v24; // [rsp+160h] [rbp+60h]
  __int64 v25; // [rsp+170h] [rbp+70h]
  int v26; // [rsp+178h] [rbp+78h]

  *(_QWORD *)&v19.left = 0LL;
  *(_QWORD *)&v19.right = 0LL;
  v6 = *(_QWORD *)a1;
  v14 = 0LL;
  if ( (*(_DWORD *)(v6 + 40) & 0x400) == 0 )
  {
    v22 = 0LL;
    v23 = 0;
    v24 = 1;
    v25 = 0LL;
    v21 = 0LL;
    v26 = 0;
    v7 = bConcurrent(a1, (__int64)a2, a3, a4);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v20, v7, *((struct REGION **)a1 + 87), (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v20.rclBounds) )
    {
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v15, *((struct _SURFOBJ **)a1 + 4));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v16, *((struct _SURFOBJ **)a1 + 166));
      INVOKEOFFCOPYBITS(
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 166),
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v20,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
      if ( v15 )
        GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v18, a1, a2, 0, 0LL);
    do
    {
      v8 = ENUMAREAS::bEnum((ENUMAREAS *)v18, &v13, &v19);
      if ( v13 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v18, &v13) )
      {
        Composite = psoSpGetComposite(a1, &v19, &StartingIndex);
        if ( !Composite )
          break;
        v10 = v13;
        v14.x = -v19.left;
        v11 = (struct _SURFOBJ *)*((_QWORD *)v13 + 20);
        v14.y = -v19.top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v16, v11);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v15, Composite);
        INVOKEOFFCOPYBITS(
          &v14,
          Composite,
          (struct _POINTL *)v10 + 21,
          *((struct _SURFOBJ **)v10 + 20),
          0LL,
          0LL,
          &v19,
          (struct _POINTL *)&v19);
        if ( v15 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
          v15 = 0LL;
        }
        if ( v16 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
          v16 = 0LL;
        }
        while ( 1 )
        {
          if ( (*(_DWORD *)v10 & 0x100) == 0 )
            vSpComposite(v10, &v14, Composite, &v19);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v18, &v13) )
            break;
          v10 = v13;
        }
        vSpWriteToExMirror(a1, &v14, Composite, &v19);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v17, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
        }
      }
    }
    while ( v8 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v18);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v20);
  }
}
