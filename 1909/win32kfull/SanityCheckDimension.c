/*
 * XREFs of SanityCheckDimension @ 0x1C00C18A0
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00C15F4 (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SanityCheckDimension(int a1, int a2)
{
  int v2; // eax

  if ( !gbCheckLimits )
    return 1LL;
  v2 = a1;
  if ( a1 <= a2 )
  {
    v2 = a2;
    a2 = a1;
  }
  return v2 - a2 <= (unsigned int)gdwMaxSurfaceSize;
}
