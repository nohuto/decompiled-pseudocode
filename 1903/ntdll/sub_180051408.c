/*
 * XREFs of sub_180051408 @ 0x180051408
 * Callers:
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_18010C01C @ 0x18010C01C (sub_18010C01C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180051408(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 144)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
