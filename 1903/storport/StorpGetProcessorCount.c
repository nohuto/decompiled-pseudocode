/*
 * XREFs of StorpGetProcessorCount @ 0x1C003D37C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetProcessorCount(__int64 a1, ULONG *a2)
{
  if ( !a2 )
    return 3238002694LL;
  *a2 = KeQueryActiveProcessorCountEx(0xFFFFu);
  return 0LL;
}
