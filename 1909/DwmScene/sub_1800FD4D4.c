/*
 * XREFs of sub_1800FD4D4 @ 0x1800FD4D4
 * Callers:
 *     ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_1 @ 0x180132CD8 (-catch$0@-0---$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXP_ea_180132CD8.c)
 * Callees:
 *     sub_1800FD308 @ 0x1800FD308 (sub_1800FD308.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FD4D4(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800FD308(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
