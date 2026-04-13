/*
 * XREFs of _LDscale @ 0x1800B77B4
 * Callers:
 *     _Stoldx @ 0x1800AF8F0 (_Stoldx.c)
 *     _LXp_addh @ 0x1800B77C0 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B7B90 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800B7EBC (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(unsigned __int16 *a1, int a2)
{
  return Dscale(a1, a2);
}
