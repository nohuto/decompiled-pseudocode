/*
 * XREFs of sub_180017518 @ 0x180017518
 * Callers:
 *     sub_1800165F0 @ 0x1800165F0 (sub_1800165F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017518(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreSampler::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180147338;
  if ( qword_180268C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
  *(_QWORD *)a1 = &off_180147368;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
