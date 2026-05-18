/*
 * XREFs of sub_180017650 @ 0x180017650
 * Callers:
 *     sub_180016838 @ 0x180016838 (sub_180016838.c)
 * Callees:
 *     sub_1800B7108 @ 0x1800B7108 (sub_1800B7108.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017650(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreWorld::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801483E8;
  if ( qword_180269C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180269C80 + 8LL))(qword_180269C80);
  *(_QWORD *)a1 = &off_180148428;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800B7108(a1 + 48);
  return a1;
}
