/*
 * XREFs of sub_18007578C @ 0x18007578C
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_1800E9C60 @ 0x1800E9C60 (sub_1800E9C60.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007578C(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_18007797C(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180258CF8, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180258D18, 0LL);
  if ( v3 && v4 )
    sub_180078120(a1);
  sub_1800E9C60(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800E98E8(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}
