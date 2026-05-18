/*
 * XREFs of sub_180134660 @ 0x180134660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006DEA4 @ 0x18006DEA4 (sub_18006DEA4.c)
 *     sub_1800AB534 @ 0x1800AB534 (sub_1800AB534.c)
 *     sub_1800B2B50 @ 0x1800B2B50 (sub_1800B2B50.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134660(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  char *v4; // rbx
  char *v5; // r14
  _LocaleUpdate *v6; // rsi
  __int64 v7; // rbx
  __int64 *LocaleT; // rdi
  __int64 *v9; // rbx

  v3 = a2[7];
  v4 = (char *)a2[19];
  v5 = &v4[64 * v3];
  v6 = (_LocaleUpdate *)a2[4];
  sub_1800B2B50((__int64)v6, &v4[a2[8]], v5, v4);
  v7 = (__int64)&v4[32 * v3];
  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(v6);
  sub_1800AB534((__int64)v5, *LocaleT, v7);
  v9 = (__int64 *)a2[6];
  sub_18006DEA4((__int64)v6, v9, (__int64 *)*LocaleT);
  *LocaleT = (__int64)v9;
  throw;
}
