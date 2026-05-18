/*
 * XREFs of sub_180121E24 @ 0x180121E24
 * Callers:
 *     sub_180120820 @ 0x180120820 (sub_180120820.c)
 *     sub_1801219F4 @ 0x1801219F4 (sub_1801219F4.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_18011ECD4 @ 0x18011ECD4 (sub_18011ECD4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180121E24(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (_QWORD *)(a1 + 8);
  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18001115C(v4, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  sub_18011ECD4(a1 + 64, (_DWORD *)(a2 + 64));
  return a1;
}
