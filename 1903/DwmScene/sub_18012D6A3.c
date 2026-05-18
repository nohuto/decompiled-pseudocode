/*
 * XREFs of sub_18012D6A3 @ 0x18012D6A3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F4F4 @ 0x18000F4F4 (sub_18000F4F4.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D6A3(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rdi
  __int64 v4; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  v4 = *(_QWORD *)(a2 + 184);
  sub_18000F4F4(*(_QWORD *)(a2 + 40), v4 + 16LL * *(_QWORD *)(a2 + 56), *LocaleT);
  *LocaleT = v4;
  throw;
}
