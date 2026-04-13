/*
 * XREFs of _LDscale @ 0x1800B36AC
 * Callers:
 *     _Stoldx @ 0x1800AB7E4 (_Stoldx.c)
 *     _LXp_addh @ 0x1800B36B8 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B3A88 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800B3DB4 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(unsigned __int16 *a1, int a2)
{
  return Dscale(a1, a2);
}
