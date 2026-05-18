/*
 * XREFs of sub_1800C2520 @ 0x1800C2520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180079060 @ 0x180079060 (sub_180079060.c)
 *     sub_1800C3144 @ 0x1800C3144 (sub_1800C3144.c)
 *     sub_1800C31DC @ 0x1800C31DC (sub_1800C31DC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C2520(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180079060((__int64)a1, a2);
  v3 = sub_18007797C((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180258978, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180259138, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_180258938, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802588D8, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802588F8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_180258918, v7, 1LL);
  }
  sub_1800C31DC(a1);
  sub_1800C3144(a1);
  return sub_1800C3190(a1);
}
