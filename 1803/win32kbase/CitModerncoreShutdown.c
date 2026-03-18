/*
 * XREFs of CitModerncoreShutdown @ 0x1C0164E30
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C01A16B0 )
    CitpLogoff(qword_1C01A16B0);
}
