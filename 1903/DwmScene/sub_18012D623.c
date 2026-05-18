/*
 * XREFs of sub_18012D623 @ 0x18012D623
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F4F4 @ 0x18000F4F4 (sub_18000F4F4.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18000F558 @ 0x18000F558 (sub_18000F558.c)
 *     sub_180072A7C @ 0x180072A7C (sub_180072A7C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D623(__int64 a1, _QWORD *a2)
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
  sub_18000F558((__int64)v6, &v4[a2[10]], v5, v4);
  v7 = &v4[16 * v3];
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v6);
  sub_180072A7C((__int64 *)v5, *LocaleT, v7);
  v9 = a2[8];
  sub_18000F4F4((__int64)v6, v9, (__int64)*LocaleT);
  *LocaleT = (__int64 *)v9;
  throw;
}
