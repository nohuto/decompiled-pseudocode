/*
 * XREFs of printf @ 0x180127390
 * Callers:
 *     sub_1801243EC @ 0x1801243EC (sub_1801243EC.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___acrt_iob_func @ 0x180125ABD (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x180125ADB (_o___stdio_common_vfprintf.c)
 */

int printf(const char *const Format, ...)
{
  o___acrt_iob_func();
  sub_180125A90();
  return o___stdio_common_vfprintf();
}
