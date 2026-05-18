/*
 * XREFs of sub_18010B010 @ 0x18010B010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ABED8 @ 0x1800ABED8 (sub_1800ABED8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010B010(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  sub_1800ABED8((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
