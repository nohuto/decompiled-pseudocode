/*
 * XREFs of sub_18006D9A0 @ 0x18006D9A0
 * Callers:
 *     sub_180024B00 @ 0x180024B00 (sub_180024B00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D9A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800D5AB8(*v2);
}
