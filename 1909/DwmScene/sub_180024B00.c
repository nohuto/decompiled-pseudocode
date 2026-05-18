/*
 * XREFs of sub_180024B00 @ 0x180024B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800634F4 @ 0x1800634F4 (sub_1800634F4.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     sub_18006D9A0 @ 0x18006D9A0 (sub_18006D9A0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024B00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_180063538(a1 + 24);
  sub_1800634F4(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_18006D9A0(a1, a2, a3, a4, a5);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
