/*
 * XREFs of sub_18012D733 @ 0x18012D733
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18000F5A8 @ 0x18000F5A8 (sub_18000F5A8.c)
 *     sub_180072B8C @ 0x180072B8C (sub_180072B8C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D733(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  char *v4; // rbx
  char *v5; // r14
  _LocaleUpdate *v6; // rsi
  char *v7; // rbx
  __int64 **LocaleT; // rdi
  __int64 v9; // rbx

  v3 = a2[7];
  v4 = (char *)a2[23];
  v5 = &v4[32 * v3];
  v6 = (_LocaleUpdate *)a2[5];
  sub_18000F5A8((__int64)v6, &v4[a2[10]], v5, v4);
  v7 = &v4[16 * v3];
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v6);
  sub_180072B8C((__int64 *)v5, *LocaleT, v7);
  v9 = a2[8];
  sub_18000F544((__int64)v6, v9, (__int64)*LocaleT);
  *LocaleT = (__int64 *)v9;
  throw;
}
