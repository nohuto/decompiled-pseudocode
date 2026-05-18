/*
 * XREFs of sub_180017588 @ 0x180017588
 * Callers:
 *     sub_180016660 @ 0x180016660 (sub_180016660.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017588(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreSampler::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180148338;
  if ( qword_180269C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180269C80 + 8LL))(qword_180269C80);
  *(_QWORD *)a1 = &off_180148368;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
