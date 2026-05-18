/*
 * XREFs of printf @ 0x180127280
 * Callers:
 *     sub_1801242DC @ 0x1801242DC (sub_1801242DC.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___acrt_iob_func @ 0x1801259AD (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x1801259CB (_o___stdio_common_vfprintf.c)
 */

int printf(const char *const Format, ...)
{
  o___acrt_iob_func();
  sub_180125980();
  return o___stdio_common_vfprintf();
}
