/*
 * XREFs of StorpGetNodeAffinity @ 0x1C003E690
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetNodeAffinity(__int64 a1, unsigned int a2, struct _GROUP_AFFINITY *a3)
{
  if ( !a3 || a2 > 0xFFFF )
    return 3238002694LL;
  KeQueryNodeActiveAffinity(a2, a3, 0LL);
  return 0LL;
}
