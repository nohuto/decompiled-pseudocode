/*
 * XREFs of sub_1801082B0 @ 0x1801082B0
 * Callers:
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801082B0(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
