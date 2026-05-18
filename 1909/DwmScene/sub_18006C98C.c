/*
 * XREFs of sub_18006C98C @ 0x18006C98C
 * Callers:
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18001D654 @ 0x18001D654 (sub_18001D654.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006C98C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18001D654(a1, a2);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18000F444(v8, a4);
  sub_1800645F4(*a2, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
