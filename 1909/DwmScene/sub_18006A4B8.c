/*
 * XREFs of sub_18006A4B8 @ 0x18006A4B8
 * Callers:
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A4B8(_QWORD **a1, unsigned int a2, unsigned int a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*a1)[25])(a1, a2, a3);
}
