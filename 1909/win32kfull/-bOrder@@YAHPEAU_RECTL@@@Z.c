/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00A1938
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00A1240 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AAD90 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AC950 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
