/*
 * XREFs of sub_18010AC80 @ 0x18010AC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010ACF8 @ 0x18010ACF8 (sub_18010ACF8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010AC80(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  sub_18010ACF8(a1, a2, a3, a4, a5, a6);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 32LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
