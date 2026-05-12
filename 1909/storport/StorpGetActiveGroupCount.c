/*
 * XREFs of StorpGetActiveGroupCount @ 0x1C003E25C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetActiveGroupCount(__int64 a1, USHORT *a2)
{
  if ( !a2 )
    return 3238002694LL;
  *a2 = KeQueryActiveGroupCount();
  return 0LL;
}
