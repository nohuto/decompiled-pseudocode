/*
 * XREFs of sub_180127444 @ 0x180127444
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18003C860 @ 0x18003C860 (sub_18003C860.c)
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___stdio_common_vsnprintf_s @ 0x180125AE1 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_180127444()
{
  __int64 result; // rax

  sub_180125A90();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
