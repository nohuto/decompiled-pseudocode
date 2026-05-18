/*
 * XREFs of sub_1800F6550 @ 0x1800F6550
 * Callers:
 *     sub_1800FBAB0 @ 0x1800FBAB0 (sub_1800FBAB0.c)
 * Callees:
 *     sub_1800F667C @ 0x1800F667C (sub_1800F667C.c)
 */

__int64 __fastcall sub_1800F6550(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r10

  v4 = (a1[1] - *a1) / 12;
  v5 = sub_1800F667C(a1, a2);
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
  return sub_1800F6404(a1, v5, v4, a2);
}
