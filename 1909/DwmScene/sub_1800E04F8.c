/*
 * XREFs of sub_1800E04F8 @ 0x1800E04F8
 * Callers:
 *     sub_1800E0938 @ 0x1800E0938 (sub_1800E0938.c)
 *     sub_180131121 @ 0x180131121 (sub_180131121.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E04F8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
