/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C000B37C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C015A068 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015A190 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0261A38 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C0263EDC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C026638C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0268FA0 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  int v4; // eax
  int v5; // r14d
  struct _SURFOBJ *Composite; // rdi
  struct SPRITE *v7; // rsi
  struct _SURFOBJ *v8; // rdx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v10; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v15[96]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v16; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v17; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v18; // [rsp+118h] [rbp+18h]
  __int64 v19; // [rsp+130h] [rbp+30h]
  int v20; // [rsp+138h] [rbp+38h]
  int v21; // [rsp+160h] [rbp+60h]
  __int64 v22; // [rsp+170h] [rbp+70h]
  int v23; // [rsp+178h] [rbp+78h]

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    v21 = 1;
    v19 = 0LL;
    v20 = 0;
    v22 = 0LL;
    v18 = 0LL;
    v23 = 0;
    v4 = bConcurrent(a1, (__int64)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v17, v4, *((struct REGION **)a1 + 87), (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
    {
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v12, *((struct _SURFOBJ **)a1 + 4));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v13, *((struct _SURFOBJ **)a1 + 166));
      INVOKEOFFCOPYBITS(
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 166),
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v17,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, a1, a2, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v10, &v16);
      if ( v10 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v15, &v10) )
      {
        Composite = psoSpGetComposite(a1, &v16, &StartingIndex);
        if ( !Composite )
          break;
        v7 = v10;
        v11.x = -v16.left;
        v8 = (struct _SURFOBJ *)*((_QWORD *)v10 + 20);
        v11.y = -v16.top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v13, v8);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v12, Composite);
        INVOKEOFFCOPYBITS(
          &v11,
          Composite,
          (struct _POINTL *)v7 + 21,
          *((struct _SURFOBJ **)v7 + 20),
          0LL,
          0LL,
          &v16,
          (struct _POINTL *)&v16);
        if ( v12 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
          v12 = 0LL;
        }
        if ( v13 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
          v13 = 0LL;
        }
        while ( 1 )
        {
          if ( (*(_DWORD *)v7 & 0x100) == 0 )
            vSpComposite(v7, &v11, Composite, &v16);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v10) )
            break;
          v7 = v10;
        }
        vSpWriteToExMirror(a1, &v11, Composite, &v16);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v14, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v14);
        }
      }
    }
    while ( v5 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v17);
  }
}
