/*
 * XREFs of _LDint @ 0x1800CA05C
 * Callers:
 *     _LXp_addh @ 0x1800B77C0 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B7B90 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800B7EBC (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDint(_WORD *a1, __int16 a2)
{
  return Dint(a1, a2);
}
