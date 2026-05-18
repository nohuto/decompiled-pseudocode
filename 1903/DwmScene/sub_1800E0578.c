/*
 * XREFs of sub_1800E0578 @ 0x1800E0578
 * Callers:
 *     sub_1800E0828 @ 0x1800E0828 (sub_1800E0828.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E0578(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
