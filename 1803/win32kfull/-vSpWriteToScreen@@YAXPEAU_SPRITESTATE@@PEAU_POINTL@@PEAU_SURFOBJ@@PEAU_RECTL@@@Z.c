/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255E1C
 * Callers:
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C024E1C0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C02498CC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C02511BC (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  __int64 v5; // rdi
  struct _CLIPOBJ *v10; // r15
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rsi
  REGION *v14[11]; // [rsp+40h] [rbp-F8h] BYREF
  int v15; // [rsp+98h] [rbp-A0h]
  int v16; // [rsp+C0h] [rbp-78h]
  __int64 v17; // [rsp+D0h] [rbp-68h]
  int v18; // [rsp+D8h] [rbp-60h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v5 = 0LL;
  v14[10] = 0LL;
  v15 = 0;
  v16 = 1;
  v17 = 0LL;
  v14[7] = 0LL;
  v10 = 0LL;
  v18 = 0;
  if ( v4 )
  {
    v11 = bConcurrent(a1, (__int64)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v14, v11, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v14 + 4)) )
      goto LABEL_17;
    v10 = (struct _CLIPOBJ *)v14;
  }
  a3->iUniq = 0;
  v12 = 0LL;
  if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
  }
  v13 = *((_QWORD *)a1 + 4);
  if ( v13
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
  {
    v5 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
    GreLockDisplayDevice(*(_QWORD *)(v5 + 48));
  }
  INVOKEOFFCOPYBITS(&gptlZero, *((struct _SURFOBJ **)a1 + 4), a2, a3, v10, 0LL, a4, (struct _POINTL *)a4);
  if ( v5 )
    GreUnlockDisplayDevice(*(_QWORD *)(v5 + 48));
  if ( v12 )
    GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
LABEL_17:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v14);
}
