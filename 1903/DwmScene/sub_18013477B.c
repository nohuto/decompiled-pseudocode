/*
 * XREFs of sub_18013477B @ 0x18013477B
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006DEA4 @ 0x18006DEA4 (sub_18006DEA4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013477B(__int64 a1, __int64 a2)
{
  __int64 **LocaleT; // rbx

  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 32));
  sub_18006DEA4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 40), *LocaleT);
  *LocaleT = *(__int64 **)(a2 + 152);
  throw;
}
