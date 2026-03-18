/*
 * XREFs of CitModerncoreShutdown @ 0x1C01C8190
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00808E0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C0215810 )
    CitpLogoff(qword_1C0215810);
}
