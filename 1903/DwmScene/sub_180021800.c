/*
 * XREFs of sub_180021800 @ 0x180021800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE980 @ 0x1800CE980 (sub_1800CE980.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021800(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_1800CE980(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
