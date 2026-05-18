/*
 * XREFs of sub_18011ECD4 @ 0x18011ECD4
 * Callers:
 *     sub_180121E24 @ 0x180121E24 (sub_180121E24.c)
 * Callees:
 *     sub_180122FD0 @ 0x180122FD0 (sub_180122FD0.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011ECD4(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = sub_180122FD0(a1 + 8, 0LL, 0LL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18012310C(a1, a2);
  return a1;
}
