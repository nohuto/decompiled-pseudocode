/*
 * XREFs of ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255D2C
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C02498CC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C02511BC (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct _CLIPOBJ *v4; // rax
  struct REGION *v7; // rbp
  int v10; // eax
  REGION *v11[11]; // [rsp+40h] [rbp-D8h] BYREF
  int v12; // [rsp+98h] [rbp-80h]
  int v13; // [rsp+C0h] [rbp-58h]
  __int64 v14; // [rsp+D0h] [rbp-48h]
  int v15; // [rsp+D8h] [rbp-40h]

  v11[10] = 0LL;
  v4 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v7 = (struct REGION *)*((_QWORD *)a1 + 129);
  v13 = 1;
  v11[7] = 0LL;
  v15 = 0;
  if ( !v7 )
    goto LABEL_4;
  v10 = bConcurrent(a1, (__int64)a2);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v11, v10, v7, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)((char *)v11 + 4)) )
  {
    v4 = (struct _CLIPOBJ *)v11;
LABEL_4:
    a3->iUniq = 0;
    INVOKEOFFCOPYBITS(&gptlZero, *((struct _SURFOBJ **)a1 + 166), a2, a3, v4, 0LL, a4, (struct _POINTL *)a4);
  }
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v11);
}
