/*
 * XREFs of sub_1800F0A50 @ 0x1800F0A50
 * Callers:
 *     sub_18008E014 @ 0x18008E014 (sub_18008E014.c)
 *     sub_1800984CC @ 0x1800984CC (sub_1800984CC.c)
 *     sub_18009C25C @ 0x18009C25C (sub_18009C25C.c)
 *     sub_1800ABB20 @ 0x1800ABB20 (sub_1800ABB20.c)
 *     sub_1800B7D98 @ 0x1800B7D98 (sub_1800B7D98.c)
 *     sub_180101B2C @ 0x180101B2C (sub_180101B2C.c)
 *     sub_180103BD0 @ 0x180103BD0 (sub_180103BD0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F0A50(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  v5 = (_QWORD *)(a1 + 24);
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18000F444(v5, a2);
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
