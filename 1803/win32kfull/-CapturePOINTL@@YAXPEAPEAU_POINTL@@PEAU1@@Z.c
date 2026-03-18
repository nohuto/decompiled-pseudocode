/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0120690
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngFillPath @ 0x1C02832D0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02834D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C0283AD0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C0284090 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0284370 (NtGdiEngStrokePath.c)
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
