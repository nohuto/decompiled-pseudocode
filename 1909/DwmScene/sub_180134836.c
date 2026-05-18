/*
 * XREFs of sub_180134836 @ 0x180134836
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006DFB4 @ 0x18006DFB4 (sub_18006DFB4.c)
 *     sub_1800B2C60 @ 0x1800B2C60 (sub_1800B2C60.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134836(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  __int64 **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 32);
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v3);
  sub_1800B2C60((__int64)v3, *(_QWORD **)(a2 + 40), *LocaleT, *(char **)(a2 + 152));
  sub_18006DFB4((__int64)v3, *(__int64 **)(a2 + 40), *LocaleT);
  *LocaleT = *(__int64 **)(a2 + 48);
  throw;
}
