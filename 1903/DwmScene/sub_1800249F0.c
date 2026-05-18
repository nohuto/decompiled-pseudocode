/*
 * XREFs of sub_1800249F0 @ 0x1800249F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800633E4 @ 0x1800633E4 (sub_1800633E4.c)
 *     sub_180063428 @ 0x180063428 (sub_180063428.c)
 *     sub_18006D890 @ 0x18006D890 (sub_18006D890.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800249F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_180063428(a1 + 24);
  sub_1800633E4(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_18006D890(a1, a2, a3, a4, a5);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
