/*
 * XREFs of sub_1800FD3C4 @ 0x1800FD3C4
 * Callers:
 *     ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_1 @ 0x180132BC8 (-catch$0@-0---$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXP_ea_180132BC8.c)
 * Callees:
 *     sub_1800FD1F8 @ 0x1800FD1F8 (sub_1800FD1F8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FD3C4(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800FD1F8(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
