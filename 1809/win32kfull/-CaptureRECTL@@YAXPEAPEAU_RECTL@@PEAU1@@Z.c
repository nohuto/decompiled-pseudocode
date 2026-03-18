/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0296030 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02966A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0297DC0 (NtGdiEngTransparentBlt.c)
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
