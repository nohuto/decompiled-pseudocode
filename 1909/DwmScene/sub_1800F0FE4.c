/*
 * XREFs of sub_1800F0FE4 @ 0x1800F0FE4
 * Callers:
 *     sub_18009B3D0 @ 0x18009B3D0 (sub_18009B3D0.c)
 *     sub_18009C8D0 @ 0x18009C8D0 (sub_18009C8D0.c)
 *     sub_1800B0290 @ 0x1800B0290 (sub_1800B0290.c)
 * Callees:
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_1800F0FE4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  sub_1800F0EB4(a1);
  sub_180078230();
}
