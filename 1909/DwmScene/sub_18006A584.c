/*
 * XREFs of sub_18006A584 @ 0x18006A584
 * Callers:
 *     sub_18000EF30 @ 0x18000EF30 (sub_18000EF30.c)
 *     sub_180025230 @ 0x180025230 (sub_180025230.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_18002A3F0 @ 0x18002A3F0 (sub_18002A3F0.c)
 *     sub_180033F8C @ 0x180033F8C (sub_180033F8C.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A584(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **))(*a1)[29])(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
