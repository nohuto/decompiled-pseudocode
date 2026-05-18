/*
 * XREFs of sub_180024AD0 @ 0x180024AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024AD0(__int64 a1)
{
  sub_1800635BC(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_18006D800(a1);
}
