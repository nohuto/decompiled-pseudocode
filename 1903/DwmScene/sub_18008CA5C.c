/*
 * XREFs of sub_18008CA5C @ 0x18008CA5C
 * Callers:
 *     sub_18008CA5C @ 0x18008CA5C (sub_18008CA5C.c)
 *     sub_18008CAC8 @ 0x18008CAC8 (sub_18008CAC8.c)
 * Callees:
 *     sub_180087224 @ 0x180087224 (sub_180087224.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008CA5C @ 0x18008CA5C (sub_18008CA5C.c)
 */

void __fastcall sub_18008CA5C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 i; // rbx

  if ( *a3 )
  {
    sub_180087224(*a3, a2);
    v6 = *a3;
    sub_180087340(v6);
    v7 = *(_QWORD *)(v6 + 40);
    for ( i = *(_QWORD *)(v6 + 32); i != v7; i += 16LL )
      sub_18008CA5C(a1, a2, i);
  }
}
