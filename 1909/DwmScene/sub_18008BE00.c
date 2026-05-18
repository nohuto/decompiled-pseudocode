/*
 * XREFs of sub_18008BE00 @ 0x18008BE00
 * Callers:
 *     sub_18008BE00 @ 0x18008BE00 (sub_18008BE00.c)
 *     sub_18008CBD8 @ 0x18008CBD8 (sub_18008CBD8.c)
 * Callees:
 *     sub_180084F38 @ 0x180084F38 (sub_180084F38.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_18008BE00 @ 0x18008BE00 (sub_18008BE00.c)
 */

void __fastcall sub_18008BE00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 i; // rbx

  if ( *a3 )
  {
    sub_180084F38(*a3, a2);
    v6 = *a3;
    sub_180087450(v6);
    v7 = *(_QWORD *)(v6 + 40);
    for ( i = *(_QWORD *)(v6 + 32); i != v7; i += 16LL )
      sub_18008BE00(a1, a2, i);
  }
}
