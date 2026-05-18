/*
 * XREFs of sub_18006A50C @ 0x18006A50C
 * Callers:
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A50C(_QWORD **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*a1)[26])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
