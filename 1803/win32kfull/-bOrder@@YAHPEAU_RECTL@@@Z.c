/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C011F568
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x1C011EF00 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C0282970 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngTransparentBlt @ 0x1C0284600 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
