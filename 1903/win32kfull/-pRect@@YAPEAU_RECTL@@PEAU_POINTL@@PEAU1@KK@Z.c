/*
 * XREFs of ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C014A3EC
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00579B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0149620 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC390 (NtGdiEngPlgBlt.c)
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
