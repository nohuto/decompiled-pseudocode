/*
 * XREFs of sub_18007B138 @ 0x18007B138
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007B138(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_18007797C(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &unk_180258CD8, 0LL);
  if ( (_BYTE)result )
    sub_180078120();
  return result;
}
