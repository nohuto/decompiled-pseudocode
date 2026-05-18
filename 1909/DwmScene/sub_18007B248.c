/*
 * XREFs of sub_18007B248 @ 0x18007B248
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007B248(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_180077A8C(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &unk_180259CD8, 0LL);
  if ( (_BYTE)result )
    sub_180078230();
  return result;
}
