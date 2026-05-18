/*
 * XREFs of sub_180121D14 @ 0x180121D14
 * Callers:
 *     sub_180120710 @ 0x180120710 (sub_180120710.c)
 *     sub_1801218E4 @ 0x1801218E4 (sub_1801218E4.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18011EBC4 @ 0x18011EBC4 (sub_18011EBC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180121D14(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (_QWORD *)(a1 + 8);
  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18001110C(v4, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  sub_18011EBC4(a1 + 64, (_DWORD *)(a2 + 64));
  return a1;
}
