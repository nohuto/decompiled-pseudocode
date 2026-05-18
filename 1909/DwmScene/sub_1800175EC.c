/*
 * XREFs of sub_1800175EC @ 0x1800175EC
 * Callers:
 *     sub_18001674C @ 0x18001674C (sub_18001674C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800175EC(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreTexture::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180148398;
  if ( qword_180269C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180269C80 + 8LL))(qword_180269C80);
  *(_QWORD *)a1 = &off_1801483C0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
