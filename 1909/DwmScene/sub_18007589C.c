/*
 * XREFs of sub_18007589C @ 0x18007589C
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_1800E9D70 @ 0x1800E9D70 (sub_1800E9D70.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007589C(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_180077A8C(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180259CF8, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180259D18, 0LL);
  if ( v3 && v4 )
    sub_180078230(a1);
  sub_1800E9D70(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800E99F8(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}
