/*
 * XREFs of sub_180013AA0 @ 0x180013AA0
 * Callers:
 *     sub_1800139C8 @ 0x1800139C8 (sub_1800139C8.c)
 *     sub_18001BE34 @ 0x18001BE34 (sub_18001BE34.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013AA0(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180146FF0;
  if ( qword_180269C80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180269C80 + 8LL))(qword_180269C80);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &off_180147048;
  *(_QWORD *)(a1 + 16) = off_1801470A0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
