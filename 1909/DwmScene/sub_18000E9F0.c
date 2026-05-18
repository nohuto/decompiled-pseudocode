/*
 * XREFs of sub_18000E9F0 @ 0x18000E9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E9F0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_180028710(a1);
  return result;
}
