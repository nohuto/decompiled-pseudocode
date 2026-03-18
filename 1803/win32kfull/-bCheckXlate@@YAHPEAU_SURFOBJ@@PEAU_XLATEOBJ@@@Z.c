/*
 * XREFs of ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C011F51C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C011EF00 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C0282970 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0284600 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  bool v6; // zf

  v2 = 1;
  if ( !a1 || !a2 || (a2->flXlate & 1) != 0 )
    return v2;
  v3 = a1->iBitmapFormat - 1;
  if ( !v3 )
  {
    v2 = 0;
    v6 = a2->cEntries == 2;
LABEL_10:
    LOBYTE(v2) = v6;
    return v2;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 0;
    v6 = ((a2->cEntries - 8) & 0xFFFFFFF7) == 0;
    goto LABEL_10;
  }
  if ( v4 == 1 )
    return a2->cEntries <= 0x100;
  return v2;
}
