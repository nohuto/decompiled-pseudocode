/*
 * XREFs of SanityCheckDimension @ 0x1C00D0974
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D06DC (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SanityCheckDimension(int a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax

  v2 = 0;
  v3 = a1;
  if ( !gbCheckLimits )
    return 1LL;
  if ( a1 <= a2 )
  {
    a1 = a2;
    a2 = v3;
  }
  LOBYTE(v2) = a1 - a2 <= (unsigned int)gdwMaxSurfaceSize;
  return v2;
}
