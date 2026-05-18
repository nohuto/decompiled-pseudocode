/*
 * XREFs of sub_1800CE974 @ 0x1800CE974
 * Callers:
 *     sub_180042120 @ 0x180042120 (sub_180042120.c)
 *     sub_1800CF414 @ 0x1800CF414 (sub_1800CF414.c)
 *     sub_1800CF680 @ 0x1800CF680 (sub_1800CF680.c)
 *     sub_1800CF700 @ 0x1800CF700 (sub_1800CF700.c)
 *     sub_1800CF83C @ 0x1800CF83C (sub_1800CF83C.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800CE974(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
