/*
 * XREFs of sub_18001757C @ 0x18001757C
 * Callers:
 *     sub_1800166DC @ 0x1800166DC (sub_1800166DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001757C(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreTexture::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180147398;
  if ( qword_180268C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
  *(_QWORD *)a1 = &off_1801473C0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
