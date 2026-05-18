/*
 * XREFs of sub_18008719C @ 0x18008719C
 * Callers:
 *     sub_1800817FC @ 0x1800817FC (sub_1800817FC.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 * Callees:
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008719C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_180087414(a1);
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_180087340(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_1800836F4(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
