/*
 * XREFs of sub_1800635EC @ 0x1800635EC
 * Callers:
 *     sub_180062BC8 @ 0x180062BC8 (sub_180062BC8.c)
 *     sub_180062C9C @ 0x180062C9C (sub_180062C9C.c)
 *     sub_180062D70 @ 0x180062D70 (sub_180062D70.c)
 *     sub_180062E50 @ 0x180062E50 (sub_180062E50.c)
 * Callees:
 *     sub_180063624 @ 0x180063624 (sub_180063624.c)
 */

char __fastcall sub_1800635EC(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_180063624(a1, a2) || (unsigned __int8)sub_180063624(a1, 0LL) )
    return 1;
  return v3;
}
