/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014B158
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AAD90 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB360 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02AB6F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABB20 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02ABEE0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AC950 (NtGdiEngTransparentBlt.c)
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
