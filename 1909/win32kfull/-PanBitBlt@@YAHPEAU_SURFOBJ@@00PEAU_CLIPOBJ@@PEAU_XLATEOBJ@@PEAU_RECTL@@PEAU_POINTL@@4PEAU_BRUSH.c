/*
 * XREFs of ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028EA20
 * Callers:
 *     ?PanCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C028EC90 (-PanCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C028E524 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C028E7B8 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C02905DC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02910E4 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  struct _PANDEV *dhpdev; // rdi
  unsigned int v15; // ebx
  LONG right; // r8d
  LONG x; // r9d
  int v18; // ecx
  LONG y; // r10d
  int v20; // eax
  bool v21; // cc
  LONG bottom; // r8d
  LONG top; // edx
  int v24; // ecx
  BOOL v25; // r14d
  struct _RECTL v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  CLIPOBJ *pco; // [rsp+78h] [rbp-88h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-80h] BYREF
  SURFOBJ *psoTrg; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptlBrush; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *pbo; // [rsp+98h] [rbp-68h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-60h]
  _BYTE v35[224]; // [rsp+B0h] [rbp-50h] BYREF

  pptlMask = a8;
  pbo = a9;
  pptlBrush = a10;
  pco = a4;
  dhpdev = 0LL;
  psoTrg = a1;
  psoSrc = a2;
  v15 = 1;
  if ( a1->iType == 1 )
    dhpdev = (struct _PANDEV *)a1->dhpdev;
  if ( a2 && a2->iType == 1 )
    dhpdev = (struct _PANDEV *)a2->dhpdev;
  if ( pptlSrc && a2 )
  {
    right = prclTrg->right;
    x = pptlSrc->x;
    v18 = right - prclTrg->left;
    y = pptlSrc->y;
    v20 = prclTrg->left - right;
    v21 = right < prclTrg->left;
    v27.left = pptlSrc->x;
    bottom = prclTrg->bottom;
    top = prclTrg->top;
    if ( v21 )
      v18 = v20;
    v27.top = y;
    v27.right = x + v18;
    v24 = bottom - top;
    if ( bottom < top )
      v24 = top - bottom;
    v27.bottom = y + v24;
  }
  else
  {
    *(_QWORD *)&v27.right = 0LL;
    *(_QWORD *)&v27.left = 0LL;
  }
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v35, dhpdev, &psoTrg, &psoSrc, prclTrg, &v27, &v28, a4);
  if ( !(unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v25 = EngBitBlt(psoTrg, psoSrc, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    if ( v28 == 1 )
      vPanningUpdate(dhpdev, prclTrg, pco);
    v15 = v25;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v35);
  return v15;
}
