/*
 * XREFs of sub_1800E03E8 @ 0x1800E03E8
 * Callers:
 *     sub_1800E0828 @ 0x1800E0828 (sub_1800E0828.c)
 *     sub_180131011 @ 0x180131011 (sub_180131011.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E03E8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
