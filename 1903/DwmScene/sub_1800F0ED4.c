/*
 * XREFs of sub_1800F0ED4 @ 0x1800F0ED4
 * Callers:
 *     sub_18009B2C0 @ 0x18009B2C0 (sub_18009B2C0.c)
 *     sub_18009C7C0 @ 0x18009C7C0 (sub_18009C7C0.c)
 *     sub_1800B0180 @ 0x1800B0180 (sub_1800B0180.c)
 * Callees:
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180086C24 @ 0x180086C24 (sub_180086C24.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_1800F0ED4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  sub_1800F0DA4(a1);
  sub_180078120();
}
