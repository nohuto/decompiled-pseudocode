/*
 * XREFs of sub_18010A0D4 @ 0x18010A0D4
 * Callers:
 *     sub_18005E4E0 @ 0x18005E4E0 (sub_18005E4E0.c)
 *     sub_180108BF4 @ 0x180108BF4 (sub_180108BF4.c)
 *     sub_180109398 @ 0x180109398 (sub_180109398.c)
 *     sub_1801099E0 @ 0x1801099E0 (sub_1801099E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18010A0D4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
