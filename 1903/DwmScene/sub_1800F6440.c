/*
 * XREFs of sub_1800F6440 @ 0x1800F6440
 * Callers:
 *     sub_1800FB9A0 @ 0x1800FB9A0 (sub_1800FB9A0.c)
 * Callees:
 *     sub_1800F656C @ 0x1800F656C (sub_1800F656C.c)
 */

__int64 __fastcall sub_1800F6440(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r10

  v4 = (a1[1] - *a1) / 12;
  v5 = sub_1800F656C(a1, a2);
  v6 = a1[1];
  v7 = *a1;
  if ( *a1 != v6 )
  {
    v8 = v5 - v7;
    do
    {
      *(_QWORD *)(v8 + v7) = *(_QWORD *)v7;
      *(_DWORD *)(v8 + v7 + 8) = *(_DWORD *)(v7 + 8);
      v7 += 12LL;
    }
    while ( v7 != v6 );
  }
  return sub_1800F62F4(a1, v5, v4, a2);
}
