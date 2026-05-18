/*
 * XREFs of sub_1801347F0 @ 0x1801347F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006DFB4 @ 0x18006DFB4 (sub_18006DFB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801347F0(__int64 a1, __int64 a2)
{
  __int64 **LocaleT; // rdi
  __int64 *v4; // rbx

  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 32));
  v4 = *(__int64 **)(a2 + 152);
  sub_18006DFB4(*(_QWORD *)(a2 + 32), &v4[4 * *(_QWORD *)(a2 + 56)], *LocaleT);
  *LocaleT = v4;
  throw;
}
