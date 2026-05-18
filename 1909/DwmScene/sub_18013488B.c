/*
 * XREFs of sub_18013488B @ 0x18013488B
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006DFB4 @ 0x18006DFB4 (sub_18006DFB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013488B(__int64 a1, __int64 a2)
{
  __int64 **LocaleT; // rbx

  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 32));
  sub_18006DFB4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 40), *LocaleT);
  *LocaleT = *(__int64 **)(a2 + 152);
  throw;
}
