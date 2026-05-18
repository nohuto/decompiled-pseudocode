/*
 * XREFs of sub_18006C87C @ 0x18006C87C
 * Callers:
 *     sub_1800AC9E0 @ 0x1800AC9E0 (sub_1800AC9E0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18001D544 @ 0x18001D544 (sub_18001D544.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006C87C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18001D544(a1, a2);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18000F3F4(v8, a4);
  sub_1800644E4(*a2, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
