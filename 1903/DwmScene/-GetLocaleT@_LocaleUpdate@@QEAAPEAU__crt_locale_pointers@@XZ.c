/*
 * XREFs of ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550
 * Callers:
 *     sub_180078A58 @ 0x180078A58 (sub_180078A58.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800FEDE0 @ 0x1800FEDE0 (sub_1800FEDE0.c)
 *     sub_18012D623 @ 0x18012D623 (sub_18012D623.c)
 *     sub_18012D6A3 @ 0x18012D6A3 (sub_18012D6A3.c)
 *     sub_18012D6E9 @ 0x18012D6E9 (sub_18012D6E9.c)
 *     sub_18012D73E @ 0x18012D73E (sub_18012D73E.c)
 *     sub_1801342B0 @ 0x1801342B0 (sub_1801342B0.c)
 *     sub_180134330 @ 0x180134330 (sub_180134330.c)
 *     sub_180134376 @ 0x180134376 (sub_180134376.c)
 *     sub_1801343CB @ 0x1801343CB (sub_1801343CB.c)
 *     sub_180134660 @ 0x180134660 (sub_180134660.c)
 *     sub_1801346E0 @ 0x1801346E0 (sub_1801346E0.c)
 *     sub_180134726 @ 0x180134726 (sub_180134726.c)
 *     sub_18013477B @ 0x18013477B (sub_18013477B.c)
 * Callees:
 *     <none>
 */

struct __crt_locale_pointers *__fastcall _LocaleUpdate::GetLocaleT(_LocaleUpdate *this)
{
  return (struct __crt_locale_pointers *)((char *)this + 8);
}
