/*
 * XREFs of ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02651C0
 * Callers:
 *     ?PanCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0265420 (-PanCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0264CD0 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C0264F68 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0266BBC (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0267648 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
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
  struct _PANDEV *dhpdev; // r14
  unsigned int v14; // edi
  LONG right; // eax
  LONG left; // ecx
  LONG x; // edx
  LONG y; // r8d
  int v19; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v22; // eax
  BOOL v23; // esi
  struct _RECTL v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  CLIPOBJ *pco; // [rsp+78h] [rbp-88h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-80h] BYREF
  SURFOBJ *psoTrg; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptlBrush; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *pbo; // [rsp+98h] [rbp-68h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-60h]
  _BYTE v33[224]; // [rsp+B0h] [rbp-50h] BYREF

  pptlMask = a8;
  pbo = a9;
  pptlBrush = a10;
  pco = a4;
  dhpdev = 0LL;
  psoTrg = a1;
  psoSrc = a2;
  v14 = 1;
  if ( a1->iType == 1 )
    dhpdev = (struct _PANDEV *)a1->dhpdev;
  if ( a2 && a2->iType == 1 )
    dhpdev = (struct _PANDEV *)a2->dhpdev;
  if ( pptlSrc && a2 )
  {
    right = prclTrg->right;
    left = prclTrg->left;
    x = pptlSrc->x;
    y = pptlSrc->y;
    v25.left = pptlSrc->x;
    v25.top = y;
    if ( right < left )
      v19 = left - right;
    else
      v19 = right - left;
    top = prclTrg->top;
    v25.right = x + v19;
    bottom = prclTrg->bottom;
    if ( bottom < top )
      v22 = top - bottom;
    else
      v22 = bottom - top;
    v25.bottom = y + v22;
  }
  else
  {
    *(_QWORD *)&v25.right = 0LL;
    *(_QWORD *)&v25.left = 0LL;
  }
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v33, dhpdev, &psoTrg, &psoSrc, prclTrg, &v25, &v26, a4);
  if ( !(unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v23 = EngBitBlt(psoTrg, psoSrc, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    if ( v26 == 1 )
      vPanningUpdate(dhpdev, prclTrg, pco);
    v14 = v23;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v33);
  return v14;
}
