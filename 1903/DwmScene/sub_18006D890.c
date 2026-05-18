/*
 * XREFs of sub_18006D890 @ 0x18006D890
 * Callers:
 *     sub_1800249F0 @ 0x1800249F0 (sub_1800249F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D890(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800D59A8(*v2);
}
