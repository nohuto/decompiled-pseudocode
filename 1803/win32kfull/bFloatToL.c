/*
 * XREFs of bFloatToL @ 0x1C0222634
 * Callers:
 *     bNewXform @ 0x1C0222920 (bNewXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFloatToL(float a1, int *a2)
{
  int v3; // ecx
  int v5; // edx
  int v6; // eax

  v3 = (unsigned __int8)(SLODWORD(a1) >> 23) - 111;
  if ( v3 < 0 )
  {
    *a2 = 0;
    return 1LL;
  }
  if ( v3 < 23 )
  {
    v5 = (((LODWORD(a1) & 0x7FFFFF | 0x800000) >> (22 - v3)) + 1) >> 1;
LABEL_6:
    v6 = -v5;
    if ( a1 >= 0.0 )
      v6 = v5;
    *a2 = v6;
    return 1LL;
  }
  if ( v3 <= 30 )
  {
    v5 = (LODWORD(a1) & 0x7FFFFF | 0x800000) << ((SLODWORD(a1) >> 23) + 122);
    goto LABEL_6;
  }
  return 0LL;
}
