/*
 * XREFs of sub_1800E020C @ 0x1800E020C
 * Callers:
 *     sub_1800E0758 @ 0x1800E0758 (sub_1800E0758.c)
 * Callees:
 *     sub_1800E0350 @ 0x1800E0350 (sub_1800E0350.c)
 */

_QWORD *__fastcall sub_1800E020C(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax

  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD *)(a2 + 728);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a1[1] = *(_QWORD *)(a2 + 720);
  a1[2] = *(_QWORD *)(a2 + 728);
  a1[3] = 0LL;
  a1[4] = 0LL;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  sub_1800E0350(a1);
  return a1;
}
