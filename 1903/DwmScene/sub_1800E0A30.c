/*
 * XREFs of sub_1800E0A30 @ 0x1800E0A30
 * Callers:
 *     sub_1800E0990 @ 0x1800E0990 (sub_1800E0990.c)
 *     sub_1800E09A0 @ 0x1800E09A0 (sub_1800E09A0.c)
 *     sub_1800E09B0 @ 0x1800E09B0 (sub_1800E09B0.c)
 *     sub_1800E09C0 @ 0x1800E09C0 (sub_1800E09C0.c)
 *     sub_1800E09D0 @ 0x1800E09D0 (sub_1800E09D0.c)
 *     sub_1800E09E0 @ 0x1800E09E0 (sub_1800E09E0.c)
 *     sub_1800E09F0 @ 0x1800E09F0 (sub_1800E09F0.c)
 *     sub_1800E0A00 @ 0x1800E0A00 (sub_1800E0A00.c)
 *     sub_1800E0A10 @ 0x1800E0A10 (sub_1800E0A10.c)
 *     sub_1800E0A20 @ 0x1800E0A20 (sub_1800E0A20.c)
 * Callees:
 *     sub_1800E0828 @ 0x1800E0828 (sub_1800E0828.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0A30(_QWORD *a1, char a2)
{
  sub_1800E0828(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
