/*
 * XREFs of sub_18010AF00 @ 0x18010AF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010AF00(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  sub_1800ABDC8((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
