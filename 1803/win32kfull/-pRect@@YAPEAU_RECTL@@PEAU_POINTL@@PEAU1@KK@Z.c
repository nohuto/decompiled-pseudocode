/*
 * XREFs of ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0120850
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C011EF00 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

struct _RECTL *__fastcall pRect(struct _POINTL *a1, struct _RECTL *a2, int a3, int a4)
{
  struct _RECTL *v4; // r10

  v4 = a2;
  if ( !a1 )
    return 0LL;
  a2->left = a1->x;
  a2->right = a3 + a1->x;
  a2->top = a1->y;
  a2->bottom = a4 + a1->y;
  return v4;
}
