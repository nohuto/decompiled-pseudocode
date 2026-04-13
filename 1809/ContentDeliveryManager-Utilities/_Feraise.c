/*
 * XREFs of _Feraise @ 0x1800C5A08
 * Callers:
 *     _FXp_addh @ 0x1800B1E30 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B22A4 (_FXp_mulh.c)
 *     _Xp_addh @ 0x1800B2B3C (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800B2FC8 (_Xp_mulh.c)
 *     _LXp_addh @ 0x1800B36B8 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B3A88 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
