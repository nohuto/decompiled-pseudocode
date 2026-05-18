/*
 * XREFs of sub_1800636FC @ 0x1800636FC
 * Callers:
 *     sub_180062CD8 @ 0x180062CD8 (sub_180062CD8.c)
 *     sub_180062DAC @ 0x180062DAC (sub_180062DAC.c)
 *     sub_180062E80 @ 0x180062E80 (sub_180062E80.c)
 *     sub_180062F60 @ 0x180062F60 (sub_180062F60.c)
 * Callees:
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 */

char __fastcall sub_1800636FC(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_180063734(a1, a2) || (unsigned __int8)sub_180063734(a1, 0LL) )
    return 1;
  return v3;
}
