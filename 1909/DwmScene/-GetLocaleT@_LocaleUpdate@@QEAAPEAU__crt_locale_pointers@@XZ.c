/*
 * XREFs of ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0
 * Callers:
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 *     sub_1800FEEF0 @ 0x1800FEEF0 (sub_1800FEEF0.c)
 *     sub_18012D733 @ 0x18012D733 (sub_18012D733.c)
 *     sub_18012D7B3 @ 0x18012D7B3 (sub_18012D7B3.c)
 *     sub_18012D7F9 @ 0x18012D7F9 (sub_18012D7F9.c)
 *     sub_18012D84E @ 0x18012D84E (sub_18012D84E.c)
 *     sub_1801343C0 @ 0x1801343C0 (sub_1801343C0.c)
 *     sub_180134440 @ 0x180134440 (sub_180134440.c)
 *     sub_180134486 @ 0x180134486 (sub_180134486.c)
 *     sub_1801344DB @ 0x1801344DB (sub_1801344DB.c)
 *     sub_180134770 @ 0x180134770 (sub_180134770.c)
 *     sub_1801347F0 @ 0x1801347F0 (sub_1801347F0.c)
 *     sub_180134836 @ 0x180134836 (sub_180134836.c)
 *     sub_18013488B @ 0x18013488B (sub_18013488B.c)
 * Callees:
 *     <none>
 */

struct __crt_locale_pointers *__fastcall _LocaleUpdate::GetLocaleT(_LocaleUpdate *this)
{
  return (struct __crt_locale_pointers *)((char *)this + 8);
}
