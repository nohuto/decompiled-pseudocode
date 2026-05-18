/*
 * XREFs of sub_18000E930 @ 0x18000E930
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028174 @ 0x180028174 (sub_180028174.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E930(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 1696);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1696) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_180028174(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
