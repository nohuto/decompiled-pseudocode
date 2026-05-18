/*
 * XREFs of sub_180089698 @ 0x180089698
 * Callers:
 *     sub_180074EBC @ 0x180074EBC (sub_180074EBC.c)
 *     sub_180075350 @ 0x180075350 (sub_180075350.c)
 *     sub_1800BD4C4 @ 0x1800BD4C4 (sub_1800BD4C4.c)
 *     sub_180130547 @ 0x180130547 (sub_180130547.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180089698(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
