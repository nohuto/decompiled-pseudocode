/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014A3A8
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0149620 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB240 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB810 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02ABBA0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABFD0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC390 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02ACE00 (NtGdiEngTransparentBlt.c)
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
