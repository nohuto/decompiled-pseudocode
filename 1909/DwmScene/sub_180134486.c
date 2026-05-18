/*
 * XREFs of sub_180134486 @ 0x180134486
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18000F5A8 @ 0x18000F5A8 (sub_18000F5A8.c)
 *     sub_180011218 @ 0x180011218 (sub_180011218.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134486(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  char **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 40);
  LocaleT = (char **)_LocaleUpdate::GetLocaleT(v3);
  sub_18000F5A8((__int64)v3, *(char **)(a2 + 48), *LocaleT, *(char **)(a2 + 184));
  sub_180011218((__int64)v3, *(_QWORD *)(a2 + 48), (__int64)*LocaleT);
  *LocaleT = *(char **)(a2 + 64);
  throw;
}
