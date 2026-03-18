/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C014AFA8
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02AB4E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AB6F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02ABD30 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ABEE0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AC680 (NtGdiEngStrokePath.c)
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
