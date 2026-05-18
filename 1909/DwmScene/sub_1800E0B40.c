/*
 * XREFs of sub_1800E0B40 @ 0x1800E0B40
 * Callers:
 *     sub_1800E0AA0 @ 0x1800E0AA0 (sub_1800E0AA0.c)
 *     sub_1800E0AB0 @ 0x1800E0AB0 (sub_1800E0AB0.c)
 *     sub_1800E0AC0 @ 0x1800E0AC0 (sub_1800E0AC0.c)
 *     sub_1800E0AD0 @ 0x1800E0AD0 (sub_1800E0AD0.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     sub_1800E0AF0 @ 0x1800E0AF0 (sub_1800E0AF0.c)
 *     sub_1800E0B00 @ 0x1800E0B00 (sub_1800E0B00.c)
 *     sub_1800E0B10 @ 0x1800E0B10 (sub_1800E0B10.c)
 *     sub_1800E0B20 @ 0x1800E0B20 (sub_1800E0B20.c)
 *     sub_1800E0B30 @ 0x1800E0B30 (sub_1800E0B30.c)
 * Callees:
 *     sub_1800E0938 @ 0x1800E0938 (sub_1800E0938.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0B40(_QWORD *a1, char a2)
{
  sub_1800E0938(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
