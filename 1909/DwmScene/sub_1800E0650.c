/*
 * XREFs of sub_1800E0650 @ 0x1800E0650
 * Callers:
 *     sub_1800E0758 @ 0x1800E0758 (sub_1800E0758.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E0650(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ScissorState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 1164);
  return result;
}
