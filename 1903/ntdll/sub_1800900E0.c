/*
 * XREFs of sub_1800900E0 @ 0x1800900E0
 * Callers:
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 *     sub_18009261C @ 0x18009261C (sub_18009261C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800900E0(unsigned __int16 a1, __int16 a2)
{
  if ( a1 >= 0x100u )
    return 0;
  else
    return (unsigned __int16)(a2 & *((_WORD *)off_18015F008 + a1));
}
