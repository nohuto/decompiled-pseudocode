/*
 * XREFs of sub_1800CEA84 @ 0x1800CEA84
 * Callers:
 *     sub_180042230 @ 0x180042230 (sub_180042230.c)
 *     sub_1800CF524 @ 0x1800CF524 (sub_1800CF524.c)
 *     sub_1800CF790 @ 0x1800CF790 (sub_1800CF790.c)
 *     sub_1800CF810 @ 0x1800CF810 (sub_1800CF810.c)
 *     sub_1800CF94C @ 0x1800CF94C (sub_1800CF94C.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800CEA84(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
