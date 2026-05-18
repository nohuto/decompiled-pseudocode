/*
 * XREFs of sub_1800249C0 @ 0x1800249C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800249C0(__int64 a1)
{
  sub_1800634AC(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_18006D6F0(a1);
}
