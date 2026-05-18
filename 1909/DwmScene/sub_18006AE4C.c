/*
 * XREFs of sub_18006AE4C @ 0x18006AE4C
 * Callers:
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AE4C(_QWORD **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64, _QWORD))(*a1)[36])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
