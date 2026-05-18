/*
 * XREFs of sub_180068AF0 @ 0x180068AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067490 @ 0x180067490 (sub_180067490.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_180068AF0(__int64 *a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  double v6; // xmm0_8
  unsigned __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h] BYREF

  v3 = *a1;
  v9 = a3;
  v6 = (*(double (__fastcall **)(__int64 *))(v3 + 112))(a1);
  v8 = __PAIR64__(COERCE_UNSIGNED_INT((*(float (__fastcall **)(__int64 *))(*a1 + 120))(a1)), LODWORD(v6));
  sub_180067490(a2, &v9, &v8);
  return a2;
}
