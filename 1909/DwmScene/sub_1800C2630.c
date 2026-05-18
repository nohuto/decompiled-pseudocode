/*
 * XREFs of sub_1800C2630 @ 0x1800C2630
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180079170 @ 0x180079170 (sub_180079170.c)
 *     sub_1800C3254 @ 0x1800C3254 (sub_1800C3254.c)
 *     sub_1800C32EC @ 0x1800C32EC (sub_1800C32EC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C2630(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180079170((__int64)a1, a2);
  v3 = sub_180077A8C((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180259978, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_18025A138, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_180259938, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802598D8, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802598F8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_180259918, v7, 1LL);
  }
  sub_1800C32EC(a1);
  sub_1800C3254(a1);
  return sub_1800C32A0(a1);
}
