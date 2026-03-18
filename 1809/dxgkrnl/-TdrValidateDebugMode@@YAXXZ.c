/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C003A980
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C003AA24 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C020A080 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C020BCD4 (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
