/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00580A8
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00579B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0149620 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB240 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C02ACE00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
