/*
 * XREFs of CitModerncoreShutdown @ 0x1C0185600
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0076B78 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C01D0CF0 )
    CitpLogoff(qword_1C01D0CF0);
}
