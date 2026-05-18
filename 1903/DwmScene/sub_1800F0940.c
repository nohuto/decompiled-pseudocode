/*
 * XREFs of sub_1800F0940 @ 0x1800F0940
 * Callers:
 *     sub_18008DF04 @ 0x18008DF04 (sub_18008DF04.c)
 *     sub_1800983BC @ 0x1800983BC (sub_1800983BC.c)
 *     sub_18009C14C @ 0x18009C14C (sub_18009C14C.c)
 *     sub_1800ABA10 @ 0x1800ABA10 (sub_1800ABA10.c)
 *     sub_1800B7C88 @ 0x1800B7C88 (sub_1800B7C88.c)
 *     sub_180101A1C @ 0x180101A1C (sub_180101A1C.c)
 *     sub_180103AC0 @ 0x180103AC0 (sub_180103AC0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F0940(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  v5 = (_QWORD *)(a1 + 24);
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18000F3F4(v5, a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  *(_QWORD *)(a1 + 56) = *a3;
  *(_QWORD *)(a1 + 64) = a3[1];
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
