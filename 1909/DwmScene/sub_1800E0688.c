/*
 * XREFs of sub_1800E0688 @ 0x1800E0688
 * Callers:
 *     sub_1800E0938 @ 0x1800E0938 (sub_1800E0938.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E0688(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
