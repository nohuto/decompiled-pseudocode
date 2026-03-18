/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161A18
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027E224 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0161B2C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0161C00 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027D0A4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct _CLIPOBJ *v4; // rbx
  struct REGION *v9; // r14
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-99h] BYREF
  __int64 v12; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v13[4]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v14[52]; // [rsp+54h] [rbp-85h] BYREF
  __int64 v15; // [rsp+88h] [rbp-51h]
  __int64 v16; // [rsp+A0h] [rbp-39h]
  int v17; // [rsp+A8h] [rbp-31h]
  int v18; // [rsp+D0h] [rbp-9h]
  __int64 v19; // [rsp+E0h] [rbp+7h]
  int v20; // [rsp+E8h] [rbp+Fh]

  v16 = 0LL;
  v4 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v15 = 0LL;
  v20 = 0;
  v9 = (struct REGION *)*((_QWORD *)a1 + 129);
  v18 = 1;
  if ( v9 )
  {
    v10 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v13, v10, v9, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v14) )
      goto LABEL_6;
    v4 = (struct _CLIPOBJ *)v13;
  }
  a3->iUniq = 0;
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v12, a3);
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v11, *((struct _SURFOBJ **)a1 + 4));
  INVOKEOFFCOPYBITS(&gptlZero, *((struct _SURFOBJ **)a1 + 4), a2, a3, v4, 0LL, a4, (struct _POINTL *)a4);
  if ( v11 )
    GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
  if ( v12 )
    GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
LABEL_6:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v13);
}
