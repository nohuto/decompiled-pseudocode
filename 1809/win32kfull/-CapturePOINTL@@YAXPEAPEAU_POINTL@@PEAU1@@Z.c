/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngFillPath @ 0x1C0296830 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C0297120 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  struct _POINTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _POINTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
