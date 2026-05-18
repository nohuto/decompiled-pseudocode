/*
 * XREFs of sub_18006A474 @ 0x18006A474
 * Callers:
 *     sub_18000EEE0 @ 0x18000EEE0 (sub_18000EEE0.c)
 *     sub_180025120 @ 0x180025120 (sub_180025120.c)
 *     sub_1800252A0 @ 0x1800252A0 (sub_1800252A0.c)
 *     sub_18002A2E0 @ 0x18002A2E0 (sub_18002A2E0.c)
 *     sub_180033E7C @ 0x180033E7C (sub_180033E7C.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A474(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **))(*a1)[29])(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
