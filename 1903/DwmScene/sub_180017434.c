/*
 * XREFs of sub_180017434 @ 0x180017434
 * Callers:
 *     sub_1800162EC @ 0x1800162EC (sub_1800162EC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017434(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreMaterial::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801471E8;
  if ( qword_180268C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
  *(_QWORD *)a1 = &off_180147260;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
