/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C011EED0
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x1C0282970 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C0283170 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02834D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02838D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0284600 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _RECTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
