/*
 * XREFs of ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290640
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0055580 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C028ED44 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C028EE74 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0290C0C (-bIgnoreDeviceSurfaceUpdates@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0291714 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall PanTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        struct _CLIPOBJ *a4,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  RECTL *p_rclBkGround; // rsi
  struct _PANDEV *dhpdev; // r14
  unsigned int v15; // ebx
  BOOL v16; // edi
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlOrg; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pboOpaque; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *pboFore; // [rsp+78h] [rbp-88h]
  struct _RECTL v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[112]; // [rsp+90h] [rbp-70h] BYREF

  pboFore = a7;
  pboOpaque = a8;
  p_rclBkGround = prclOpaque;
  pptlOrg = a9;
  if ( !prclOpaque )
    p_rclBkGround = &pstro->rclBkGround;
  pco = a4;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pso = a1;
  v24 = *p_rclBkGround;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v25, dhpdev, &pso, &v24, &v18, a4);
  if ( (unsigned int)bIgnoreDeviceSurfaceUpdates(a1, &pco) )
  {
    v15 = 1;
  }
  else
  {
    v16 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    if ( v18 == 1 )
      vPanningUpdate(dhpdev, p_rclBkGround, pco);
    v15 = v16;
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v25);
  return v15;
}
