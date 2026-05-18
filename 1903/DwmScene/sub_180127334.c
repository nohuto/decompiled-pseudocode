/*
 * XREFs of sub_180127334 @ 0x180127334
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18003C750 @ 0x18003C750 (sub_18003C750.c)
 *     sub_18011D69C @ 0x18011D69C (sub_18011D69C.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___stdio_common_vsnprintf_s @ 0x1801259D1 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_180127334()
{
  __int64 result; // rax

  sub_180125980();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
