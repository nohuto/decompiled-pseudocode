/*
 * XREFs of sub_1800872AC @ 0x1800872AC
 * Callers:
 *     sub_18008190C @ 0x18008190C (sub_18008190C.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 * Callees:
 *     sub_180083804 @ 0x180083804 (sub_180083804.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800872AC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_180087524(a1);
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_180087450(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_180083804(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
