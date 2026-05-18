/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x18012754A
 * Callers:
 *     sub_18002D4AC @ 0x18002D4AC (sub_18002D4AC.c)
 *     sub_18002DAFC @ 0x18002DAFC (sub_18002DAFC.c)
 *     sub_18002E4B4 @ 0x18002E4B4 (sub_18002E4B4.c)
 *     sub_18006E7DC @ 0x18006E7DC (sub_18006E7DC.c)
 *     sub_180072744 @ 0x180072744 (sub_180072744.c)
 *     sub_180075130 @ 0x180075130 (sub_180075130.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __imp_?uncaught_exception@std@@YA_NXZ();
}
