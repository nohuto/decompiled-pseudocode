/*
 * XREFs of _LDtest @ 0x1800CA050
 * Callers:
 *     _LXp_addh @ 0x1800B77C0 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B7B90 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __cdecl LDtest(long double *a1)
{
  return Dtest(a1);
}
