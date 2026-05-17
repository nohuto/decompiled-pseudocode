/*
 * XREFs of sub_1800625F4 @ 0x1800625F4
 * Callers:
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_1800624E0 @ 0x1800624E0 (sub_1800624E0.c)
 *     sub_1800828A0 @ 0x1800828A0 (sub_1800828A0.c)
 *     sub_1800CE6B0 @ 0x1800CE6B0 (sub_1800CE6B0.c)
 *     sub_1800CE860 @ 0x1800CE860 (sub_1800CE860.c)
 *     sub_1800CE894 @ 0x1800CE894 (sub_1800CE894.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800625F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    return a4 != v6 ? 0x8000000D : 0;
  return result;
}
