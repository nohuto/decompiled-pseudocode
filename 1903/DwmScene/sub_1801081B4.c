/*
 * XREFs of sub_1801081B4 @ 0x1801081B4
 * Callers:
 *     sub_1800D41A0 @ 0x1800D41A0 (sub_1800D41A0.c)
 *     sub_180130B13 @ 0x180130B13 (sub_180130B13.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1801081B4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
