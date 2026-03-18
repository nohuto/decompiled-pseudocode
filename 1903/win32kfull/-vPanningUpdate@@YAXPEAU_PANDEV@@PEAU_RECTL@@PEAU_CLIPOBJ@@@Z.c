/*
 * XREFs of ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0291714
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028EEE0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028F050 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028FB40 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C028FE80 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0290010 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0290170 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0290300 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290640 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02907A0 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0291874 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall vPanningUpdate(struct _PANDEV *a1, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // edx
  LONG right; // r9d
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v14; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0uLL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    right = a2->right;
    if ( a3->rclBounds.left > left )
      left = a3->rclBounds.left;
    v8 = a2->top;
    LODWORD(v15) = left;
    if ( top > v8 )
      v8 = top;
    bottom = a3->rclBounds.bottom;
    DWORD1(v15) = v8;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    v10 = a2->bottom;
    DWORD2(v15) = right;
    if ( bottom < v10 )
      v10 = bottom;
    HIDWORD(v15) = v10;
  }
  else
  {
    v15 = (unsigned __int128)*a2;
    right = DWORD2(v15);
    left = v15;
  }
  if ( left < right && SDWORD1(v15) < SHIDWORD(v15) )
  {
    v14 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
    EngAcquireSemaphore(v14);
    v12 = *((_QWORD *)a1 + 12);
    v11 = *((_QWORD *)a1 + 11);
    v13 = *((_QWORD *)a1 + 10);
    RGNOBJ::vSet((RGNOBJ *)&v12, (struct _RECTL *)&v15);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v12, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSet((RGNOBJ *)&v11);
    *((_QWORD *)a1 + 11) = v13;
    *((_QWORD *)a1 + 10) = v11;
    *((_DWORD *)a1 + 26) = 1;
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v14);
  }
}
