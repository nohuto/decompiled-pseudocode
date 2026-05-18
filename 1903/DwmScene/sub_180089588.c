/*
 * XREFs of sub_180089588 @ 0x180089588
 * Callers:
 *     sub_180074DAC @ 0x180074DAC (sub_180074DAC.c)
 *     sub_180075240 @ 0x180075240 (sub_180075240.c)
 *     sub_1800BD3B4 @ 0x1800BD3B4 (sub_1800BD3B4.c)
 *     sub_180130437 @ 0x180130437 (sub_180130437.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180089588(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
