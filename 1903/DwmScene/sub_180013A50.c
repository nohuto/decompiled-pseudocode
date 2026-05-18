/*
 * XREFs of sub_180013A50 @ 0x180013A50
 * Callers:
 *     sub_180013978 @ 0x180013978 (sub_180013978.c)
 *     sub_18001BD24 @ 0x18001BD24 (sub_18001BD24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013A50(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180145FF0;
  if ( qword_180268C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &off_180146048;
  *(_QWORD *)(a1 + 16) = off_1801460A0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
