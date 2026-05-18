/*
 * XREFs of sub_18012D6E9 @ 0x18012D6E9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F4F4 @ 0x18000F4F4 (sub_18000F4F4.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18000F558 @ 0x18000F558 (sub_18000F558.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D6E9(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  char **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 40);
  LocaleT = (char **)_LocaleUpdate::GetLocaleT(v3);
  sub_18000F558((__int64)v3, *(char **)(a2 + 48), *LocaleT, *(char **)(a2 + 184));
  sub_18000F4F4((__int64)v3, *(_QWORD *)(a2 + 48), (__int64)*LocaleT);
  *LocaleT = *(char **)(a2 + 64);
  throw;
}
