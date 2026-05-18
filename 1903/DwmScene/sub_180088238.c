/*
 * XREFs of sub_180088238 @ 0x180088238
 * Callers:
 *     sub_180088238 @ 0x180088238 (sub_180088238.c)
 *     sub_18008ABA8 @ 0x18008ABA8 (sub_18008ABA8.c)
 * Callees:
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180088238 @ 0x180088238 (sub_180088238.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180088238(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rsi
  __int64 i; // rbx

  v2 = *a2;
  sub_180087340(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x1800882AELL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_180088238(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
