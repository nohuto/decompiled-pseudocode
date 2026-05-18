/*
 * XREFs of sub_180087224 @ 0x180087224
 * Callers:
 *     sub_18008CA5C @ 0x18008CA5C (sub_18008CA5C.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180087224(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  result = sub_180087414(a1);
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 40LL))(*i, a2);
  }
  return result;
}
