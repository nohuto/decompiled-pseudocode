/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0042CC4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02831A0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161A18 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0161CE8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161DE0 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  int v5; // r14d
  struct _SURFOBJ *Composite; // rdi
  struct SPRITE *v7; // rsi
  struct _SURFOBJ *v8; // rdx
  ULONG StartingIndex; // [rsp+40h] [rbp-79h] BYREF
  struct SPRITE *v10; // [rsp+48h] [rbp-71h] BYREF
  struct _POINTL v11; // [rsp+50h] [rbp-69h] BYREF
  __int64 v12; // [rsp+58h] [rbp-61h] BYREF
  __int64 v13; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v15[96]; // [rsp+70h] [rbp-49h] BYREF
  struct _RECTL v16; // [rsp+D0h] [rbp+17h] BYREF

  v11 = 0LL;
  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, a1, a2, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v10, &v16);
      if ( v10 && (!(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v15, &v10) || a3) )
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
          vSpComposite(v7, &v11, Composite, &v16);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v10) )
            break;
          v7 = v10;
        }
        vSpWriteToScreen(a1, &v11, Composite, &v16);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v14, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v14);
        }
      }
    }
    while ( v5 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
  }
}
