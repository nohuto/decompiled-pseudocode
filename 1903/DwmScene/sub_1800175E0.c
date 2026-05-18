/*
 * XREFs of sub_1800175E0 @ 0x1800175E0
 * Callers:
 *     sub_1800167C8 @ 0x1800167C8 (sub_1800167C8.c)
 * Callees:
 *     sub_1800B6FF8 @ 0x1800B6FF8 (sub_1800B6FF8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800175E0(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreWorld::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801473E8;
  if ( qword_180268C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
  *(_QWORD *)a1 = &off_180147428;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800B6FF8(a1 + 48);
  return a1;
}
