/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x18012743A
 * Callers:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 *     sub_18002D9EC @ 0x18002D9EC (sub_18002D9EC.c)
 *     sub_18002E3A4 @ 0x18002E3A4 (sub_18002E3A4.c)
 *     sub_18006E6CC @ 0x18006E6CC (sub_18006E6CC.c)
 *     sub_180072634 @ 0x180072634 (sub_180072634.c)
 *     sub_180075020 @ 0x180075020 (sub_180075020.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __imp_?uncaught_exception@std@@YA_NXZ();
}
