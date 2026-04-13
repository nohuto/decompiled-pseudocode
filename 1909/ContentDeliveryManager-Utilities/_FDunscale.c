/*
 * XREFs of _FDunscale @ 0x1800C9C0C
 * Callers:
 *     _FXp_addh @ 0x1800B5F48 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B63BC (_FXp_mulh.c)
 *     _FXp_setw @ 0x1800B6734 (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x1800C99D4 (_FDnorm.c)
 */

__int64 __fastcall FDunscale(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // ax
  __int64 result; // rax

  v3 = (unsigned __int8)(a2[1] >> 7);
  if ( v3 == 255 )
  {
    *a1 = 0;
    if ( (a2[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a2 )
      return 2LL;
  }
  else if ( (unsigned __int8)(a2[1] >> 7) || (v3 = FDnorm(a2), v3 <= 0) )
  {
    a2[1] &= 0xBF7Fu;
    a2[1] |= 0x3F00u;
    *a1 = v3 - 126;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = 0;
    return 0LL;
  }
  return result;
}
