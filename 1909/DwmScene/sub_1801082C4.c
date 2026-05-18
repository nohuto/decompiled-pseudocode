/*
 * XREFs of sub_1801082C4 @ 0x1801082C4
 * Callers:
 *     sub_1800D42B0 @ 0x1800D42B0 (sub_1800D42B0.c)
 *     sub_180130C23 @ 0x180130C23 (sub_180130C23.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1801082C4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
